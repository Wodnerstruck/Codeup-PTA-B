/*由全排列输出算法改进*/
#include <cstdio>
#include <cmath>
const int maxn=11;
int n,P[maxn],hashTable[maxn]={false};
int count=0;
void generateP(int index){
    if (index==n+1)
    {
        bool flag=true;//判断序列是否合法
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if (abs(i-j)==abs(P[i]-P[j]))
                {
                    flag=false;
                }
                
            }
        }
        if(flag) count++;
        return;//递归不要忘记return;
    }

    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){
            P[index]=x;
            hashTable[x]=true;
            generateP(index+1);
            hashTable[x]=false;
        }
    }
    
}
int main(){
    n=8;
    generateP(1);
}
