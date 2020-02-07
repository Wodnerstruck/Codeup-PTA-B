
//输入短字符串
//随后输入一系列字符串，要求输出是删除掉短字符串和空格的字符串（删除不区分大小写）


//思路：先将短字符串转化为小写，后续字符串存储一个原字符串一个转化为小写的字符串，用bool函数判断是否该跳过输出，
//利用小写字符串的下标与原字符串相同来输出原字符串符合要求的字符
#include <cstdio>
#include <cstring>
bool Judge(char del[], char lower[], int i)
{
	for (int j = 0; j < strlen(del); j++) {
		if (del[j] != lower[i + j]) return false;
	}
	return true;
}
int main() {
	char del[10000];
	char org[10000];
	gets(del);
	for (int i = 0; i < strlen(del); i++) {
		if (del[i] >= 'A'&&del[i] <= 'Z') {
			del[i] = del[i] + 32;
		}
	}
	while (gets(org)) {
		char lower[10000];
		for (int i = 0; i < strlen(org); i++) {
			if (org[i] >= 'A'&&org[i] <= 'Z') {
				lower[i] = org[i] + 32;
			}
			else {
				lower[i] = org[i];
			}	
		}
		lower[strlen(org)] = '\0';
		int k = 0;
		while (k < strlen(org)) {
			if (lower[k] != ' '&&lower[k] != del[0])
			{
				printf("%c", org[k]);
				k++;
			}
			else if (lower[k] = del[0]) {
				if (strlen(lower) - k >= strlen(del)) {
					if (Judge(del, lower, k)) {
						k = k + strlen(del) ;
					}
					else {
						if(org[k]!=' ') printf("%c", org[k]);
						k++;
					}
				}
				else {
					if (org[k] != ' ') printf("%c", org[k]);
					k++;
				}
			}
		}
		printf("\n");
	}
}