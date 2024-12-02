#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
        // Code Here
    int largest=-1;
    int secondLargest=-1;
    if(arr.size()<2){
        return -1;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}
int main(){
    int arr[6]={1,6,4,8,3,0};
    getSecondLargest(arr);

}