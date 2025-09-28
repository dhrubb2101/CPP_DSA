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
//================================================,
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
// int main()
// {
//     int a, b, c, d, n; //-> 5 seconds
//     a + b + c;      //-> 2 seconds
//     cin >> n;       //-> 1 seconds
//     for (int i = 0; i < n; i++)
//      //2*n + 1 seconds (how one time where the assignment operator comes into picture)
//      // n-1 times the loop runs and both comparision and incremental operators works n times so 2*n
//      //that's how we get 2*n + 1
//     {
//         a++; ///n seconds
//     }
//     return 0; // 1 seconds

// }

// so total time taken = 5 + 2 + 1 + (2*n + 1) + n + 1 = 3*n + 10

// so to calculate time complexity for loop once again
// we see that firstly
// for( int i= 0; i < n ; i++){
//     a++
// }
// 1 sec goes for the assignment operator int i = 0 which works in ithe starting itself for one time
// 2*n comes from the loop runs from 0 to n-1 times that is n times and each time both comparision and equality operators run n times (hence 2 * n )
// hence for loop the time complexity is 2*n - 1 times

// so for this challenge lline 123
// the linear equation becomes 3*n + 10  and in linear equation we can remove the items idded

// in linear equation we add , subtract, multiply and divide constants, like 3*n + 10 becomes O(n) time complexity

//===============================================================================================================================================================

// challenge three for time complexity
// int main()
// {
//     int a, b, c, n a = b + c;       //-> 2 seconds
//     for (int i = 0; i < n / 2; i++) //-> O(n/2) = O(n)
//     {
//         a++; //-> n times it will run
//     }
//     return 0; // -> 1 second
// }
// so final time complexity is O(1) + O(n) + O(n) + O(1) = O(n)

//===============================================================================================================================================================

// int main(){
//     int n; //1 second , O(1)
//     for(int i=0; i < n/3 ; i++){  O(n/3) -> O(n)
//         cout<<"Chaicode"; //O(n)
//     }
//     for(int j=0; j < n; j=j+2){ //O(n/2) -> O(n)
//         cout << "Hello"; //O(n)
//     }
//     return 0;   //O(1)
// }

// overall time complexity is O(n) as n is the most dominating factor

//================================================================================================================================================================

// Quadratic Time : -

// int main()
// {
//     int a, b, c;                // O(1)
//     for (int i = 0; i < n; i++) // code will run n times
//     {
//         for (int j = 0; j < n; j++) // code will run n*n times
//         // n+n+n+.....+n = n^2
//             a = b + c; // this will also run n^2 times
//         }
//     }
//     cout << a; // O(1)

//     return 0; // O(1)
// here the most dominating is O(n^2), so time complexity is O(n^2)

// first int i=0 runs , then condition gets checked (I < N) amd
// then it comes inside the inside loop int j = 0 runs , then condition gets checked (j < n)
//  then it comes inside the inner loop and runs the code a = b + c
// and jb andar waale loop ki body khatam ho jayegi toh increment operation pr jayenge
// and jb bahar waale loop ki body khatam ho jayegi toh increment operation pr jayenge (j++)
// and then it will check condition (j < n) if it is fulfilled it will go to outside loop's condition (i++) , if it not it will run until inner loop condition is satisified
// and afterward see the comparision operator (i < n)

//======================================================
// // Another challenge
// int main()
// {
//     int a, b, c; // O(1)
//     a = b + c;   // O(1)
//     for (int i = 1; i < n / 3; i++)
//     { // O(n/3) -> O(n)
//         for (int j = 1; j < n; j = j + 2) // n/3 * n/2 times -> O(n/2) -> O(n)

//         {
//             a++; // n/3 * n/2 times = n^2/6 times - n^2 times
//         }
//     }
//     return 0; // O(1)
// }

// O(n^2)

// Total time complexity is O(n^2)
// total time complexity = 1 + 1 + n^2/6 + 1  = O(n^2)

