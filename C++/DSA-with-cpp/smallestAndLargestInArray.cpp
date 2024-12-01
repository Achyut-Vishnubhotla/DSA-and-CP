#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,15,22,1,-15,24};
    int n = sizeof(arr)/sizeof(int);
    int smallest = INT_MAX;   //+infinity
    int largest = INT_MIN;

    for(int i=0;i<n;i++){
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);
        /*
        alternativey...
        if(arr[i]>largest){
        largest=arr[i]
        }
        */

    }
    cout<<smallest<<"\n";
    cout<<largest<<"\n";
}