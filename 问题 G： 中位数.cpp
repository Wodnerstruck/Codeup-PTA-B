/*中位数定义：一组数据按从小到大的顺序依次排列，处在中间位置的一个数（或最中间两个数据的平均数）.
给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）

该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1<=N<=10000.
接着N行为N个数据的输入，N=0时结束输入
输出中位数，每一组测试数据输出一行
*/
#include <cstdio>
#include <algorithm>
using namespace std;
int a[10000];
int main(){
    int n;
    while(scanf("%d",&n)&&n!=0){
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        if(n%2!=0){
            printf("%d\n",a[n/2]);
        }
        else{
            int mid=(a[n/2-1]+a[n/2])/2;
            printf("%d\n",mid);
        }
    }
    return 0;
}