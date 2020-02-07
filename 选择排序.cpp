#include <cstdio>
//对n组数据进行从小到大排序，进行n次操作，每次选出最小的放到左边
const int n=10000;
int A[n];
void selectSort(){
    for(int i=0;i<=n-1；i++){
        int k=i;
       for(int j=0;j<=n-1,j++){
           if(A[j]<A[k]){
               k=j;
           }
       }
       int temp=A[i];
       A[i]=A[k];
       A[k]=temp;
    }
}