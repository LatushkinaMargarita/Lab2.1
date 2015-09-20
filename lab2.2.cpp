#include <iostream>
#include <math.h>
using namespace std;
#include <iostream>
#include <math.h>

using namespace std;
const double pii = 3.1415926535;

double calculate(double e) {
    double pi = 1;
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
    } while (fabs(n) > (e / 4));
    
    return pi*4;
}
 void assert (double eps)
{
    double d = calculate(eps);
    if (fabs(d - pii) < eps)
    {
        cout<<"  ok "<< endl;
    }
    else
    {
        cout<<" ne ok "<<eps<<endl;
    }
}

int main()
{
    

    assert(0.01);
    assert(0.001);
    assert(0.0001);
    assert(0.00001);

 
    return 0;
}
