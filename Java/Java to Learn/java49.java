//call by value
public class java49 {
    //method 2
    public static void swap(int a, int b){
        //swap
        int temp=a;
        a=b;
        b=temp;

        System.out.println("a="+a);
        System.out.println("b="+b);
    }


    public static void main(String[] args) {
        /*method-1
        //swap - values exchange
        int a = 5;
        int b = 10;

        //swap
        int temp=a;
        a=b;
        b=temp;

        System.out.println("a="+a);
        System.out.println("b="+b); 
        */
        //swap - values exchange
        int a = 4;
        int b = 6;
        swap(a,b);
        
    }
}
