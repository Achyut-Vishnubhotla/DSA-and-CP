public class java16 {
    public static void main(String[] args) {
        //logical operators

        //logical and -> &&
        /*
         A B and
         T T T
         T F F
         F T F
         F F F
         */
        System.out.println( (3>2) && (5>0) );

        //logical or -> ||
        /*
         A B or
         T T T
         T F T
         F T T
         F F F 
         */
        System.out.println( (2>3) || (5>0));


        //logical not -> !
        /*
         A not
         T F
         F T
         */
        System.out.println( !(3>2) );
    }
}
