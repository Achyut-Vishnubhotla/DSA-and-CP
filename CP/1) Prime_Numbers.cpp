/*
some facts about prime numbers

1)2 is the only even prime

2)every prime can be written as 6n+1(or)6n-1(where n is a natural number), except 2 and 3
for example:
6 * 2 - 1 = 11(prime)

3)Goldbach conjecture: Every even integer greater than 2
can be expressed as the sum of 2 primes
for example:
13 + 3 = 16(even integer)

4)2 and 3 are only consecutive numbers that are prime

5)wilson's theorem => (p-1)! = (p-1) mod p
(should be explained briefly)

*/
/*
wilson's theorem is 
(p-1)! = (p-1) % p

now what is the significance of the theorem?

if p=5
then 
(5-1)! = (5-1) % 5 
    4! = 4 % 5
    4! = 4
 (25)%5 = 4
    4 = 4   
*/

//what is prime number?
//a number should be divisible by 1 & itself 
//and no of factors of that number is 2( 1 and that number)


//so if the question is to check if a number is divisible by some number or not?

//our approach will be -> n%i == 0  (where n is the number taken to be checked & i is some numbers used for checking)
//here i can't be 1 and n
//because condition to be prime is divisible by 1 and itself only
//if v do that result might be the number is prime and composite

//so what do v need to check is if the no of factors = 2 or not (to check the number is prime or not)

//if there is a number n (to check if it is prime or not)
//v loop from 1 to n and check the divisibility from 1 to n

/*
cnt=0
for(i=1;i<=n;i++){
    if(n%i==0){
        cnt++
    }
}
if(cnt==2) print(prime)
else print(not prime)
*/

//here the time complexity is O(n) 
//as the no of iterations the for loop takes is n times

//this is not optimised version of the problem
//v will come to that

//so can v optimise it further? s v can 

/*
for a number like 
     (i) (n/i)
      |    |
 36 = 1 * 36
      2 * 18
      3 * 12
      4 * 9
      6 * 6
    ---------
      9 * 4
     12 * 3
     18 * 2
     36 * 1

for 36, the factors came after 6 * 6 is the repeatition 
so if v iterate upto it squareroot so loop is trimmed
*/

/*
cnt=0
for(i=1;i<=sqrt(n);i++){
    if(n%i==0){
        if((n/i)!=i){
            cnt++
        }
    }
}
if(cnt==0) print(prime)
else print(not prime)
*/
//time complexity for this is O(sqrt(n) * log n)
//because the <=sqrt(n) condition is checked everytime so for checking it takes log n



//if the question is print the sum of factors
/*
for(i=1;i*i<=n;i++){
    if(n%i==0){
        sum+=i
        if((n/i)!=i){
            sum+=(n/i)
        }
    }
}
*/
