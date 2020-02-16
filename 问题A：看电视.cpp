/*区间贪心问题，选取最多不相交区间
*/
#include <cstdio>
#include <algorithm>
struct Inteval{
    int x,y;
}tv[101];
bool cmp(Inteval a,Inteval b){
    if(a.x!=b.x){
        return a.x>b.x;
    }
    else
    {
        return a.y<b.y;
    }
    
}
int main(){
    int n;
    while(scanf("%d",&n)&&n!=0){
        for(int i=0;i<n;i++){
            scanf("%d%d",&tv[i].x,&tv[i].y);
        }
        std::sort(tv,tv+n,cmp);
        int ans=1;
        int lastX=tv[0].x;
        for(int i=0;i<n;i++){
            if(tv[i].y<=lastX){
                lastX=tv[i].x;
                ans++;
            }
        }
        printf("%d\n",ans);
    }
}
