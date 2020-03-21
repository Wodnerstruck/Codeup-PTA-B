#include <cstdio>
int main(){
    int n;
    int count[5]={0,0,0,0,0};
    int money[5]={50,20,10,5,1};
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<5;i++){
            count[i]=n/money[i];
            n=n%money[i];
        }
        bool flag=false;
        for(int i=0;i<5;i++){
            if(count[i]!=0){
                if(flag){
                    printf("+%d*%d",money[i],count[i]);
                }
                else{
                    printf("%d*%d",money[i],count[i]);
                    flag=true;
                }
            }
        }
        printf("\n");
    }
    return 0;
}