#include <cstdio>
#include <algorithm>
struct Food{
    double j;
    double f;
    double p;
}food[1005];
bool cmp(Food a,Food b){
    return a.p-b.p>1e-6;
}
int main(){
    int m;
    int n;
    while(scanf("%d%d",&m,&n)&&m!=-1){
           for(int i=0;i<n;i++){
               scanf("%lf%lf",&food[i].j,&food[i].f);
               food[i].p=food[i].j/food[i].f;
           }
           std::sort(food,food+n,cmp);
           double Javabean=0;
           double Catfood=(double)m;
           for(int i=0;i<n;i++){
              if(Catfood==0) break;
               if(Catfood-food[i].f>=1e-6){
                   Catfood-=food[i].f;
                   Javabean+=food[i].j;
               }
               else{
                   Javabean+=food[i].p*Catfood;
                   Catfood=0.000;
               }
           }
           printf("%.3f\n",Javabean);
    }
    return 0;
}