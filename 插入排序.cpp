#include <cstdio>

 const int n=100;
 int A[n];
 void insertSort(){
     for(i=1;i<=n-1){
         int temp=A[i];
         j=i;
         while(j>0&&temp<A[j-1]){
             A[j]=A[j-1];
             j--;
         }
         A[j]=temp;
     }
 }