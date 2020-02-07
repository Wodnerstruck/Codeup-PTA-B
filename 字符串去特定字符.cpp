#include <cstdio>
#include <cstring>

int main (){
     char s[10000];
     char c;
     while(gets(s)!=NULL){
        c=getchar();
        getchar();
        int len=strlen(s);
        for(int i=0;i<len;i++){
            if(s[i]!=c) printf("%c",s[i]);
        }
        printf("\n");
     }
     return 0;
}