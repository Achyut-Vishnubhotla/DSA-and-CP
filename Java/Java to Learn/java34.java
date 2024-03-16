//print reverse of a number
//n=10899
//reverse:
// 99801

//this is done with the help of arithmetic operator(modulo) -> %
//by using %10 we can extract the last digit
//eg: 132%10 = 2 (remainder = last digit)

//if u want to remove the last digit the 132/10 = 13
public class java34 {
    public static void main(String[] args){
        int n=10899;
        while(n>0){
            int lastDigit=n%10;
            System.out.print(lastDigit);
            n=n/10;
        }
    }
}
