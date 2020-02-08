//M个数如果在N个数中出现过，输出YES,否则输出NO，N,M及输入的所有整数小于100000
#include <cstdio>
bool hashTable[100010]={false};
int main(){
    int m,n,x;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        hashTable[x]=true;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        if(hashTable[x]==true)
        printf("YES\n");
        else 
        printf("NO\n");
        
    }
    return 0;
}