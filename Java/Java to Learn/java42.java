//print star pattern
// * 
// **
// *** 
// ****

/*
 for any pattern always remember 3 rules
 1) no of lines -> outer loop
     (here 4 lines)
 2) no of times -> inner loop
    (no of stars=no of lines)
 3) what to print? -> * 
 */
public class java42{
    public static void main(String[] args){
         for(int line=1;line<=4;line++){
            for(int star=1;star<=line;star++){
                System.out.print("*");
            }
            System.out.println();
         }
    }
}