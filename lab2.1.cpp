#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
double osnova (int X1, double E1)
{
    double n = X1;
    double sum = 0.0;
    int i = 1;
    do
    {
        sum += n;
        n *= -1.0 * X1 * X1 / ((2 * i) * (2 * i + 1));
        i++;
    }
    while (fabs(n) > E1);
    
    return sum;
}

void assert (int X, double E)
{
    if (fabs (sin(X)- osnova( X, E)) < E)
    {
        cout<<" ok "<<endl;
    }
    else
    {
        cout<<" ne ok "<<X<<endl;
    }
}
int main ()
{
    assert(10,0.01);
     assert(8,0.00001);
     assert(7,0.01);
     assert(9,0.0001);
     assert(5,0.0001);
    return 0;
    
}
