#include<bits/stdc++.h>
using namespace std;
//print sum of n numbers using recursion
//parameterise way
/*
void f(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    f(n,0);
    return 0;
}
*/

//print sum of n numbers using recursion
//functional way
/*
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
*/


//print factorial of n using recursion
//functional way
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
