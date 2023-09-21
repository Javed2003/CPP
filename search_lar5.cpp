// Search the 2nd laegest number in array
#include <iostream>
using namespace std;
class larg
{
private:
    int i, n, m1, m2, a[100];
    int t = 0, t1 = 0;

public:
    void getdata()
    {
        cout << "enter the number of elements in array : ";
        cin >> n;
        cout << "Enter the elements in array : " << endl;
        for (i = 0; i <= n; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        cout << "Data of array is : " << endl;
        for (i = 0; i <= n; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
    void largest()
    {
        for (i = 0; i <= n; i++)
        {
            if (a[0] < a[i])
            {

                t = a[i];
                // a[0] = a[i];
            }
            else
            {
                t = a[0];
            }
        }
        cout << "largest no in array is : " << t << endl;

        for (i = 0; i <=n; i++)
        {
            if (a[i]<t)
            {
                t1= a[i];
            }
        }

        cout << "second largest number is : " << t1 << endl;
    }
};
int main()
{
    larg l1;
    l1.getdata();
    l1.display();
    l1.largest();
}