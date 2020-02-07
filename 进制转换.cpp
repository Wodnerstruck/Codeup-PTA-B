//涉及16进制，使用字符串
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
 char string[17]="0123456789ABCDEF";
 char string2[17]="0123456789abcdef";
int main(){
    //a 进制数n转换为b进制数
    int a,b;
     char n[70];
     while(scanf("%d%s%d",&a,n,&b)!=EOF){
         //转为十进制
         int deci=0;
         int lenthn=strlen(n);
         for(int i=0;i<lenthn;i++){
             for(int j=0;j<strlen(string);j++){
                 if(n[i]==string[j]||n[i]==string2[j]) deci+=j*pow(a,lenthn-i-1);
             }
         }
         //十进制转为b进制
         char ans[70];
         int count=0;
         do{
             int value=deci%b;
             ans[count++]=string[value];
             deci=deci/b;

         }while(deci);
         ans[count]='\0';

         for(int i=count-1;i>=0;i--){
             printf("%c",ans[i]);
         }
         printf("\n");

                   

     }
return 0;
}