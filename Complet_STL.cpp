#include <bits/stdc++.h>
using namespace std;

class stl
{
public:
    /*------------------------ unoredered set CONTAINER IN STL C++ ------------------------------*/
    void un_set()
    {
        // declairation of unordered_set container
        unordered_set<int> n;

        // insert the elements by insert() function
        for (int i = 1; i < 10; i++)
        {
            n.insert(i);
        }

        // print all numbers
        cout << "Elements are presents in unordered set :" << endl;
        for (auto it = n.begin(); it != n.end(); it++)
        {
            cout << *it << " ";
        }

        // delete an elements from the unordered set
        cout << endl;
        n.erase(5);

        // search an elements
        cout << "number 5 is present: ";
        n.find(5);
        if (n.find(5) != n.end())
            cout << "yes" << endl;
        else
            cout << "no" << endl;

        // check that element is present or not (if answer is 1 then present and if 0 then not)
        cout << "check 5 is present or not: " << n.count(5) << endl;

        // total size of unordered set container
        cout << "container size= " << n.size() << endl;

        // delete all elements of unordered set
        n.clear();
        cout << "all elements deleted!" << endl;

        // check unordered set empty or not
        if (n.empty() == true)
            cout << "container is empty" << endl;
        else
            cout << "container is not empty" << endl;
    }

    /*------------------------------- vector CONTAINER IN STL C++ -------------------------------------*/
    void Vector_f()
    {
        // declaration of vector
        vector<int> v1;

        // inserting elements in vector
        for (int i = 1; i < 10; i++)
        {
            v1.push_back(i);
        }

        // show the all lements of vector
        cout << endl
             << "all elements of vector are: ";
        for (auto it = v1.begin(); it != v1.end(); it++)
        {
            cout << *it << "    ";
        }

        // size of vector
        cout << endl
             << "size of vector is= " << v1.size();

        // inserting new element in vector
        v1.insert(v1.begin(), 44);
        cout << endl
             << "44 is inserted in vector" << endl;

        // inserting new elemnt at the end itrator of the vector
        v1.insert(v1.end(), 66);
        cout << "66 is inserted in vector" << endl;

        // show the front element of vector
        cout << "Front element of vector is: " << v1.front() << endl;

        // show last element of vector
        cout << "Last element of vector is: " << v1.back() << endl;

        // delete last element of vector
        v1.pop_back();
        cout << endl
             << "last elemet of vector is deleted!" << endl;

        // show elements after deleting last element of vector
        cout << endl
             << "All elements of vector is: ";
        for (auto it = v1.begin(); it != v1.end(); it++)
        {
            cout << *it << " ";
        }

        // delete all elments of vector
        v1.clear();
        cout << "\nAfter deleting all elements from the vector!" << endl;

        // check vector empty or not
        cout << "vector is empty? ";
        if (v1.empty() == true)
            cout << "Yes" << endl;
        else
            cout << "No!" << endl;
    }

    /*------------------------------- set CONTAINER IN STL C++ -----------------------------------------*/
    void Set_f()
    {
        // declaration of set container in STL c++
        set<string> s;

        // insert name
        s.insert("JAVED");
        s.insert("BABU");
        s.insert("PARVEJ");
        s.insert("DEEPAK");
        s.insert("LEO");

        // show all names
        cout << "All names are stored in set: " << endl;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << "    ";
        }

        // delete name BABU from the set
        s.erase("BABU");

        // AFTER DELETING show all names
        cout << "\n\nAfter deleting BABU present names in set: " << endl;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << "    ";
        }

        // search name that is present in set or not
        cout << "\nBABU is present in set? " << s.count("BABU") << endl;

        // size of set
        cout << "size of container set is: " << s.size() << endl;

        // delete all names from the set container
        s.clear();

        // check that cotainer is empty or not
        cout << "container is empty or not? ";
        if (s.empty() == true)
            cout << "Yes empty" << endl;
        else
            cout << "Not empty" << endl;
    }
};
int main()
{
    stl ob;
    // ob.un_set();
    // ob.Vector_f();
    // ob.Set_f();
}