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
	int rezsum[10000] = { 4, -1 };
	int rezpr[10000] = { 3, -11, 20 };
	int a[2] = { 3, 4 };
	int b[2] = { 1, -5 };
	if (sum[1]==rezsum[1])
		cout<< "ok"<<endl;
	else 
		cout<< "false"<<endl;
	if (sum[2]==rezsum[2])
		cout<< "ok"<<endl;
	else 
		cout<< "false"<<endl;
	if (pr[1]==rezpr[1])
		cout<< "ok"<<endl;
	else 
		cout<< "false"<<endl;
	if (pr[2]==rezpr[2])
		cout<< "ok"<<endl;
	else 
		cout<< "false"<<endl;
	if (pr[3]==rezpr[3])
		cout<< "ok"<<endl;
	else 
		cout<< "false"<<endl;
	system("pause");
}
