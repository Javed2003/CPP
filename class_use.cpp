#include <iostream>
using namespace std;
class power
{
    float prodt;

public:
    power() // constructor
    {
        prodt = 1.0;
    }
    float calc_pow(float, int);
};

float power::calc_pow(float a, int b)
{
    int i;
    for (i = 1; i <= b; i++)
        prodt = prodt * a;
    return (prodt);
}

int main()
{

    float ans;
    power pow1; // create object
    // cout<<" enter  values of a,b: "<<endl;
    // cin>>a>>b;
    ans = pow1.calc_pow(4, 3);
    cout << " a to the power b is: " << ans << endl;
}
