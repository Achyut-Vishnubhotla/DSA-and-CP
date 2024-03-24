//print half pyramid pattern
/*
 1
 12
 123
 1234
 */
public class java44 {
    public static void main(String[] args) {
        int n=4;
        for(int line=1;line<=n;line++){
            for(int number=1;number<=line;number++){
                System.out.print(number);
            }
            System.out.println(); 
        }
       
    }
}
