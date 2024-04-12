//merge sort

//there r several other sorting algorithms(bubble sort,insertion sort,selection sort)
//but y do u again need to learn merge sort?

//all the other sorting algorithms r taking O(n^2)
//in order to sort an array 
//this is where merge sort is better

//merge sort takes much better time complexity

//merge sort is much more optimized sorting algorithm
//when compared with the other sorting algorithms

//now for the explaination of merge sort
//this example array is taken
//[ 3,1,2,4,5,2,6,4 ]
//for which the size is n=9

//in merge sort the algorithm works on
//divide & merge

//now this array consists of 9 elements
//and how will you divide the 9 elements in 2 parts
//there r 2 ways for dividing it 
//1 -> 5 and 4
//2 -> 4 and 5

//u can follow any way
//here we will be going with 5 and 4 way

//so the algorithm divides the array into 2 parts: (left and right parts)
/*[3,1,2,4,5,2,6,4]
      /         \
 [ 3,1,2,4,1 ]  [ 5,2,6,4 ]
*/

//now always take left part and divide it again
//when we try to divide it again , it can be divided into 2 and 3 (or) 3 and 2
//since i have divide the intial array into 5 and 4 (bigger and smaller)
//i will follow the same pattern i.e., dividing the array into 3 and 2 
//so that i can write a repetitive code
/* [ 3,1,2,4,1 ]
     /     \
 [3,1,2]  [4,1]
*/ 

//remember u can also divide the array into smaller and bigger 
//that is perfectly alright 
//but what u pattern u have choosen, follow the same pattern in the future as well

//for next division, we will be following the same pattern
/* [ 3,1,2 ]
    /     \
  [3,1]   [2]
*/

//similarly next division
/*  [3,1]
    /  \
  [3] [1]
*/

//now it cant be divided further?
//No because those r single numbers

//the moment you get a single number u'll stop
//and u perform the 2nd half of the algorithm
//which states merging them

//here u will try to merge these single elements into single array
//the array should be (consisting of these elements) in sorted way

//so to fill the 1st position in the array
//u will take comparitively smaller element(i.e.,1 here) 
//and the remaining element will be filled after(i.e., 3 here)
/*
 [3] [1]
  \  /
 [1,3]
*/
//this is merging

//so we can say
//whenever there is single element in both sides we come back
//we take them and we merge
/*  [ 3,1,2 ]
     /    \
->[1,3]<- [2]  //here [1,3] is sorted by merging
   / \
[3]   [1]
*/

//the next step is, u will merge [1,3] and 2 accordingly
/* [1,3]  [2]
     \    /
    [1,2,3]
here the approach for inserting elements into final array (as sorted) is:
each of the element in left and right array is compared and push into the final array
*/

//so the merging completed for the [3,1,2] array

/*       [3,1,2,4,1]  
          /       \
    ->[1,2,3]<-   [4,1]
      /   \
    [1,3] [2]
     / \
   [3] [1]
*/

//so we can say that the left portion of [3,1,2,4,1] is divided and merged itself into single sorted array
//its time to go to the right portion i.e.,[4,1]

//the right portion is again going to be divided
/*[4,1]
   / \
 [4] [1] //here we can stop as they r single elements
*/

//so to merge them into single sorted array
/*
   [4] [1]
    \  /
   [1,4]
*/

//now they will go back and try to merge them
/*       [3,1,2,4,1]  
          /       \
      [1,2,3]   ->[1,4]<-
      /   \        / \
    [1,3] [2]    [4] [1]
     / \
   [3] [1]
*/

//the left and right portions of the array [3,1,2,4,1] 
//has been divided and gotted sorted

//now [1,2,3](left portion)  [1,4](right portion)
//will get merged as single sorted array
/*
  [1,2,3]  [1,4]
      \     /
    [1,1,2,3,4]
    here the approach for inserting elements into final array (as sorted) is:
each of the element in left and right array is compared and push into the final array
*/

//now the arrays after merging will result: 
/*      ->[1,1,2,3,4]<-
          /       \
      [1,2,3]     [1,4]
      /   \        / \
    [1,3] [2]    [4] [1]
     / \
   [3] [1]
*/

//so the left half of the intial array of 9 elements is sorted by divide and merge algorithm
//now it is about the right half of the intial array of 9 elements
//perform again the same divide and merge algorithm on this right half

/*   [ 5,2,6,4 ]
      /      \
    [5,2]   [6,4]  
    /  \     / \
 [5]   [2] [6] [4]

as the array is even, it is divided equally
and whenever there is single element in both sides it'll go back and merge
*/

/*
    ->[ 2,4,5,6 ]<-
      /        \
  ->[2,5]<- ->[4,6]<-  
    /  \      /  \
 [5]   [2]  [6]  [4]

so finally right half of the array also sorted finally
*/

//the last step is to merge left and right halves of the array (which are sorted)
/*
   [1,1,2,3,4]  [2,4,5,6]
          \       / 
     [1,1,2,2,3,4,4,5,6]

here the approach for inserting elements into final array (as sorted) is:
each of the element in left and right array is compared and push into the final array

if one of the half is exhausted(i.e., completed of pushing element of that half) 
then without doubt the other half elements are directly pushed into final array without no comparision
*/

//u can say that after u have completed all the steps of divide and merge
//the array u will get is always sorted

//here v r dividing the array into 2 halves
//but logically speaking if u r beaking the array into 2 new arrays
//and again into 2 new arrays
//and again into 2 new arrays
//does that make any sense to write in pseudo code? -> no

//this is where in the pseudocode v will try to play around with indexes instead of beaking the array

//in order to write the pseudocode i have taken a array of size(n)=5
//3,2,4,1,3
//as u know that indexing will be from 0 to 4 in size 5
// [3 2 4 1 3]
//  0 1 2 3 4   <-indexing
//  |       |
// low     high

//here low and high r starting point and ending point of the array



//code:
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
  vector<int> temp;
  // [low..mid]
  //[mid+1..high]
  int left = low;
  int right = mid+1;
  while(left <= mid && right <= high){
    if(arr[left] <= arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }
  for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }
}
void mS(vector<int> &arr, int low, int high){
  if(low==high) return;
  int mid = (low+high)/2;
  mS(arr,low,mid);
  mS(arr,mid+1,high);
  merge(arr,low,mid,high);
}
void mergeSort(vector<int> &arr, int n){
  mS(arr,0,n-1);
}


//timecomplexity of this algorithm:
// log n (with base 2)
 
