#include <cstdio>

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
for(int i=0;i<N;i++){
    int s=2*N-2*(1+i);
    int c=N+2*i;
    while(s--){printf(" ");}
    while(c--){printf("*");}
    if(i!=N-1){
        printf("\n\n\n")
    }
}

    }
    return 0;
}