#include <cstdio>
#include <cstring>
bool Judge( char str[]){
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-i-1]) return false;
        
    }
    return true;
}

int main(){
char string[256];
scanf("%s",string);
if( Judge(string)){
    printf("YES\n");
}
else printf("NO\n");

}