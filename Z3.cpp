#include <iostream>
using namespace std;

void zapysk(int kol, int kol1, int a[], int b[], int sum[], int pr[])
{
	if (kol>kol1)
	  for (int i = 0; i < kol; i++)
		sum[i] = a[i] + b[i];
	else
	for (int i = 0; i < kol1; i++)
		sum[i] = a[i] + b[i];

	
	for (int i = 0; i < kol; i++)
	for (int j = 0; j < kol1; j++)
		pr[i+j] = pr[i+j] + a[i] * b[j];
}

void main()
{
	int sum[10000] = { 0 };
	int pr[10000] = { 0 };

	int a[3] = { 3, 4, 6 };
	int b[3] = { 1, 1, 4 };
	zapysk(3, 3, a, b, sum, pr);
	for (int i = 0; i < 5; i++)
		cout << sum[i] << "  " << pr[i] << endl;
}
