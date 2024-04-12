//selection sort

//what is the selection sort?
//as the name recommends selection
//what do you select we select? -> minimums

//the given array is
// 13 46 24 52 20 9

//now u'll look at the entire array 
//and say who is the minimum
//and it states 9 is the minimum

//so u'll take that 9 and place that in the1st place
//now where will 13 go which is in the 1st place before
//13 says no issues, i will go to your place
//because 9 has to come at first

//now the array becomes like this 
// 9 46 24 52 20 13

//so the algorithms works like select the minimums and swap ->sorting

//now the array is divide into sorted and unsorted arrays
//we know that if minimum element is at 1st place then upto that part the array is sorted
//and the remaining portion of the array is not sorted

//  { 9 }{ 46 24 52 20 13 }
//   /       \ 
// sorted     unsorted

//so again for the unsorted portion (select minimum and swap) applies


//in the unsorted array 13 is the minimum
//now 13 swaps its place with 46
//but the 9 will be at its place because it is already sorted

//now the array will become
//  { 9 13 }{ 24 52 20 46 }
//   /       \ 
// sorted     unsorted

//similarly if the sorting is applied no of times
//  { 9 13 20 }{52 24 46 }
//   /           \ 
// sorted     unsorted

//  { 9 13 20 24 }{ 52 46 }
//   /             \ 
// sorted         unsorted

//finally the array becomes
// 9 13 20 24 46 52

//now implementation
//so in order to implement the algorithms
//we need somthing like observing power
//lets start observing


//in the entire array we picked up the minimum element
//whichever index the minimum appeared
//that index is swapped with the 1st place

//so u can say
//1st swap happend at index 0 and minimum index (here array is 0 to n-1)
//2nd swap happend at index 1 and minimum index (here array is 1 to n-1)
//3rd swap happend at index 2 and minimum index (here array is 2 to n-1)
//and similarly..

//so to generalise
// swap will be happening till 0,1,2,3,4 and we do not touch last maximum element
// so we will go till (n-2)th index 
//because the last element is n-1 in arrays, as we only go till second last element


//code:
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

/*
intput:
6
13 46 24 52 20 9

output:
9
13
20
24
52
46
*/

//time complexity

//here the inner loop runs for:
//1st run-> n times
//2nd run-> n-1 times (here j will be 1 and iterates from 1 to n-1)
//3rd run-> n-2 times (here j=2 and iterates from 2 to n-1)
//4th run-> n-3 times (here j=3 and iterates from 3 to n-1)
//and so on till 1 time

//it is similar to the formula 
//1+2+3+..+n(sumation of n natural numbers) = n*(n+1)/2
//i.e., n^2+n/2
//here in timecomplexity we ignore the comparitively smaller values
//so n/2 will be vomitted
//and for n^2/2, /2 is a constant so that will also be ignored  
//so => O(n^2)
//this is the best,worst,average time complexity for this particular algorithm