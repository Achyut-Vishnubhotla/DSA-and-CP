//ternary operator 

//until now 
//binary operator means operation b/w 2 operands(eg:a+b)
//unary operator means operation on 1 operand only(eg: i++)

//but in ternary operator
//operation on-> 3 operands
//it is the alternative to if-else (i.e., if else condtion in one line)
//syntax:
//variable=condition?statement1:statement2;
//eg1:
//int larger=(5>3)?5:3;
//here larger stores the value according to its datatype i.e., 5
//if not 3 is stored in the larger variable 
//eg2:
//String type=(5%2==0)?"even":"odd";




public class java24 {
    public static void main(String[] args){
        int number=4;
        
        //to check the number is even or odd without using if-else
        //using ternary operator 
        String type = (number%2==0) ? "even":"odd";
        System.out.println(type); 
    }
}
