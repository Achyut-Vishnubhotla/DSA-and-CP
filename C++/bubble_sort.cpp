//bubble sort

//funda for this sorting algorithm is
//pushs the maximum element to the last by adjacent swaps

//kinda opposite to the selection sort
//because the selection sort is taking minimum to the front

//adjacent swapping is the key over here

//the array is
//13 46 24 52 20 9

//let us understand the algorithm step by step
//compare first 2 elements, 13 and 46
//are they in the sorted order? -> yes they are(13<46)
//so do not do anything

//go to the next 2 elements, 46 and 24
//are they in the sorted order? -> no (46>24)
//so swap them respectively
//now the array will be 
//13 24 46 52 20 9

//go to next 2 elements, 46 and 52 
//are they in the sorted order? -> yes (46<52)
//so no action

//go to next 2 elements, 52 and 20
//are they in the sorted order? -> no (52>20)
//swap them 
//now array will be
//13 24 46 20 52 9

//go to next 2 elements, 52 and 9
//are they in the sorted order? -> no (52>9)
//swap them
//now the array will be
//13 24 46 20 9 52

//so after 1st complete round of adjacent swaps
//do you observe something?
//the max element 52 is at the last 
//so we can say the last position is sorted
// { 13 24 46 20 9 }{ 52 }
//        /            \  
//     unsorted       sorted

//now what should be your next step
//perform the same algorithm again on the unsorted positions of array
//after the 2nd complete round of adjacent swaps
//the array will be
// 13 24 20 9 46 52
//in the 2nd round of adjacent swap 46 and 52 are not compared(as it max in the 1st round of adjacent swaps)
//and 46 will be the max element thrown at last

//after 3rd complete round of adjacent swaps
//the array will be
//13 20 9 24 46 52
//here 24 is the max element to be thron at last
//so for 3 rounds, last 3 elements are sorted

//after 4th round of adjacent swaps
//the array will be
//13 9 20 24 46 52
//here 20 is the max element for this round

//after 5th round 
//the array will be
// 9 13 20 24 46 52
//here 13 is the max element for this round

//thereby the entire array is sorted

//implementing to code
//the observation is:
// the loop in 1st,2nd,3rd,4th,5th rounds went from
// 0 to n-1
// 0 to n-2
// 0 to n-3
// 0 to n-4
// 0 to n-5 
//and in each round adjacent swaps performed


//for 52 it will loop for the next index which is not present 
//and if you are accessing the index which is not present
//it'll throw an runtime error
//that is why it is very important to run your loops perfectly



//code:
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=0;i++){
        for(int j=0;j<=1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}