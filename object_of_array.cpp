// array of objects
#include <iostream>
using namespace std;

class employee
{
    char name[30];
    int age;

public:
    void getdada()
    {
        cout << "enter the employee name : ";
        cin >> name;
        cout<< "enter the employee age : ";
        cin >> age;
    }

    void putdata()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
    }
};

const int siz = 4;
int main()
{
    employee worker[siz];
    for (int i = 0; i < siz; i++)
    {
        cout << "worker " << i + 1 << endl;
        worker[i].getdada();
    }
    cout << "data of all workers : " << endl;
    for (int i = 0; i < siz; i++)
    {
        cout << "worker " << i + 1 << endl;
        worker[i].putdata();
    }

    return 0;
}