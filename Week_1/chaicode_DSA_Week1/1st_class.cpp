#include <iostream>
#include <map>

using namespace std;
int main()
{

    int a[9] = {1, 1, 1, 2, 1, 1, 1, 1, 1};

    int A = a[0] + a[1] + a[2];
    int B = a[3] + a[4] + a[5];
    int C = a[6] + a[7] + a[8];

    if (A == B)
    {
    }
    else if (A > B)
    {
    }
    else
    {
    }
} // here max comparisions will be just two

// or run a for loop
// for (int i = 1; i <= 9; i++)
// {
//     if (ball[i] > wt)
//     {
//         wt = ball[i]
//     }
// } // here we will do 8 comparision cuz there are 9 elements
// but time complexity will determine that 1st method is faster not the for loop where iterate each element

// for best case - notation is (omega notation)
// for average notation is (Theta notation)
// for worst case notation is (Big-O notation)
