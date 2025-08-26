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

// what it does line 45 returns the f to main function which calls the fact function
//  and the value of f is the factorial of n and returns it

//======================================================================

// how to write the same program using recursion

// example of using recursion
//  fact(4){
//      4 * fact(3)
//  }

// here we are looking to calculate the factorial and as you can see, here we made the problem a little smaller than before, by breaking it down into smaller subproblems.

// int fact(n){
//  return n * fact(n - 1)
//  }

// for every recursion problem
// think the function which is going to call themselves is already completed or made
// like here factorial naam ka function pehle se bana hua hai voh aapko factorial nikal ke de dega
// this will make recursion

// for ex n = 4
// as fact(4) is called in return statement
// fact(4) = 4 * fact(3) //as fact(3) is called in return statement
// fact(3) = 3 * fact(2) //as fact(2) is called in return statement
// fact(2) = 2 * fact(1) //as fact(1) is called in return statement
// fact(1) = 1 * fact(0) //as fact(0) is called in return statement
// fact(0) = 1

// base condition(a small program whose output is known) in recursion
//  here fact(1) = 1 is the base condition
//  it stops the recursion from going further
// for ex here we will use
//  //if(n==1){
//  return 1
//  }
// and we call this base condition before the return statement as if we do it after return statement this will lead to an infinite recursion

// also fact(1) return 1 so since fact(1) got called in fact(2)
// value of fact(1) gets returned in f(2)
// and f(2) = 2 * 1 = 2
// Similarly fact(2) returns 2 so since fact(2) got called in fact(3)
// value of fact(2) gets returned in f(3)
// and f(3) = 3 * 2 = 6
// Similarly fact(3) returns 6 so since fact(3) got called in fact(4)
// value of fact(3) gets returned in f(4)
// and f(4) = 4 * 6 = 24

// so remember always assume that whatever function in recursion is calling itself consider in the beginning it is complete and ready to execute
// then always lay down the base condition first or else it will lead to an infinite recursion
// also we pass the parameter in the function and mention the return type like int before it
// when you again call the function inside the function , make sure the size of the paramter is smaller otherwise the recursion will go infinitely
// because if the parameter size is not smaller, the function will keep calling itself with the same parameter and never reach the base condition

// format- int fun(parameter){
//  base condition
//   if(parameter == 0){
//       return 1;
//   }
//   // recursive call
//   return parameter * fun(parameter - 1);
//}

// application of recursion
// recursion jb kaam mei aata hai jb koi aisa kaam karanaa ho jaha pr stack ban rha ho
// like fact(4) we required fact(3), fact(3) we required fact(2), fact(2) we required fact(1)
// consider it as a stack of function calls with
//  fact(4) at the bottom, then fact(3), then fact(2), and finally fact(1) at the top