#include<bits/stdc++.h>
using namespace std;


//print your name N times using recursion
/*
void f(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Achyut"<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}
*/

//print digits from 1 to N
/*
void f(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}
*/

//print in terms of N to 1
/*
void f(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    f(i-1,n);
}
int main(){
    int n;
    cin>>n;
    f(n,n);
    return 0;
}
*/

//print from 1 to n(by using kind of backtracking){watch tha video at 16:00}
//but you shouldn't use f(i+1,n)
/*
void f(int i,int n){
    if(i<1){
        return;
    }
    f(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    f(n,n);
    return 0;
}
*/

//print from n to 1(by using kind of backtracking)
//but you shouldn't use f(i-1,n)
/*
void f(int i, int n){
    if(i>n){
        return;
    }
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}
*/