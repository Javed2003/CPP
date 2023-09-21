//static data member 
#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;

    public:
        void getdata(int a)
        {
            number=a;
            count++;
        }
        void getcount()
        {
            cout<<" count : "<<count<<endl;
        }
};

int item::count;

int main(){
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(1033);
    b.getdata(1254);
    // c.getdata(1365);

    cout<<"after reading data : "<<endl;

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}