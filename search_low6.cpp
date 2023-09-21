// search 2nd lowest number uin array
#include <iostream>
using namespace std;
class low
{
private:
    int i, n, a[100];

public:
    void getdata()
    {
        cout << "enter the number of elements in array : ";
        cin >> n;
        cout << "Enter the elements in array : " << endl;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        cout << "Data of array is : " << endl;
        for (i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    low l1;
    l1.getdata();
    l1.display();
}