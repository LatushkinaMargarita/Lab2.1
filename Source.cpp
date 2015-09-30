#include <iostream>
using namespace std;

void zapysk(int kol, int a[], int b[], int sum[], int pr[])
{
	for (int i = 0; i < kol; i++)
		sum[i] = a[i] + b[i];

	for (int i = 0; i < kol; i++)
	for (int j = 0; j < kol; j++)
		pr[i] = pr[i] + a[i] * b[j];
}

void main()
{
	int sum[10000] = { 0 };
	int pr[10000] = { 0 };

    int a[2] = { 3, 4 };
	int b[2] = { 1, -5 };
	zapysk(2, a, b, sum, pr);
	for (int i = 0; i < 2; i++)
		cout << sum[i] << "  " << pr[i] << endl;
}