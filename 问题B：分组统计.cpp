
//不使用标准库的做法
#include <cstdio>
#include <cstring>
const int maxn=2000;
int hashTable[maxn][maxn];
int main(){
    memset(hashTable,0,sizeof(hashTable));
    int m,n,a[101],t;
    scanf("%d",&m);
    while(m--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            hashTable[0][a[i]]=1;//哈希表第0行作为组元素输出标志，为1输出
        }
        for(int i=0;i<n;i++){
            scanf("%d",&t);
            hashTable[t][a[i]]++;//第t组的数字a[i]加一
            hashTable[t][0]=1;//哈希表第0列作为组号输出标志，为1输出
        }
        //输出过程（双for循环）
        for(int i=0;i<maxn;i++){
            if(hashTable[i][0]==1){//存在第i组
                printf("%d={",i);
                bool flag=false;//控制逗号的输出，false不输出
                for(int j=0;j<maxn;j++){
                    if(hashTable[0][j]==1){//i组中存在该数
                        if(flag)
                            printf(",");
                        else
                        flag=true;//下一个数据前输出逗号
                        printf("%d=%d",j,hashTable[i][j]);
                        
                    }
                }
                printf("}\n");
            }
        }
        memset(hashTable,0,sizeof(hashTable));
    }
    return 0;
}