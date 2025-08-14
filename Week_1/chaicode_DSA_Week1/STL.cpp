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

    cout << "Empty or not -> " << d.empty() << endl; // Checking if the deque is empty

    d.erase(d.begin(), d.begin() + 1); // Erasing the first element
    cout << "After erase operation: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}

//===================================================

// doubly linked list inclusion using STL
//  it is a linear data structure

#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l;

    list<int> a(5, 1); // Initializing a list with 5 elements, all set to 1
    l.push_back(1);    // Inserting at the back
    l.push_front(2);   // Inserting at the front

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;
    l.erase(l.begin()); // Erasing the first element
    cout << "After erase operation: ";
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "size of list -> " << l.size() << endl; // Output: 1
}

//===================================================

// stack inclusion using STL
// it is a LIFO data structure (Last In First Out)

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Dhrub");
    s.push("Rohit");
    s.push("Rohit2");

    cout << "Top element: " << s.top() << endl; // Output: Rohit2

    s.pop();                                              // Removes the top element
    cout << "Top element after pop: " << s.top() << endl; // Output : Rohit

    cout << "Size of stack: " << s.size() << endl; // Output: 2

    // cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No

    cout << "Is stack empty? " << s.empty() << endl; // Output: No
}

//===================================================
// queue inclusion using STL
// it is a FIFO data structure (First In First Out)

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Dhrub");
    q.push("Rohit");
    q.push("Rohit2");

    cout << "Front element: " << q.front() << endl; // Output: Dhrub

    q.pop();                                                  // Removes the front element
    cout << "Front element after pop: " << q.front() << endl; // Output: Rohit

    cout << "Size of queue: " << q.size() << endl; // Output: 2

    cout << "Is queue empty? " << q.empty() << endl; // Output: No
}

//===================================================
// priority queue inclusion using STL
// it is a data structure that stores elements in a way that the highest priority element is always at the front
// this is max heap by default
// whatever list we insert, it will always be sorted in descending order
// if it is min heap, it will be sorted in ascending order, we will get the lowest priority element at the front

#include <iostream>
#include <queue>

using namespace std;
int main()
{
    priority_queue<int> pq; // max heap by default

    priority_queue<int, vector<int>, greater<int>> mini; // Uncomment this line for min heap

    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(0);

    cout << "size of priority queue: " << pq.size() << endl; // Output: 4
    int n = pq.size();
    for (int i = 0; i < n; i++)
    {
        cout << pq.top() << "";
        pq.pop(); // Removes the top element
    }
    cout << endl;

    //====================================================

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int n1 = mini.size();
    for (int i = 0; i < n1; i++)
    {
        cout << mini.top() << "";
        mini.pop(); // Removes the top element
    }
    cout << endl;

    //====================================================

    // cout << "Top element: " << pq.top() << endl; // Output: 3

    // pq.pop(); // Removes the top element
    // cout << "Top element after pop: " << pq.top() << endl; // Output: 2

    // cout << "Size of priority queue: " << pq.size() << endl; // Output: 2

    // cout << "Is priority queue empty? " << pq.empty() << endl; // Output: No
}

//===================================================

// set inclusion using STL
// it is a data structure that stores unique elements in a sorted order
// if you add a duplicate element, it will not be added
// once an element is added it cannot be modified
// it is implemented using a balanced binary search tree
// when you take elements out of the set, they will be in sorted order
// unordered set is also available which does not store elements in sorted order, they're random

#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    cout << "Size of set: " << s.size() << endl; // Output: 6

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erasing an element
    s.erase(3); // Removes the element 3
    cout << "After erasing 3: ";
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Checking if an element exists
    if (s.find(2) != s.end())
        cout << "2 is present in the set" << endl; // Output: 2 is present in the set

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); // Erases the second element (which is 2 after erasing 3)

    cout << s.count(4) << endl; // Output: 1 (4 is present in the set) //count tells whether an element is present in the set or not, it returns 1 if present and 0 if not present

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " "; // Output: 5 6 (elements from the iterator itr to the end of the set)
    }
    cout << endl;

    cout << "value at iterator itr -> " << *itr << endl; // Output: 5 (the value at the iterator itr)
}

//===================================================

// map inclusion using STL
//  it is a data structure that stores key-value pairs

#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Dhrub";
    m[2] = "Rohit";
    m[3] = "Rohit2";

    m.insert({5, "bheem"});

    // Inserting a key-value pair using insert function

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // Output: key value pairs
    }

    cout << "finding -13 -> " << m.count(-13) << endl; // Output: 0 (key -13 is not present in the map)

    // m.erase(13);

    cout << "after erase" << endl;
    m.erase(2); // Erasing the key
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // Output: key value pairs after erasing key 2
    }
    cout << endl;

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}