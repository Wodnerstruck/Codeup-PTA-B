/*起步4公里10元，之后4公里每公里2元，后来每公里2.4元，求最小花费
必要时输出小数，结果为整数直接输出整数！！！！！
*/
#include <cstdio>

int main() {
	int n;//总公里数
	while (scanf("%d", &n) && n != 0) {
		double price;
		if (n <= 8) {
			 if(n<=4)price = 10.000;
			 else price = 10.000 + (n - 4)*2.000;
		}
		else if (n % 8 == 0) {
			price = n*2.250;
		}
		else {
			if (n % 8 <= 5) {
				price = (n-(n%8))*2.250 + (n % 8)*2.400;
			}
			else {
				price = (n-n%8)*2.250 + 10.000 + ((n % 8) - 4)*2.000;
			}
		}
		if(price-(int)price>1e-6)//判断是否为小数
		printf("%.1f\n", price);
		else
		printf("%d\n",(int)price);
	}
	return 0;
}