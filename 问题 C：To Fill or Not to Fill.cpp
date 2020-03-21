/*

*/
#include <cstdio>
#include <algorithm>
using namespace std;
struct Station{
        double price;
        double dist;
    }sta[510];
    bool cmp(Station a,Station b){
        return a.dist<b.dist;
    }
int main(){
    int cmax,d,da,n;
    int now=0,c=0,min;
    double cost=0;
    while(scanf("%d%d%d%d",&cmax,&d,&da,&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%lf%lf",&sta[i].price,&sta[i].dist);
        }
        //将目的地设为加油站
        sta[n].dist=d;sta[n].price=0;
        sort(sta,sta+n+1,cmp);//按到起点的距离排序
        if(sta[0].dist!=0){
            printf("The maximum travel distance = 0.00\n");    
        }
        else{
            while(now<n){
                min=now;
                if(sta[now].dist+cmax*da<sta[now+1].dist){//耗完汽油到不了下一站
                     printf("The maximum travel distance = %.2f\n",sta[now].dist+cmax*da);
                     break;
                }
                for(int i=now+1;i<n;i++){
                    if(sta[i].dist>sta[now].dist+cmax*da)break;
                    if(sta[i].price<sta[now].price){
                        min=i;
                        break;
                    }
                }
                if(min==now){//并没有找到比当前站油更便宜的加油站，寻找除当前加油站里便宜的加油站
                    min=now+1;
                    for(int i=now+2;i<n;i++){
                        if(sta[now].dist+cmax*da<sta[i].dist) break;
                        if(sta[i].price<sta[min].price){
                            min=i;
                            break;
                        }
                    }
                    //在当前加油站加满计算油价和耗油量
                    cost+=sta[now].price*(cmax-c);
                    c=cmax-(sta[min].dist-sta[now].dist)/da;
                    now=min;
                }
                else{//找到了更便宜的加油站,加油加到刚好到下一站用完，计算油价
                c=(sta[min].dist-sta[now].dist)/da-c;
                cost+=c*sta[now].price;
                c=0;
                now=min;
                }
            }
            if(now==n){//到达终点,输出花费
            printf("%.2f\n",cost);
            }
        }
        
    }
}