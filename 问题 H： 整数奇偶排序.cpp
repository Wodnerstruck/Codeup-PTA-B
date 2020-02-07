/*输入10个整数，彼此以空格分隔。重新排序以后输出(也按空格分隔)，要求:
1.先输出其中的奇数,并按从大到小排列；
2.然后输出其中的偶数,并按从小到大排列。
多组数据，注意输出格式

1. 测试数据可能有很多组，请使用while(cin>>a[0]>>a[1]>>...>>a[9])类似的做法来实现;
2. 输入数据随机，有可能相等。
*/
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int a[10];
    int odd[10], even[10];
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9])!=EOF){
        int oddc=0,evenc=0;
        for(int i=0;i<10;i++){
            if(a[i]%2!=0){//奇数
                odd[oddc++]=a[i];
            }
            else{
                even[evenc++]=a[i];
            }
        }
    sort(odd,odd+oddc,cmp);
    sort(even,even+evenc);
    for(int i=0;i<oddc;i++){
        printf("%d ",odd[i]);
    }
    for(int i=0;i<evenc;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    }
    return 0;
}