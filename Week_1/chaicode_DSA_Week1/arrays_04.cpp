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

// ⚡ Key point:
// "Initialization" happens only at declaration time.
// "Assignment" is done after declaration.

// So what you said is correct, just flip the numbering in your explanation:
// Initialization → when array is created and given values immediately.
// Assignment → when array is created first, then values are assigned later.