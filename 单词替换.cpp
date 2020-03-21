#include <cstdio>
#include <cstring>
//注意字符串数组大小至少比字符串最大长度多一
int main(){
    char str[101];
    char a[101];
    char b[101];
    while(gets(str)!=NULL){
        gets(a);
        gets(b);
        char divid[101][101];
        int len = strlen(str),r=0,h=0;
        for(int i=0;i<len;i++){
            if(str[i]!=' '){//不是空格，存放至divid[r][h]
            divid[r][h++]=str[i];
            }else{
                divid[r][h]='\0';
                r++;
                h=0;
            }
        }
        divid[r][h]='\0';

        for(int i=0;i<=r;i++){
            if(strcmp(divid[i],a)==0) {
                strcpy(divid[i],b);
            }
            printf("%s",divid[i]);
            if(i<r) printf(" ");
            else if(i==r) printf("\n");
        }

    }
    return 0;
}
