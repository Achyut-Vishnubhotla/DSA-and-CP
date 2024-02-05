//insertion sort

//the funda here is
//It always takes an element
//and places it in its correct position


//the array is 
//14 9 15 12 6 8 13

//the algorithm starts with looking at first element as the array
//then u go to next element, so taken array size is 2 and ask the prev element(/where the second element should've been?)
//then u sort it accordingly
//9 14 15 12 6 8 13

//then u go ahead and take 15 into the taken array so the size is 3 and ask(is 15 at the correct postion for the size 3)
//Yes it is no no change in the array

//then u go ahead and take 12 into the taken array so the size is 4 and ask(is 12 at the correct postion for the size 4)
//no it should be sorted
//12 goes in its correct order
//and 14 15 are right shifted
//the approach here is
//12 is left swapped till it can be swapped

//similarly every element in the array does that

//code:
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertion_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
