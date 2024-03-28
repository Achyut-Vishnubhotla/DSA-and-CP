//function overloading
//multiple functions with the same name but different parameters
//function overloading only depends upon no. of parameters, different parameters 
/*
 int sum(int a, int b){
    return a+b;
 }
 int sum(int a, int b, int c){
    return a+b+c;
 }
 */
//but not on return type of function
/*
 int sum(int a, int b)

 float sum(int a, int b)

 in this scenario this is not function overloading(it'll give error)
 */
public class java53 {
    public static int sum(int a, int b){
        return a+b;
    }
    public static int sum(int a, int b, int c){
        return a+b+c;
    }
    public static void main(String args[]){
        System.out.println(sum(3,5));
        System.out.println(sum(5,2,1));
    }
}
