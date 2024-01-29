//multiple recursion calls
//as of now u have seen only one function call
//but some cases can have multiple function calls in a function
//problems like n queens and tc uses multiple recursion calls


//to understand multiple recusrion, the best way is by fibonacci series
//the first couple of numbers in fibonacci is 0 1
//next fibonacci number(obtained by previous num+present num) is 0+1=1
//so 0 1 1
//next fibonacci number is 1+1=2
//so 0 1 1 2
// 0 1 1 2 3 5 8 13 21 34.....
// | | | |
//(0 1 2 3 .....)th

//now the question is very straight forward
//u will br given an N
//and u need a recursive function-f(N)
//which tells u the Nth fibonacci number
//example calculate f(3), then which is the 3rd fibonacci number 3
//or f(4) = 3 or f(5)=5
//now how did the 5(which is f(5)) came into the series i.e.,f(5)=f(4)+f(3){which is previous number + present number}
//generically u could have done this easily using for loop
/*like f(0)=0 and f(1)=1
for(i=2->n){
    f(i)=f(i-1)+f(i-2)
}
this is a linear version using iterative for loop 
u can write
*/ 
//obviously here the problem is not to solve the fibonacci number but to find it and return
//here we have to learn recursion that is where fibonacci plays a very important role in the teaching the recursion to us in a classical fashion


//we did learnt that in order to calculate f(n)
//we should know f(n-1) and f(n-2)
//we know one thing for sure that
/*(i.e., if n is 0 then answer is 0 as 0th fibonacci number is 0) }we people 
(and if n is 1 then answer is 1 as 1th fibonacci number is 1)   }   definitely knew that
so in that case u will return n
*/
/*if(n<=1){ 
    return n;
}
*/
/*going across what is fibonacci of n
  return f(n-1)+f(n-2);
  (theirs absolutely no doubt about it)
*/
/*
how does multiple recursion works?
it works in a sequential manner
f(n-1) will first execute
and then f(n-2) will execute
before ending the previous recursion call present recursion call can't be executed
*/
#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<=1){
        return n;
    }
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
//time complexity=near to (2^n)
//it is exponential as every function is calling again 2 functions 