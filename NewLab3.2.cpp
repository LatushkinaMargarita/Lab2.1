#include <iostream>
#include <algorithm>
using namespace std;

void zap(int mas[], int n)
{
	sort(mas, mas + n);
}

void test(int n, int mas[], int a, int b, int c)
{
	if (a*b*c == mas[n - 3] * mas[n - 1] * mas[n - 2])
		cout << "OK" << endl;
	else cout << "Fail" << endl;
}

int main()
{
	int mas[10] = { 12, 123, 34, 545, 66, 556, 56, 5, 45, 453 };
	zap(mas, 10);
	test(10, mas, 545, 556, 453);

	int mas1[5] = { 13, -3, 1234, 123, 12 };
	zap(mas1, 5);
	test(5, mas1, 1234, 123, 13);

	int mas2[6] = { 13, -3, -123, 123, 12, 1000 };
	zap(mas2, 6);
	test(6, mas2, 1000, 123, 13);

	int mas3[6] = { 1, 1, 1, 1, 1, 1 };
	zap(mas3, 6);
	test(6, mas3, 1, 1, 1);


}