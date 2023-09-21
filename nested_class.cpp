#include <iostream>
using namespace std;

class add
{
public:
    class sub
    {
    public:
        int a, b;
        void s()
        {
            a = 12;
            b = 10;
            int c;
            c = a - b;
            cout << "c = " << c << endl;
        }

        class mul
        {
        public:
            int a, b;
            void s()
            {
                a = 12;
                b = 10;
                int c;
                c = a * b;
                cout << "c = " << c << endl;
            }
        };
    };
};

int main()
{
    add::sub::mul h;
    h.s();
}