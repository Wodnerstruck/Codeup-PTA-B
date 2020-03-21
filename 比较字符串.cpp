//比较的两个字符串在同一行输入
#include <cstdio>
#include <cstring>

int main(){
    int m;
    scanf("%d",&m);
    char a[60];
    char b[60];
    while(m--){
        scanf("%s%s",a,b);
        
        int lena=strlen(a);
        int lenb=strlen(b);
        if(lena>lenb) printf("%s is longer than %s\n",a,b);
        else if(lena==lenb) printf("%s is equal long to %s\n",a,b);
        else printf("%s is shorter than %s\n",a,b);



    }
    return 0;
}