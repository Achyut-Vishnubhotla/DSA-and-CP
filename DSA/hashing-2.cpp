//till now what we have learnt
//we kinda learned about number hashing
//if there is a problem which requires number hashing 
//we can use arrays to hash them


//the next thing we r learning is character hashing
//can we do character hashing using arrays? -> yes we can

//imagine i give u a string of abcdabefc
//and i give u certain queries
//those are
//how many times does a appear? -> twice
//how many times does c appear? -> twice
//how many times does z appear? -> 0
//similarly a Q queries can be asked for a particular character
//like how many times that particular character appear in the string

//the standard procedure is 
//u pickup a and iterate in the string 
//if a=a then count++
//u just basically iterate through the string and in asimilar way u compare the character
//with each of the characters and u count it
//and the psudocode for this looks like this
/*
int f(char c, string s){
    cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]== c){
            cnt++;
        }
    }
    return cnt;
}
*/
//similarly if u do this for Q queries
//how munch time do u end up taking
//for every query u will take N
//for Q queries u'll take O(Q*N)
//similar to the previous problem now the question is

//now the question is
// can u hash them as arrays
//and the answer to that is YES


//now the question comes up
//how do u hash them as arrays
//because if u remember the arrays
//have indexes like 0,1,2,3,...
//and if i have to talk about these characters
//imagine im saying the array only has lower case letters
//in that case how can u hash
//so i know lower case means it'll have a,b,...,z
//total 26 elements

//now can i have a array of size 26
//i'll be like yes i can

//imagine if u have an array of size 26
//it'll be indexed from 0,1,2,3,...,25
//since i know that there are 26 alphabets
//can i correspond a to 0, b to 1
//basically im mapping them 

//so for every character there will be a index
//if i can do that then the problem can be solved

//now u might have a question
//so u are saying that alphabets will be mapped to indexes
//but how can u program it
//because in out mind mapping can be visualized
//but how to do in programming
//this is where ascii values comes into picture

//so we know that a->97 and z->122 (in ascii)
//now to map with the index
//imagine u should map f with index 5
//'f'-'a' = 102-97 = 5
//for a, 'a'-'a' = 97-97 = 0
//for b, 'b'-'a' = 98-97 = 1
//for c, 'c'-'a' = 99-97 = 2
//so the formula that u need is 
//character - 'a'
//if u do this u get the corresponding index in the hash array
//so that u can easily hash it

//imagine if the string contains uppercase characters as well
//now u have 256 characters in total
//u can go across and create an array of 256 size and indexing will be from 0 -> 255 
//this time u dont have to subtract anything
//for 'a' -> 97 and this will be directly mapped to the index 97
//for 'b' -> 98 and this goes to 98

//just beacuse u had lowercase letters
//is the reasin u took 26 size array
//u could have taken a 256 size array
//that would have worked as well

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}
*/
//here we took hash of 26
//but it was done because we knew there were just lowercase letters

//imagine it doesnt states u that it has just lower case letters
//in that case we know that no of caharacters that exist is 256
//for hashing 256 characters the code will be
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    //precompute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}
/*
input:
abcdabefc
5
a
g
h
b
c
output:
2
0
0
2
2
*/
//it also gives the output same
//for the lowercase inputs
//if it wasn't mentioned i.e., the exclusivity of the character u have to take 256
//and this is how u hash all the characters


//are there any complications in order to hash characters
//because in number characters 
//we saw if the number goes till 10^9, there might be a problem 
//but in character there will never be a problem
//because at ma there will be 256 characters 
//and array can store 256 characters
//so in character hashing u dont need to think much
//always prefer arrays
//and always use this logic 
//character - 'a' (for lowercase)
//character - 'A' (for uppercase) 
//256 and simply hash the character(for uppercase+lowercase)

//in the code, s[i] means the character
//but the hash[s[i]] needs an integer
//even if u write a character it'll auto cast itself into the integer as per ascii value
//this is why it works





