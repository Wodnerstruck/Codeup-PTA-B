//n个糖果，一天可以吃一颗也可以吃两颗，问有多少种吃法
//与斐波那契数列的递推函数一致
#include <cstdio>
int F(int n){
    if(n==0||n==1)
    return 1;
    else
    return F(n-2)+F(n-1);       
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",F(n));
    }
    return 0;
}