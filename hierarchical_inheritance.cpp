// in this program we will use hierarchical inheritance in c++ programming
#include <iostream>
using namespace std;
class student
{
public:
    char name[50], course[25];
    int roll_no, no_of_data;
    cout<<"enter the numbers of students which will you want to store data :";
    cin>> no_of_data;
    void getdata()
    {
        for(int i=1;i<=no_of_data;i++)
        {
            cout<<"roll_no. : ";
            cin<<roll_no;
            cout<<"name : ";
            cin>>name;
            cout<<"course : ";
            cin>>course;
        }
    }
};