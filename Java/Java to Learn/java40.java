//Display all numbers entered by user except multiples of 10
//using continue keyword
import java.util.*;
public class java40 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        do {
            System.out.print("enter the number : ");
            int i = sc.nextInt();
            if(i%10==0){
                continue;
            }
            System.out.println(i);
        }while(true);
    } 
}
