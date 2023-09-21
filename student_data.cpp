#include <iostream>
using namespace std;

class student
{
private:
    char name[50], dep[100];
    int roll, batch;

public:
    void getdata()
    {

        cout << "enter student name : ";
        cin >> name;
        cout << "enter student roll number : ";
        cin >> roll;
        cout << "enter student department : ";
        cin >> dep;
        cout << "enter student batch ";
        cin >> batch;
    }
    void show_data()
    {
        cout<<"All information about a student:"<<endl;
        cout << "Name : " << name <<endl;
        cout << "Roll_ no : " << roll <<endl;
        cout << "Department : " << dep <<endl;
        cout << "Batch : " << batch <<endl;
        cout << endl;
    }
};

int main()
{   int n,i;
    // cout<<"enter the number which you want to do store : ";
    // cin>>n;
    student s;
    s.getdata();
    s.show_data();
    // for(i=0;i<n;i++)
    // {
    //     cin>>s[i];
    // }
}