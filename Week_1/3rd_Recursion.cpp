// Function calling itself is called recursion
// int main(){
//     printf("Hello World");
// }
// we are calling here one function from one function
// ek function ke andar se dusre function ko call kra hai
// yaha kya ho rha hai hello print krna hai ,
// ek function dusre function ko isliye call krta hai cuz usse kuch kaam karana hota hai
// jaise yaha main function se kaha hello print kr do toh voh printf function se kehta hai hello print kr do
// toh yaha ek function dusre function ko call kar raha hai

// and recursion hota hai agr function khud ko he call krne lag jaye toh usse recursion kehte hai
// for ex
//  //int fun(){
//  ----------
//  ---------
//  -------
//  // fun(); //calling fun function inside fun function. //this is called recursion.
//  ----------
//  -----
//  //}
// here what is happening
// yaha function khud ko call kar raha hai

//==================================================

// factorial
// factorial(n) = n * factorial(n-1)
// factorial(5) = 5 * factorial(4)
// factorial(5) = 5*4*3*2*1

// we use recursion , when we want to solve a big problem
// we solve it using some work and that work keeps getting smaller.
// that same work is repeating and but it's size keeps getting smaller as we go deeper into the problem.

//==============================================================

int fact(int n)
{
    int f = 1; // starting point from where you begin to multiply
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
