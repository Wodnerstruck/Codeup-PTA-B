#include <cstdio>
int main(){
    char a[101],b[101];
    while(scanf("%s%s",a,b)!=EOF){
        char c[201];
        int i=0;
        for( ;a[i]!='\0';i++){
            c[i]=a[i]
        }
        int temp=i;
        for( ;b[i-temp]!='\0';i++){
            c[i]=b[i-temp];
        }
        c[i]='\0';
        printf("%s",c);
        printf("\n");
    }
    return 0;
}