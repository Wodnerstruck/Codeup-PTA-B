// 每个案例第一行两个整数N,M，2 <= N ，M<= 200。
//接下来有N行，第i(i = 1,2,…,N)行每一行有一个数，表示读者i-1最喜欢的图书的编号P(1<=P<=M)
// 每个案例包括N行，每行一个数，
//第i行的数表示读者i有几个潜在朋友。如果i和任何人都没有共同喜欢的书，则输出“BeiJu”（即悲剧，^ ^）

#include <cstdio>
int main(){
    int n,m;
   
    while(scanf("%d%d",&n,&m)!=EOF){
         int reader[201]={0},book[201]={0};//数组初始化很重要，否则造成结果错误
         for(int i=0;i<n;i++){
             int x;
             scanf("%d",&x);
             reader[i]=x;
             book[x]++;
         }
         for(int i=0;i<n;i++){
             if(book[reader[i]]==1) printf("BeiJu\n");
             else printf("%d\n",book[reader[i]]-1);
         }
    }
    return 0;
}