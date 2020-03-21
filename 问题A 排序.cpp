//输入的第一行包括一个整数n(1<=n<=100)。 接下来的一行包括n个整数。
//可能有多组测试数据，对于每组数据，将排序后的n个整数输出，每个数后面都有一个空格。每组测试数据的结果占一行。
#include <cstdio>
#include <algorithm>

int main(){
int n;
int a[100];
while(scanf("%d",&n)!=EOF){
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
std::sort(a,a+n);
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
} 
return 0;
}
