#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
	double pi=1,  e;
	cout << "Input accuracy e"<< endl;
	cin >> e;
	double n=1,z;
    int i = 0;
	int f=1;
     do
    {
		z = (2.0*i + 1.0)/(2.0*i+3.0);
        n= n*(-1)*z  ;

		pi += n;
        i++;
		f++;
    }
    while (fabs(n) > e);

		
	
	cout << "Pi= " <<4* pi << endl;
	system ("pause");
	return 0;
}
