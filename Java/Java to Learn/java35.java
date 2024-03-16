//reverse the given number
//last time we did printing of the reverse
//but now v r reversing the number and saving it in the other variable
//logic is:
//rev = 0;
//rev = (rev*10) + lastDigit;
public class java35 {
    public static void main(String[] args){
        int num = 10899;
        int rev = 0;
        while(num>0){
            int lastDigit = num%10;
            rev=(rev*10)+lastDigit;
            num=num/10;
        }
        System.out.println(rev);
    }
}
