#include <iostream>
using namespace std;

void zapysk(int kol, int kol1, int a[], int b[], int sum[], int pr[], int ch[])
{
	if (kol > kol1)
	{
		ch[0] = kol;
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
		ch[0] = kol1;
		for (int i = 0; i < kol1; i++)
			sum[i] = b[i];

		int uk = kol1 - 1;
		for (int i = kol - 1; i >= 0; i--)
		{
			sum[uk] = sum[uk] + a[i];
			uk--;
		}
	}


	ch[1] = kol + kol1 - 1;
	for (int i = 0; i < kol; i++)
	for (int j = 0; j < kol1; j++)
		pr[i + j] = pr[i + j] + a[i] * b[j];
}

void main()
{
	int y;
	int ch[2] = { 0 };
	int sum[10000] = { 0 };
	int pr[10000] = { 0 };

	int a[2] = { 2, 1 };
	int b[3] = { 3, 5, 8 };
	zapysk(2, 3, a, b, sum, pr, ch);

	for (int i = 0; i < ch[0]; i++)
		cout << sum[i] << "  ";
	cout << endl;

	for (int i = 0; i < ch[1]; i++)
		cout << pr[i] << "  ";
	cout << endl;
}