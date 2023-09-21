#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata();
};

void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void employee ::getdata()
{
    cout << "value of a : " << a << endl;
    cout << "value of b : " << b << endl;
    cout << "value of c : " << c << endl;
    cout << "value of d : " << d << endl;
    cout << "value of e : " << e << endl;
}

int main()
{
    employee e1;
    e1.d = 1223;
    e1.e = 112;
    e1.setdata(12, 55, 66);
    e1.getdata();

    return 0;
}