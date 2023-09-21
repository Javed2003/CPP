#include <iostream>
using namespace std;
int main()
{
    int day, week, year, week1, year1, day1, week2;
    cout << "enter the number of days=";
    cin >> day;
    week = day / 7;
    week1 = day % 7;
    year = day / 365;
    year1 = day % 365;
    week2 = year1 / 7;
    day1 = year1 % 7;

    cout << week << " week " << week1 << " days " << endl;
    cout << year << " year " << week2 << " week " << day1 << " day " << endl;
}