//Arrays as function arguments
import java.util.*;
public class java61 {
    public static void update(int marks[]){
        for(int i=0;i<marks.length; i++){
            marks[i]=marks[i]+1;
        }
    }
    public static void main(String[] args) {
        int marks[] = {97,98,99};
        int nonChangable = 5;
        update(marks, nonChnagable);
        System.out.println(nonChangable); 

        //print our marks
        for(int i=0;i<marks.length;i++){
            System.out.print(marks[i]+" ");
        }
        System.out.println();
    }
}
