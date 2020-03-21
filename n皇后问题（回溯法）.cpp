//将判断程序移植到生成排列的代码中，一旦排列不合法，break返回上一层,可减少复杂度
#include <cstdio>
#include <cmath>
const int maxn=11;
int n,P[maxn],hashTable[maxn]={false};
int count=0;
void generateP(int index){
    if (index==n+1)//到达边界条件必合法
    {
        count++;
        return;//递归不要忘记return
    }

    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){//第x行还没有皇后
           bool flag=true;//为true则当前皇后不会与之前的皇后冲突
           for(int pre=1;pre<index;pre++){
               if(abs(index-pre)==abs(x-P[pre])){
                   flag=false;//一条对角线，冲突
                   break;
               }
           }
           if(flag){
               P[index]=x;
               hashTable[x]=true;
               generateP(index+1);
               hashTable[x]=false;
           } 
    }
    
}
}
int main(){
    n = 8;
    generateP(1);
    printf("%d",count);
    return 0;
}
