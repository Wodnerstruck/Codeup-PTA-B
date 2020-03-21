//八皇后问题共92组解，求第b组解对应的皇后串，套用回溯法代码
#include <cstdio>
#include <cmath>
const int maxn=11;
const int n=8;
int P[maxn],hashTable[maxn]={false};
int count=0;
void generateP(int index,int b){
    if (index==n+1)//到达边界条件必合法
    {
        count++;
        if(count==b){//找到对应皇后串
            for(int i=1;i<=n;i++){
                printf("%d",P[i]);
            }
            printf("\n");
        }
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
               generateP(index+1,b);
               hashTable[x]=false;
           } 
    }
    
}
}
int main(){
    int N;//测试组数
    int b;//皇后串编号
    scanf("%d",&N);
    while(N--){
        scanf("%d",&b);
        generateP(1,b);
        count = 0;//输出一个后count要归零！！！！
    }
    
    return 0;
}