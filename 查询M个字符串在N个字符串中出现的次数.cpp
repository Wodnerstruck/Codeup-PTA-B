//给出N个字符串（每个恰好由三个大写字母组成），给出M个字符串，查询其在N个字符串中出现的次数
#include <cstdio>
int hashTable[26*26*26];
int hashFunc_26(char S[],int len){
    int id=0;
    for(int i = 0;i<len;i++){
        id = id*26 + (S[i] - 'A');
    }
    return id;
}
int main(){
    char S[5];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 0;i < m;i++){
        scanf("%s",S);
        int id = hashFunc_26(S,3);
        hashTable[id]++;
    }
    for(int i=0;i<m;i++){
        scanf("%s",S);
        int id = hashFunc_26(S,3);
        printf("%d\n",hashTable[id]);
    }
    return 0;
}