#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
    int blocks[610];
    int l,n;
    while(scanf("%d%d",&l,&n)!=EOF){
        for(int i=0;i<n;i++){
            scanf("%d",&blocks[i]);
        }
        sort(blocks,blocks+n,cmp);
        int count=0;
        for(int i=0;i<n;i++){
            if(l<=0) break;
            l-=blocks[i];
            count++;
        }
        if(l<=0){
            printf("%d\n",count);
        }
        else
        {
            printf("impossible\n");
        }
        
    }
    return 0;
}