// vector is dynamic array
// always includes it's library in c++

// array inclusion using STL
#include <iostream>
#include <array>

using namespace std;
int main()
{

    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at index 2: " << a.at(2) << endl; // Accessing element at index 2 //output 3

    cout << "Empty or not ->" << a.empty() << endl;  // Checking if the array is empty // output 0 (false)
    cout << "First element ->" << a.front() << endl; // Accessing the first // element
    cout << "Last element ->" << a.back() << endl;   // Accessing the last element// output 4
}

//===================================================

// Vector inclusion using STL
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    vector<int> a(5, 1);
    cout << "print a" << endl;
    // cout << "print last" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity->" << v.capacity() << endl; // Output: 0

    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl; // Output: 1

    v.push_back(2);
    cout << "Capacity->" << v.capacity() << endl; // Output: 2

    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl; // Output: 4 // Capacity increases to 4 when size exceeds 2, vector doubles its capacity everytime it exceeds the current capacity
    cout << "Size -> " << v.size() << endl;       // Output: 3

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " " << endl;
    }

    v.pop_back(); // Removes the last element

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " " << endl;
    }

    // vector clear operation clears all the elements in the vector
    cout << "Size before clear -> " << v.size() << endl;         // Output: 2
    cout << "Capacity before clear -> " << v.capacity() << endl; // Output: 4
    v.clear();                                                   // Clears all elements in the vector
    cout << "Size after clear -> " << v.size() << endl;          // Output: 0
    cout << "Capacity after clear -> " << v.capacity() << endl;  // Output: 4

    // size means no of elements in the vector
    // capacity means no of elements it can hold without reallocation
    // it is the number of memory blocks allocated for the vector
    // when we push_back an element and the size exceeds the capacity, the capacity is doubled
}

//===================================================

// double ended queue inclusion using STL
// here you can insert and delete elements from both ends
// it does not have contiguous memory locations like vector and array
// it is more efficient than vector for insertion and deletion at both ends
// it is made using multiple fixed static arrays
// and it is tracked in which array data is being stored
// it is also dynamic in nature

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);  // Inserting at the back
    d.push_front(2); // Inserting at the front

    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_back(); // Removing from the back
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    //     d.pop_front(); // Removing from the front
    //     cout << endl;
    //     for (int i : d)
    //     {
    //         cout << i << "";
    //     }

    cout << "Print First Index element -> " << d.at(1) << endl; // Accessing element at index 1

    cout << "front " << d.front() << endl; // Accessing the first element
    cout << "back " << d.back() << endl;   // Accessing the last element
}
