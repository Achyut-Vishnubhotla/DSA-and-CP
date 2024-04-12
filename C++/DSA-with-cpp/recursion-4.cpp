#include<bits/stdc++.h>
using namespace std;
//reverse a array using recursion
//using 2 variables
/*
void f(int l,int arr[], int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    f(l+1,arr,r-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/



//using 1 variable
/*
void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/


//check if a string is palindrome
//palindrome - a string on reversal reads the same
//MADAM - MADAM(reverse)
//11211 - 11211
bool f(int i,string &s){ 
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    f(i+1,s); 
}
int main(){
    string s="madam";
    cout<<f(0,s);
    return 0;
}
//time complexity = n/2(we going till the half)