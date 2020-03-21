#include <cstdio>
int F(int f){
    if(f==0) return 0;
    if(f==1) return 1;

    return F(f-2)+F(f-1);
}

int main(){
    int m,n;
    scanf("%d",&m);
    while(m--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                printf("  ");
            }
            for(int j=0;j<2*i+1;j++){
                printf("%d ",F(j));
            }
            printf("\n");
        }
    }
    return 0;
}