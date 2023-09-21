#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;

    void getdata()
    {
        cout << "enter the student roll_no: ";
        cin >> roll_no;
        cout
            << "enter the of student: ";
        cin >> name;
    }
    void displaydata()
    {
        cout << endl
             << "roll_no: " << roll_no << endl
             << "Name: " << name << endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.displaydata();
}