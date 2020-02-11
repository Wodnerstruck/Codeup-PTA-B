
#include <cstdio>
#include <cstring>
int main(){
    char s1[10010],s2[10010];
    int hashTable[130];
    memset(hashTable,0,sizeof(hashTable));
    while(gets(s1)!=NULL){
        gets(s2);
        for(int i=0;i<strlen(s2);i++){
            hashTable[s2[i]]++;
        }
        for(int i=0;i<strlen(s1);i++){
            if(hashTable[s1[i]]==0)
            printf("%c",s1[i]);
        }
        printf("\n");
        memset(hashTable,0,sizeof(hashTable));
    }
    return 0;
}
/*字符串相减
可将ASCII码直接当作字符的哈希值使用*/