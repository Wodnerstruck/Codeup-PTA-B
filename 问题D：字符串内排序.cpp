//字符串内可能含有空格，从小到大排序不用写cmp函数
//有空格输出用puts
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char a[201];
	while(gets(a)){
		int len=strlen(a);
		sort(a, a+len);
		puts(a);
	}
	return 0;
}