//======================================================
// Cubic time complexity
// for (i = 0; i < n / 3; i++)
// { // -> n/3 times
//     for (j = 0; j < n / 4; j++)
//     { // -> n/3 * n/4 times
//         for (k = 0; k < n; k++)
//         {        // -> n/3 * n/4 * n times = n^3/12
//             a++; // -> n/3 * n/4 * n times = n^3/12
//         }
//     }
// }
// thus time complexity will be O(n^3)

//==============================================

// Logarithmic Time complexity

// int main(){
//     int a,b,c;
//     a = b + c;
//     for(int i = 1; i < n; i = i * 2) //output - 2^0, 2^1, 2^2, 2^3, .....2^k (say this loop runs k times)
//     {
//         b++;
//     }
//     return 0;
// }

// so here basically we need to understand
// 1-2^0
// 2-2^1
// 4-2^2
// 8-2^3
// 16-2^4
// 32-2^5
// n-2^k
// so here 2^k = n (and 2^k represents i that is 2^k = i)
// so taking log on both sides
// klog2 = logn
// k = log2(n)

// k remains constant (as loop grows exponentially the time taken by the loop decreases to logn)
// hence that's how we get the time complexity as O(log n)
//=================================================
// Another challenge for logarithmic time complexity
// for (i = n; i < n; i = i * 3)
// {        // it will run k times
//     a++; //
// }
// i = 1, 3^1, 3^2, 3^3, ......, (3^k=n)
// k = log3(n) and constant can be removed=
// so time complexity is O(log n)

//==============================================================

// Another challenge

// for (i = n; i >= 1; i = i / 2)
// {
//     a = b + c;
// }
// the loop will start from n
// so i = n, n/2 , n/4, n/8 , n/16, n/32,..........,
//  = n/2^0, n/2^1, n/2^2, n/2^3, n/2^4, n/2^5,......,(n/2^k=1)
//  so n/2^k = 1
//  taking log on both sides
//  log(n/2^k) = log(1)
//  log(n) - k*log(2) = 0
//  k = log(n)

//===================================================
// Another Challenge (nlogn)
// for (i = 0; i < n; i++) // time complexity is n/2
// {
//     for (j = 1; j < n; j = j * 3) // time complexity is log3(n)
//     {
//         a++; //so total time complexity is nlog(n)
//     }
// }

//===================================================

// Another challenge

// for (int i = 0; i < n; i = i + 3)
// { // time complexity is n/3
//     for (int j = 1; j < n; j = j * 4)
//     {                                      // time complexity is log4(n)
//         for (int k = n; k >= 1; k = k / 3) // time complexity is log3(n)
//             a++;                           // time complexity is n(logn)^2
//     }
// }

// so total time complexity is O[n(logn)^2]

//======================================================

// Another challenge

// for(i = 0; i < n; i++) // time complexity is n
// {
//     a = b + c;
// }
// for(j = 0; j < n; j++){ // time complexity is n
//     for(k = 0; k < n; k = k+2){ // time complexity is n*n
//         for(l = 0; l < n; l = l * 2){ // time complexity is log2(n)
//             a++; // time complexity is n*n*log2(n)
//         }
//     }
// }

// total time complexity is n^2(log n)

//======================================================

// Final Challenge for time complexity guessing

// for (i = 0; i < n; i++)
// {
//     for (j = 0; j < n; j++)
//     {
//         a++; // time complexity is O(n^2)
//     }
// }
// for (k = 1; k < n; k = k * 2)
// {
//     b++; // time complexity is O(log n)
// }
// so we add it time complexity becomes O(n^2 + log n)
// most dominating in it is O(n^2)
// Final time complexity is O(n^2)s

//===========================================================
// Time Complexity Hierarchy
// 1 < logn < n < nlogn < n^2 < n^3 < a^n < factorial(n)
// jhj