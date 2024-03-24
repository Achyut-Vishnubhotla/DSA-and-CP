//syntax with parameters
/*
 returnType(type param1,type param2){
    //body
    return statement;
 }
 */


import java.util.*;
public class java47 {
    //method 1
    public static void calculateSum(){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = a+b;
        System.out.println("sum is: "+ sum);
    }

    //method 2
    public static int calculateSum1(int a, int b){
        int sum = a + b;
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = calculateSum1(a,b);
        System.out.println(sum);
    }
}

