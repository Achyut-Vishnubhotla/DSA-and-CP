//check if a student will pass or fail usinfg ternary operator
import java.util.*;
public class java25 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int marks = sc.nextInt();

        String status = (marks>=33)?"Pass":"Fail";
        System.out.println(status);
    }
}
