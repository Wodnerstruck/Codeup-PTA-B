#include <cstdio>
#include <vector>
using namespace std;
int main(){
    long long a,b;
    int m;
  while(scanf("%d%d%d",&m,&a,&b)){
      if(m==0) break;
    long long sum=a+b;
    vector <int> num;
    
    do{
        num.push_back(sum%m);
        sum=sum/m;

    }while(sum);
    for(int i=num.size()-1;i>=0;i--)
    printf("%d",num[i]);

    printf("\n");
  }
  return 0;
}//注意a,b也为long long 型，否则出错