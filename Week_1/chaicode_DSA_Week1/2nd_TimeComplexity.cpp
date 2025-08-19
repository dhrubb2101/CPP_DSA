// we decide the structure according to three conditions
// -easy to access
// -easy to modify
// -easy to use

// Data structure is divided in two categories
//  -linear data structure - array,linked list, stack , queue
//  -non-linear data structure - tree and graphs

// the difference is 1 can relate with 2 and 2 with 3 and so on. in linear data structure
// but in non-linear data structure 1 can be connected to 2,3 ,4 or anything else

// -best case - omega notation
// -average case - theta notation
// -worst case - big - O notation

// rate of growth
// linear equation -> y = mx , ax+by+c=0
// quadratic equation -> ax^2 + bx + c
// cubic equation ->ax^3 + bx^2 + cx + d
// bi-quadratic equation - ax^4 + bx^3 + cx^2 + dx + e
// log equations - alogx + b
// exponential equation - e^x + 2^3 + 3^x

// time complexity nikaal ne ke liye hum ek program lenge
// aur uski equation banayege by seeing it's input and output value and plotting a equation and then tell it's complexity

// for ex-
// linear equation
// f(n) = 3n + 5
// f(1) = 3(1) + 5
// f(2) = 3(2) + 5
//.
//.
//.
// f(100) = 300 + 5 = 305
// f(1000) = 3000 + 5 = 3005

// if n is very large then in an+b
// a & b becomes negligible in that case

//=====================================

// now let's come to quadratic equation

// quadratic equation : f(n) = 2n^2 + 3n - 5
// if we take very high value of n
// we'll focus on just n^2 as it is the dominating one
// we'll ignore the rest
// for worst case n^2 will be the answer as it is the most dominating one it is the worst one
// n will take less time

//=================================================

// cubic equation :an^3 + bn^2 + cn + d
// if we take a very large value of n
// n^3 will be the dominating and rest will be negligible and so ignore them

//====================================
// 1. it is the best time complexity
// constant time complexity - independent of input size
// we denote it with 1
// constant time complexity , that is irrespective of input size time complexity remains constant

//============================================
// then at 2nd number comoes logarithmic complexity
// logarithmic complexity
// here our work always gets divided
// like for ex n gets divided into n/2 and n/2 and then each n/2 into n/4 and n/4
// like binary search
// logn is better than n time complexity as logn is smaller than n

//===============================================
// then at third comes linear time complexity that is n

//====================================
// then at 4th
// linear logarithmic complexity - nlogn
// it'll be more than n (time complexity)

//==========================================
// then at 5th comes quadratic
// n^2 is the time complexity more than nlogn

//==========================================
// then at 6th comes exponential time complexity
// for ex 2^n,3^n, e^n, a^n
// it grows exponentially
//
//================================================
// Assume each operation takes 1 second
// int main(){
//     int x,y,z; //-> 3seconds
//     cin>>x>>y; //-> 2 seconds
//     z=x+y; //-> 1 second
//     cout<<z;    //-> 1 second
//     return 0;   //-> 1 second
//     // total time = 3 + 2 + 1 + 1 + 1 = 8 seconds
//     // this is constant time complexity as it is independent of input size
//     // so time complexity is O(1)
// }
//================================================

// always tell the worst case time complexity first
//=================================================

// int main(){
//     int a,b,c,d,e,f; //-> 6 seconds
//     a = b + c + d;   //3 seconds
//     f = 2 * a - c* d; //-> 4 seconds
//     cout << a << b << c; //-> 3 seconds
//     return 0;   //-> 1 second
//     // total time = 6 + 3 + 4 + 3 + 1 = 17 seconds
//     // so time complexity is O(1) as it is independent of input size
// }

// always by default tell the worst case scenario
//=================================================

// linear time complexity
int main()
{
}