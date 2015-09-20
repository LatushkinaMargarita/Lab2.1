#include <iostream>
using namespace std;
int main ()
{
	double x, e;
	cout << "Input x" << endl;
	cin >> x;
	cout << "Input accurancy e" << endl;
	cin >> e;
    double n = x;
    double sum = 0.0;
    int i = 1;
     do
    {
        sum += n;
        n *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    }
    while (fabs(n) > e/4);
	cout << sum << endl;
	system("pause");
	return 0;

}
