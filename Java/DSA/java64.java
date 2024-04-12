//smallest value
//find the smallest number in a given array

import java.util.*;
public class java64 {
    public static int getSmallest(int numbers[]){
        int smallest = Integer.MAX_VALUE; //+infinity

        for(int i=0;i<numbers.length;i++){
            if(smallest > number[i]){
                smallest = number[i];
            }
        }
        return largest;
    } 
    public static void main(String[] args) {
        int numbers[] = {1,2,6,3,5};
        System.out.println("largest value is : "+getSmallest(numbers));

    }
}