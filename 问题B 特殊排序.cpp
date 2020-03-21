#include <cstdio>
#include <algorithm>
int main(){
    int n;
    int a[1000];
    while(scanf("%d",&n)!=EOF){
        if(n==1){
            int b;
            scanf("%d",&b);
            printf("%d\n",b);
            printf("-1 ");
        }
        else{
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        std::sort(a,a+n);
        printf("%d\n",a[n-1]);
        for(int i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
        }
        printf("\n");
    }
}