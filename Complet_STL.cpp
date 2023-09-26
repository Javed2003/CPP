#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <set>
using namespace std;

// IN THIS FILE ALL STL TOPICS ARE DECLAIRED
//  There are four topics declared in this STL file.
//   1. Algorithms
//   2. Containers
//   3. Functions
//   4. Iterators
class container
{
public:
    // pairs :-
    void explain_pairs()
    {
        pair<int, int> p = {3, 2};
        cout << p.first << " " << p.second << endl;

        // pair<int, pair<int, int>> p = {3, {4, 5}};
        // cout << p.first;

        pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
        cout << arr[1].second << " " << arr[2].first << endl;
    }

    // vector :-

    void explain_iterator()
    {
        // illustrate the iterators in vector
        vector<int> g1;

        for (int i = 6; i <= 22; i++)
            g1.push_back(i);

        cout << "output of begin and end : ";
        for (auto i = g1.begin(); i != g1.end(); ++i)
            cout << *i << " ";

        cout << endl;
        cout << "nOutput of cbegin and cend : ";
        for (auto i = g1.cbegin(); i != g1.cend(); ++i)
            cout << *i << " ";

        cout << endl;
        cout << "nOutput of rbegin and rend : ";
        for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
            cout << *ir << " ";

        cout << endl;
        cout << "nOutput of crbegin and crend : ";
        for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
            cout << *ir << " ";
    }

    void explain_capacity()
    {
        // illustrate the capacity function in vector
        vector<int> g1;

        for (int i = 1; i <= 5; i++)
            g1.push_back(i);

        cout << "size : " << g1.size();
        cout << "\nCapacity : " << g1.capacity();
        cout << "\nMax_size : " << g1.max_size();

        // resizes the vector size to 4
        g1.resize(4);

        // print the vector size after the resize
        cout << "\nSize : " << g1.size();

        // checks if the vector is empty or not
        if (g1.empty() == false)
            cout << "\nVector is not empty";
        else
            cout << "\nVector is empty";

        // shrinks the vector
        g1.shrink_to_fit();
        cout << "\nVector elements are : ";
        for (auto it = g1.begin(); it != g1.end(); it++)
            cout << *it << " ";
    }

    void explain_elementAccess()
    {
        // illustrate the elemnt access in vector
        vector<int> g1;

        for (int i = 1; i <= 10; i++)
            g1.push_back(i * 10);

        cout << "\nRefrence operstor [g] : g1[2] = " << g1[2];
        cout << "\nat : g1.at(4) = " << g1.at(4);
        cout << "\nfront() : g1.front() = " << g1.front();
        cout << "\nback() : g1.back() = " << g1.back();

        // pointer to the first element
        int *pos = g1.data();

        cout << "\n the first element is " << *pos;
    }

    void explain_modifiers()
    {
        // illustrate the Modifiers in vector

        // assign vector
        vector<int> v;

        // fill the vector with 10 five times
        v.assign(5, 10);

        cout << "the vector elements are : ";
        for (auto i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        // insert 15 to the last position
        v.push_back(15);
        int n = v.size();
        cout << "\n the last elemet is : " << v[n - 1];

        // removes last element
        v.pop_back();

        // prints the vector
        cout << "\n THE vector elements are : ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        // insert 5 at the beginning
        v.insert(v.begin(), 5);
        cout << "\n the first element is : " << v[0];

        // insert 20 at the end
        v.emplace_back(20);
        n = v.size();
        cout << "\n the last elemment is : " << v[n - 1];

        // erases the vector
        v.clear();
        cout << "\nvector size after the erases : " << v.size();

        // Two vectors to perform swap
        vector<int> v1, v2;
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(4);
        v2.push_back(5);

        cout << "\n\nvector1 : ";
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";

        cout << "\nvector2 : ";
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";

        // swap v1 and v2
        v1.swap(v2);

        cout << "\nafter swap \n vector1 : ";
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";

        cout << "\n after swap \n vector2 : ";
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";
    }

    // use of list in STL
    void showlist()
    {
        // definingn list
        list<int> l{2, 3, 5, 6, 7};

        // cout<<"elements in list are : "<<"\n";
        // for(auto it=begin();it!=end();it++)
        // {
        //     cout<<l[it]<<" "<<"\n";
        // }

        // print first element of list
        cout << "first element in list : " << l.front() << "\n";

        // print last element of list
        cout << "last element in list : " << l.back() << "\n";

        // insert an element at the last position
        l.push_back(12);

        // after inserting print last element
        cout << "after insretin last element in list : " << l.back() << "\n";

        // insret element at the first position
        l.push_front(99);

        // after inserting print  first element
        cout << "after inserting first element in list : " << l.front() << "\n";

        // delete an element from starting position
        l.pop_front();

        // after deleting first element
        cout << "after deleting first element in list : " << l.front() << "\n";
        // delete element from last position
        l.pop_back();

        // after deleting last element
        cout << "after deleting last element in list : " << l.back() << "\n";

        // size of list
        cout << "total numbers of element in list : " << l.size() << "\n";
    }

    // operations of deque
    void showdq()
    {
        deque<int> de;
        de.push_back(10);
        de.push_front(20);
        de.push_back(90);
        de.push_front(9);
        // cout<<"the deque de is : ";
        // for(auto it=begin();it!=end();++it)
        // {

        // }

        // size of deque de
        cout << "all elements in de are : " << de.size() << "\n";

        // maximum size of deque de
        cout << "maximum size of deque : " << de.max_size() << "\n";

        // remove the first element
        de.pop_front();
        // you can print deque after removing element then you better understand it

        de.pop_back();
        // you can print deque after removing element then you better understand it
    }

    // all opertion of stack
    void showst()
    {
        // creat an stack
        stack<int> st;
        st.push(21);
        st.push(22);
        st.push(24);
        st.push(25);
        int num = 0;
        st.push(num);

        // delete the element form the top
        st.pop();
        st.pop();
        st.pop();

        // asking that stsck is empty or not if not empty then print top and delete it
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
        cout << st.empty();
        cout << endl;
        cout << st.size();
    }

    //all functions of set container
    void showset()
    {
        //creat a set 
        set<int>s1;
        s1.insert(2);
        s1.insert(33);
        s1.insert(22);
        s1.insert(44);
        s1.insert(4);
        
        //print the all elements of set
        cout<<"all elements of set are :\n ";
        for(auto i:s1)
        {
            cout<<i<<" ";
        }

        // begin()  {return an iterator to the first element in the set}



        

    }
};
int main()
{
    container C1;
    // C1.explain_pairs();
    // C1.explain_iterator();
    // C1.explain_capacity();
    // C1.explain_elementAccess();
    // C1.explain_modifiers();
    // C1.showlist();
    // C1.showdq();
    // C1.showst();
    C1.showset();

}
