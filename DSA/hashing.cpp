//very important concept
//in order in understand hashing

//an array is given to you
//1 2 1 3 2
//and asked 
//how many times does 1 appear in the array? -> 2
//how many times does 3 appear in the array? -> 1
//how many times does 4 appear in the array? -> 0
//how many times does 2 appear in the array? -> 2
//how many times does 1 appear in the array? -> 0

//so given an array u can asked a lot of times 
//u can asked for a given number or any other number
//and u have to tell everytime asked

//the first comes to mind for this scenario is
/*
num=1(for no of 1's in the array)
int f(int num,int arr[],int n){
    cnt=0;
    for(int i=0;i<n;ni++){
        if(arr[i]==num){
            cnt=cnt+1;
        }
    }
    return cnt;
}
*/
//here the time complexity of this is O(N)
//as the loop is running for n times 
//for num=1 it is running n times

//for num=2,3,4,10(as asked above)
//the loop will run n times individually for 2,3,4,10
//then the time complexity for all 5 numbers, you can say will be (5*O(N))
//and imagine if i give u a lot of such numbers(Q)
//and for every number, u have to tell how many times it appears
//so the time complexity will be (Q*O(N))
//this is which might not be good
//imagine if the q is large i.e., given Q=10^5
//and the array size N is also given 10^5 
//then what happens is O(10^5 * 10^5)=O(10^10)
//and the no of operations is O(10^10)
//if you remember(in time and space complexity) 10^8 ~ 1 sec(roughly)
//if it is taking 10^10 operations then it will take 100 secs(roughly)
//how do i get that
//if 10^8 operations -> 1 sec
//then 1 operation will take -> 1/10^8
//then 10^10 operations will take -> 1/10^8 *10^10 = 10^2 =100 secs
//which is a lot of time 
//u cant wait for 1 and half minutes for a program to execute

//this is where hashing comes into the picture
//Its a technique helps you to do in a much faster way

//if i have to define hashing in extremely naive terms
//then it is something like prestoring and fetching i.e., prestoring somthing and fetch when required
//now let us understand this in depth

//let us take the previous array
//1 2 1 3 2
//now imagine the problem statement states given an array will at max have numbers till 12
//it means over in our array we see only three different numbers 1,2,3 so at max over here is 3

//now what hashing says is
//i know i can have numbers from 0,1,2,3,...,12
//what i will do is 
//i will create an another array and you can call it as hash array
//what i'll do is i'll create an array of size 13
//the indexing will start from 0 and goes on til 12
//and i'll assign everything as 0 intially
//this is what i'll call as hash array or frequency array
//now what i'll do is i will do some precalculation
/*
what is precalculation?
the taken array is 1 2 1 3 2

i'll go to the first number which is 1(as per the array we have taken)
and i'll go the index 1 of hash array and says can you just remember i have one 1
so he'll say i'll remember you have one 1

next i'll go to the 2 in the array we have taken
and comes to the index 2 of hash array and says that can u remember i have one 2

next i'll go to the 1 and say go to index 1 of hash array and say that he has one more 1

next i'll go to 3 and say go and remember u have one 3

next i'll go to 2 again and say go and remember u have one more 2

so the moment when u traversed all the elements in the array
in the hash array
the index 1 represents 1 appears twice
the index 2 represents 2 appears twice
the index 3 represents 3 appears once 
and all the other indexes are marked as zero because they do not appear

now this is the prestore that you have done
*/

/*
now what will happen
u'll ask
how many times the 1 appears?
here u do not loop and find how many times the 1 appears
now what u say is "hey i have done a prefetching"
so u'll go to index 1 of hash array and u'll say 1 appears twice
now u'll store this value appearing twice in hash[1]

instead of iterating in the entire array
i'll say hash[1] and it'll say 2

for the 3 ,i'll say hash[3] and it'll give me 1

for the 4, i'll say hash[4] and it'll tell me 0

for the 2, i'll do hash[2] and it'll give me 2

for the 10, i'll do hash[10] and it'll give me 0

for the 12, i'll do hash[12] and it'll give me 0
*/

//so i can say i just did a single pre computation
//and that apparantly solved all my queries in one go
//and now i have to code this up

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
int hash[13]={0};
    //here the question stated that the maximum size should be 12
    //but u require a size 13 because in order to have a 12th index 
    //u should need a size of 13 beacuse the last index of the array is 12
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1; 
    }


    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }
    return 0;
}
/*
input:

5 (array size)
1 3 2 1 3 (array elements)
5 (no of queries asked for how many times a number is the array)
1 (no of times 1 number is the array)
4 (no of times 4 number is the array)
2 (no of times 2 number is the array)
3 (no of times 3 number is the array)
12 (no of times 12 number is the array)

output:

2 (no of times 1 appears in the array)
0 (no of times 4 number is the array)
1 (no of times 2 number is the array)
2 (no of times 3 number is the array)
0 (no of times 12 number is the array)
*/

//a doubt may rising in ur mind 
//that our given array could be having a max element till 12
//so it is very obvious that u declare an array of size n=13 then the last index we will get as 12
//and we can store how many times the 12 appears

//but whatif the maximum array element can be till 10^9
//i.e., whatif the array have larger elements
//can we declare a array of size 10^9+1
//because apparently it is what we are seeing 
//as if max element is 12 then we are declaring the size of array as 13

//so can we declare a array of size 10^9
//the answer to that is no you cannpt
//the maximum size that u can declare is 10^6 if array is type int and inside the main() function
//you cannot declare a array of size 10^7 in the main() function
//if u do, it throws u segmentation fault
//it'll not be able to allocate that much memory

//but but but
//if u go across and declare somewhere globally
//u can declare the array of size 10^7 which u can declare like arr[1e7], 1e7 =10^7
//with due respect if it is declared globally
//10^7+1 might also work but near about 10^7 (globally)

//if u r declareing an bool array
//inside main() function u can got till 10^7
//and globally u can go till 10^8

//and if u r declare a int hash array globally 
//then no need to assign ={0} 
//because in global declaration 0 will be assigned to values of indexes 
//instead of garbage values 
