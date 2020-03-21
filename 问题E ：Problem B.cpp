//请写一个程序，对于一个m行m列的（1<m<10）的方阵，
//求其每一行，每一列及主对角线元素之和，最后按照从大到小的顺序依次输出。
//输入整数m,接下来m行每行m个整数
//从大到小排列的一行整数，每个整数后跟一个空格，最后换行。
//注意主对角线算两条！！！！！！！！！！！
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int m;
    int a[10][10];
    int b[30];
    while(scanf("%d",&m)!=EOF){
    for(int i=0;i<m;i++){//输入方阵
        for(int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);

        }
    }
    int num=0;//求和的结果数，也可当作b的下标
//将每一行数据之和填入数组b
for(int i=0;i<m;i++){
    int sumr=0;
    for(int j=0;j<m;j++){
        sumr+=a[i][j];
    }
    b[num++]=sumr;
}
//将每一列数据之和填入数组b
for(int i=0;i<m;i++){
    int sumc=0;
    for(int j=0;j<m;j++){
        sumc+=a[j][i];
    }
    b[num++]=sumc;
}
//计算对角线数据之和填入b
int suma=0;
for(int i=0;i<m;i++)
    suma+=a[i][i];
b[num++]=suma;
//另一条对角线
int suma2=0;
for(int i=0;i<m;i++)
    suma2+=a[i][m-i-1];
b[num++]=suma2;
sort(b,b+num,cmp);
for(int i=0;i<num;i++)
    printf("%d ",b[i]);
    printf("\n");
    }
    return 0;
}