
public class java14 {
    public static void main(String[] args) {
        //unary operator
        //increment(++),decrement(--)
        int a=19;        //pre increment -> value change and then use it
        int b=++a;    
        System.out.println(a);
        System.out.println(b);


        int x=56;        //post increment -> value use and then change it
        int y=x++;   
        System.out.println(x);
        System.out.println(y);
    }
}
