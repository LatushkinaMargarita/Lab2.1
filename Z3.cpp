#include <iostream>
using namespace std;

void zapysk(int kol, int kol1, int a[], int b[], int sum[], int pr[])
{
	if (kol > kol1)
	{
		for (int i = 0; i < kol; i++)
			sum[i] = a[i];

		int uk = kol - 1;
		for (int i = kol1 - 1; i >= 0; i--)
		{
			sum[uk] = sum[uk] + b[i];
			uk--;
		}
	}
	else
	{
		for (int i = 0; i < kol1; i++)
			sum[i] = b[i];

		int uk = kol1 - 1;
		for (int i = kol - 1; i >= 0; i--)
		{
			sum[uk] = sum[uk] + a[i];
			uk--;
		}
	}



	for (int i = 0; i < kol; i++)
	for (int j = 0; j < kol1; j++)
		pr[i + j] = pr[i + j] + a[i] * b[j];
}

void main()
{
	int sum[10000] = { 0 };
	int pr[10000] = { 0 };

	int a[2] = { 2, 1 };
	int b[3] = { 3, 5, 8 };
	zapysk(2, 3, a, b, sum, pr);

	for (int i = 0; i < 5; i++)
		cout << sum[i] << "  " << pr[i] << endl;
}