#include <cstdio>
#include <cstring>

int main(){
    char s[201];
    while(gets(s)!=NULL){
        int len=strlen(s);
        for(int i=len-1;i>=0;i--){
            printf("%c",s[i]);
        }
        printf("\n");
    }
}