//now coming to back to the problem we had in number hashing 
//in number hashing when we were trying to hash it into the arrays
//we saw that it can hash till 10^7 that also if u declare the array globally
//and for number exceeding 10^7 like 10^9,10^12,10^18
//we cannot hash it using arrays
//we cannot hash it using arrays

//this is something that we need to solve
//that is where in c++ stl comes into the picture
//in stl there are 2 things 1)Map 2)unordered Map
//and in java , collection comes into picture
//in collection, hashmaps 
//most of the concepts discussed in the map & unordered map
//will apply to the hash maps also
//it is just the same stuff
//just the writing format is different


//now lets understand map and unordered map
//till now we took an array to hash right?
//in map what happens is
//imagine if u r given an array 1 2 3 1 3 2
//in c++,map is a data structure
//map should have key and value
//now what is the key over here?
//element in the array is key
//and there has to be a corresponding value to it
//the value over here the frequency
//so this is how it is defined

//key is the element i.e., int
//and how many times it appears is the value i.e., also int
//map <int, int>

//now before iterating in the array
//if u say mpp[1] , this will return 0
//because it doesn't exist in the map
//and the corresponding value will be 0

//when u r iterating int the array
//the moment when go to 1
//u'll say mpp[1]++
//what will happen is
//if it doesn't exist in the map
//it'll go to the map and say 1 u do not exist so its 0
//and incrementing it will be 1
//so it'll store a key value pair
//key is the element in the array
//value is the no of occurence of that element
//(1->1)

//next it goes to 2 and does the map mpp[2]++
//and it says it doesnt stores 2
//so it goes and stores 2
//(2->1)

//next it goes to 3 and says again says doesnt stored
//and does map mpp[3]++
//(3->1)

//next it'll goes to 1
//now it says i already have 1
//and goes back to the key 1 and increases the value to 2
//(1->2)

//goes to 3
//again increases the value by 2
//(3->2)

//goes to 2
//again increases the value by 2
//(2->2)


//so what u need to do is
//mpp[arr[i]]++

//imagine the last element in the array as 12
//then mpp[12]++
//(12->1)
//there's a observation here
//over here even if the number is till 12
//and if u have used array hashing
//u would have ended up taking a hash array of size 13
//in map we r just storing the elements that are required
//we require 1,2,3,12 so 4 elements are stored 
//whereas in array hashing u had to declare a array of size 13 in order to get the 12th index
//if the maximum element was 12 
//this is where map is slightly beneficial
//it'll take a little less memory compared to the array
//because it'll just store the elements that are required


//if u do for mpp[4]
//as it is not there in the map
//so it'll automatically throw u 0
//and it doesnt stores 4 
//now let us code
/*
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
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<,endl;
    }
}
*/

//remember one thing the map stores all the values in sorted order
//it means
//(1->2) will be in the 1st place
//(2->2) will be in the 2nd place
//(3->2) will be in the 3rd place 
//(12->1) will be in the 4th place
//to prove it
/*
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
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //this is how u iterate in the map
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
}
*/


//you might have a question
//can i also do precompute in the same loop of input
//instead of taking 2 loops
//yes u can
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
     map<int, int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
} 
*/

//it doesnt matter anyhow 
//because its N+N and not N*N
//N*N generates a bigger value and N+N=2N
//in time complexity coefficients N are also included into the N


//so we did learned about map
//now can this map be used in the string hashing?
//yes it can
//but what is the key here
//if u can remember the key is character
//so what u can do is 
//map<char, int> (map a character with its frequency)
//so instead of using array for hashing
//and u can say the precomput will be mpp[s[i]]++ 
//mpp[s[i]]++ will not be converted into integer
//now your map will be storiung something like this
//c->1
//b->1
//a->2
//so depending on what u r trying to hash
//that will become ur key
//and what u r storing ,that will become ur value
//over here we r storing frequency thats why its being ++

//now what is the time complexity of map
//basically mpp[arr[i]]++, this is basically storing in the map
//after storing, u perform fetching i.e., mpp[num]

//remember storing and fetching in a map 
//takes O(log N) in all cases(best,average,worst)



//now performing hashing using
//unordered map
//which stores in unsorted fashion
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
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //this is how u iterate in the map
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
}