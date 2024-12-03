class Solution {
    long reverse(int x){
        long t=0;
        while(x){
            t= t*10+x%10;
            x/=10;
        }
        return t;
    }
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        return ((long) x == reverse(x));
    }
};