//switch statements
import java.util.*;
public class java26 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();

        switch(number){
            case 1: System.out.println("samosa");
                    break;
            case 2: System.out.println("burger");
                    break;
            case 3: System.out.println("mango shake");
                    break; 
            case 4: System.out.println("pizza");
                    break;
            default: System.out.println("thamp thampu 1 2");
        }

        Scanner sc1 = new Scanner(System.in);
        char ch = sc1.next().charAt(0);
        switch(ch){
            case 'a' : System.out.println("Burger");
                       break;
            case 'b' : System.out.println("pizza");
                       break;
            default: System.out.println("ehe thampu thampu 1 2");
        }

    }
}
