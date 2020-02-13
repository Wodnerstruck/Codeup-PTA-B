//数列片段和即为包含n个数的数列，其构成的所有连续子列的子列和之和
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double sum = 0.0, temp;
    for (int i = 1; i <= n; i++) { 
        cin >> temp;
        sum = sum + temp * i * (n - i + 1);
    }
    printf("%.2f", sum);
    return 0;
}
//三重暴力法会超时
//可以看出，读入的数所在的位置为i，在i位置及i之前，包含该数的子列起点情况有i种，在i之后，
//包含该数的终点情况有n-i+1种（包括起点终点均为该数字的情况），即加和时要将该数字加i*(n-i+1)次