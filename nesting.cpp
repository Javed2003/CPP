#include <iostream>
using namespace std;

class set
{
    int n, m;

public:
    void getdata(void);
    int largest(void);
    void display(void);
};

void set::getdata(void)
{
    cout << "enter the value of n and m : ";
    cin >> n >> m;
}

int set::largest(void)
{
    if (m >= n)
        return (m);
    else
        return (n);
}

void set::display(void)
{
    cout << "largest value is " << largest() << endl;
}

int mian()
{
    set s;
    s.getdata();
    s.display();
    return 0;
}