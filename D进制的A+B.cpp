#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b,d;
    cin>>a>>b>>d;
    int sum=a+b;
    vector <int> num;
    
    do{
        num.push_back(sum%d);
        sum=sum/d;

    }while(sum!=0);
    for(int i=num.size()-1;i>=0;i--)
    printf("%d",num[i]);

}