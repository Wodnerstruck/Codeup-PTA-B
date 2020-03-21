//容积40的口袋，给出n个物品（小于20),求从中选择物品刚好装满口袋的方法有多少种
#include <cstdio>
int a[21]={0};
int Sele(int m,int n){
    if(m==0)
    return 1;//刚好装满，口袋容积正好扣完，计一种方法
    if(n==0||m<0)//容积超过，或刚好没有物品，不计
    return 0;

return Sele(m,n-1)+Sele(m-a[n],n-1);//总情况等于选择该物品和不选择该物品的情况之和
    
}

int main(){
   int n;
   while(scanf("%d",&n)!=EOF){
       for(int i=1;i<=n;i++){
           scanf("%d",&a[i]);
       }
       printf("%d",Sele(40,n));
   }
}
