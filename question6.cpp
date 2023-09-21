// search the second smallest elements in an array
#include <iostream>
using namespace std;
class second_small
{
public:
    int array[100], length;
    void getdata()
    {
        // first choose length of the array
        cout << "enter the length of the array : ";
        cin >> length;
        // insert the elements in array
        cout << "enter the elemenst in array : " << endl;
        for (int i = 0; i <= length; i++)
        {
            cin >> array[i];
        }
    }
    void swap(int *a, int *b) // function declairation
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void bubble_sort() // function for sorting elements using bubble sort
    {
        int i, j;
        for (i = 0; i <= length; i++) // sort in acendding ordered
        {
            for (j = 0; j <= length - i; j++)
                if (array[j] > array[j + 1])
                    ;
            swap(&array[j], &array[j + 1]);
        }
    }
    void display_array()
    {
        int i;
        cout << "after sortting elements of array : " << endl;
        bubble_sort();
        for(i=0;i<=length;i++){
            cout<< array[i] << endl;}
    }
    void search_element()
    {
        cout << "second smallest number of the array is : " << array[1] << endl;
    }
};
int main()
{
    second_small s;
    s.getdata();
    // s.bubble_sort();
    s.display_array();
    s.search_element();
}