//parameters vs arguments

import java.util.Scanner;

public class java48 {
    public static int calculateSum1(int a, int b){  //formal paramters or parameters
        int sum = a + b;
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = calculateSum1(a,b);  //actual parameters or arguments
        System.out.println(sum); 
    }
}
