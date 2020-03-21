//二分法简例
#include <cstdio>
#include <algorithm>
int BinarySearch(int A[],int a,int x){
    int left=0,right=a,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(A[mid]==x) return mid;
        else if(A[mid]>x) right=mid-1;
        else left=mid+1;
    }
    return -1;
    
}
int main(){
    int n,x;
    int a[201];
    while(scanf("%d",&n)!=EOF){
        for (int i = 0; i < n; i++)
        {
           scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        std::sort(a,a+n);
        int answer=BinarySearch(a,n-1,x);
        printf("%d\n",answer);
        
    }
}