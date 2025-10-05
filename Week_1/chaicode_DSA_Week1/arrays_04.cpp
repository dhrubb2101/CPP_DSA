// collection of similar types of data elements
// whenever we're dealing a data structure
// we shoyld firstly know three things
// how to create an array?
// How to assign an element in an array?
// How to use an array?
// we can't delete anything in an array we can override it or make it inacccessible

// now to create an array
// we first need to know datatype of elements that we want to add

// Datatype vriable_name[size];
//  int arr[10]; // array of 10 integers
// it will create five blocks of memory each of size 4 bytes
// so total size will be 20 bytes will be allocated to arr variable

// every location has an index associated with it
//  whatever your index say a[5] then index goes from 0 to 4
//  index always starts from 0 to n-1

// so an array of size n have formed with empty blocks of memory
// array does not have anything in it, it just have garbage values in it
// there are two ways to assign values in an array
// 1. when array is being created you add values simultaneously
// 2. after creating the array you can assign values to it

// Initialization → Giving an array its values at the time of creation.

// int arr[] = {1, 2, 3}; // initialization

// Assignment → Creating an array first, then assigning values later (usually element by element).

// int arr[3];     // created (but not initialized)
// arr[0] = 1;     // assignment
// arr[1] = 2;
// arr[2] = 3;

//  Key point:
// "Initialization" happens only at declaration time.
// "Assignment" is done after declaration.

// Initialization → when array is created and given values immediately.
// Assignment → when array is created first, then values are assigned later.

//====================================

// For Example -
// int a[5] = {10,20,25,30,35}
// int b[3] = {1,2,3,4} //error as size is 3 but we are giving 4 values
// int c[4] = {1,2} //{1,2,0,0}

//====================================

// int a[] = { //if you write it like this will throw an error as size is not mentioned
// int a[]; //this will throw an error as size is not mentioned
// a[] = {1,2,3,4} //this will work as size is automatically taken as 4 by compiler

//====================================

// assignment in array

// int a[5]; //declaration of array of size 5
// a[0] = 10; //assignment of value 10 at index 0
// a[1] = 20;
// a[2] = 25;
// when assigneing we can skip a value in between but can't do that in initiialization

//====================================

// initialization of array
// using loop

// for(int i = 0; i < 5; i++){
//  cin >> a[i];
// }

//====================================

// WAP to find the maximum element in an array of n integers.

#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 5, 23, 42};
    int max = a[0]; // assuming first element is the maximum one
    for (int i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Maximum element is: " << max << endl;
}

//====================================
// if we want to use vector in place of array
// it is a dynamic array

// #include <vector>
// using namespace std;

// vector<int> v; // declaration of vector of integers
// this will create one dimension array of integers

// v[0] = 10; // we can use it like this also
// v.push_back(10); // this will add 10 at the end of vector

// cout << v[2]; // this will print the 3rd element of vector

// if we want to copy one array to another array
// we can do this in vector easily by using
//  vector<int> v2 = v1; // this will copy all the elements of v

//====================================

// leetcode problem - 26 - Remove Duplicates from Sorted Array

int removeDuplicate(int a[], int n)
{
    int k = 1;
    int temp[n];
    temp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            continue;
        }
        else
        {
            temp[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        a[i] = temp[i];
    }
    return k;
}
// here inplace means we have to give output in the same array
// we didn't start from index 0 because first element would always be unique and we copy it to  temp array at index 0
// we are comparing consecutive elements as array is sorted
// if they are equal we will continue to next iteration

//====================================

// we do the same question using vector

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     int k = 1;
//     vector<int> a;
//     a.push_back(nums[0]);
//     for (int i = 1; i < nums.size(); i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             continue;
//         }
//         else
//         {
//             a.push_back(nums[i]);
//             k++;
//         }
//     }
//    nums.assign(a.begin(),a.end());
//     return k;

//     }
// };