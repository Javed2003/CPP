#include <iostream>
using namespace std;
class number
{
    private:
        int x,y;
    public:
        void accept();
        int opp(char z);
};
void number::accept()
{
    cout<<"eneter the value of x : ";
    cin>>x;
    cout<<"enter the value of y : ";
    cin>>y;
}
int number::opp(char z)
{
    int s;
    switch (z)
    {
        case '+' : s=x+y;
        break;
        case '-' : s=x-y;
        break;
    }
    return (s);
}
int main()
{
    number num;
    char c;
    int ans;
    num.accept();
    cout<<"enter the operator (+ or -)";
    cin>>c;
    ans=num.opp(c);
    cout<<"the result is : "<<ans;

}
