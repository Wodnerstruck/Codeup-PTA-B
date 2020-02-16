/*n种浓度解药，每种浓度为Pi%，体积均为v,要求配出浓度不超过w%的药水且体积达到最大
输出时输出整数体积和保留两位浮点数的药水浓度（百分数除以100）
*/
#include <cstdio>
#include <algorithm>
int drug[110];
int main(){
    int c;
    int n,v,w;
    scanf("%d",&c);
    while(c--){
        scanf("%d%d%d",&n,&v,&w);
        for(int i=0;i<n;i++){
            scanf("%d",&drug[i]);
        }
        std::sort(drug,drug+n);
        double tw=0,ltw=0; int tv=0; int sw=0;
        for(int i=0;i<n;i++){
           sw+=drug[i];
           ltw=tw;
           tw=double(sw)/(i+1);
           if(tw-(double)w>1e-6) {
               tw=ltw;
               break;}
           else
           {
               tv+=v;
           }
           
        }
        if(tv!=0){
           printf("%d %.2f\n", tv, tw/100.00);
        }
        else{
            printf("0 0.00\n");
        }

    }
}