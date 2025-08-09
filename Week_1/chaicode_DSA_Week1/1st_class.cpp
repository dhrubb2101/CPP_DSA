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
}

// or run a for loop
// but time complexity will determine that 1st method is faster not the for loop where iterate each element
