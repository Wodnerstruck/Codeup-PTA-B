//编排字符串
//scanf读入整数后，后面的回车要用getchar()吸收，否则后面再用gets()会出错
//scanf除读入%s外，其他变量需要加&
#include <cstdio>
#include <cstring>
char ms [100][21];
int main(){
int m;
scanf("%d",&m);
getchar();
 int r=0;
while(m--){
gets(ms[r]);
int j=1;

for(int i=r;i>r-4;i--){
   if(i<0) break;
   printf("%d=%s ",j,ms[i]);
   j++;   
}
printf("\n");
r++;


}
}