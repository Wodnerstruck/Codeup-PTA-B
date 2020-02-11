#include <cstdio>
#include <cstring>
int hashTable[10010];
int input[100010];
int main(){
int n;
memset(hashTable,0,sizeof(hashTable));
while(scanf("%d",&n)!=EOF){
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
        hashTable[input[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hashTable[input[i]]==1) {
            printf("%d\n",input[i]);
            break;
        }
        else if(i==n-1&&hashTable[input[i]]!=1)
        {
            printf("None\n");
        }
        

    }
memset(hashTable,0,sizeof(hashTable));
}
return 0;
}
