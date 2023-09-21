#include <iostream>
using namespace std;

const int s = 10; // initilization of an integer type variable which const means its value is not changeble

class array     //declare a class with name array
{
    int a[s];       // by default private
    void getdata(); // declaration of private member function

public:
    void display(); // declaration of public meber function
    void invers();
};

void array::getdata() // definition of private member function
{
    cout << "Enter the elements in array : " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
}

void array::display() // definition of public member function
{
    getdata(); // call the private member function without objects
    // private member function is not call outside of class
    cout << "ELEMENTS IN ARRAY IS : " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << endl;
    }
}

void array::invers()
{
    cout<<"array elments in invers : ";
}

int main()
{
    array a;     // create an object
    a.display(); // call the public membre function by the help of object

    return 0;
}