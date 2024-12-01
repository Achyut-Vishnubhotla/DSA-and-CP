#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,15,22,1,15,24};
    int n = sizeof(arr)/sizeof(int);
    int smallest = INT_MAX;   //+infinity
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        /*instead of this if 
        we can also use min() function 
        to compare among the 2 values
        => smallest = min(arr[i], smallest)
        */
    }
    cout<<smallest;
}