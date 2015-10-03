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

void assert(int sum[], int pr[], int sum_[] ,int pr_[],int ch[])
{
	bool ok = true;
    for (int i = 0; i < ch[0]; ++i)
        ok &= (sum[i] == sum_[i]);
    for (int i = 0; i < ch[1]; ++i)
        ok &= (pr[i] == pr_[i]);
    if (ok)
        cout <<"ok"<< endl;
    else
        cout<<"fail"<<endl;
}
int main()
{
	int ch[2] = { 0 };
	int sum[10000] = { 0 };
	int pr[10000] = { 0 };
	int a[3] = { 3, -2, 1 };
	int b[2] = { 5,-3};
	zapysk(3, 2, a, b, sum, pr,ch);
	int sum1[3]= { 3,3,-2};
	int pr1[4] = { 15,-19,11,-3};
	assert(sum,pr,sum1,pr1,ch);

	int ch1[2] = { 0 };
	int summ[10000] = { 0 };
	int prr[10000] = { 0 };
	int a2[2] = { 1, -1 };
	int b2[2] = { 1, 1 };
	zapysk(2, 2, a2, b2, summ, prr,ch1);
	int sum2[2]= {2,0};
	int pr2[3] = { 1,0,-1};
	assert(summ,prr,sum2,pr2,ch1);
	

	int ch2[2] = { 0 };
	int summ2[10000] = { 0 };
	int prr2[10000] = { 0 };
	int a3[2] = { 2, -5 };
	int b3[2] = { 3, -8 };
	zapysk(2, 2, a3, b3, summ2, prr2,ch2);
	int sum3[2]= {5,-13};
	int pr3[3] = { 6,-31,40};
	assert(summ2,prr2,sum3,pr3,ch2);
	system("pause");
	return 0;
}
