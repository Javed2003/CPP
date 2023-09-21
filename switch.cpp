#include <iostream>
using namespace std;
int main()
{
   int num, i, total_sum, ch;

   cout << "choose any one option on the bellow:" << endl;
   cout << "1.javed" << endl
        << "2.deepak" << endl
        << "3.parvej3 " << endl
        << "4.akhtar" << endl;

   cout << "enter your choice:";
   cin >> ch;

   switch (ch)
   {
   case 1:
      cout << "how many times do you want to print: ";
      cin >> num;

      for (i = 1; i <= num; i++)
      {
         cout << "javed" << endl;
         total_sum = i;
      }
      cout << "total printing numbers of time: " << total_sum;
      break;

   case 2:
      cout << "how many times do you want to print: ";
      cin >> num;

      for (i = 1; i <= num; i++)
      {
         cout << "deepak" << endl;
         total_sum = i;
      }
      cout << "total printing numbers of time: " << total_sum;
      break;

   case 3:
      cout << "how many times do you want to print: ";
      cin >> num;

      for (i = 1; i <= num; i++)
      {
         cout << "parvej" << endl;
         total_sum = i;
      }
      cout << "total printing numbers of time: " << total_sum;
      break;

   case 4:
      cout << "how many times do you want to print: ";
      cin >> num;

      for (i = 1; i <= num; i++)
      {
         cout << "akhtar" << endl;
         total_sum = i;
      }
      cout << "total printing numbers of time: " << total_sum;
      break;

   default:
      cout << "this number is not exist";
   }
}