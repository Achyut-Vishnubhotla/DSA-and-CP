//print square pattern 
/*
 **** -> L1
 **** -> L2
 **** -> L3
 **** -> L4
 */
public class java33 {
    public static void main(String[] args){
        for(int lines=1;lines<=4;lines++){
            System.out.println("****");
        }

        //by while loop
        int line=1;
        while(line<=4){
            System.out.println("****");
            line++;
        }
    }

}
