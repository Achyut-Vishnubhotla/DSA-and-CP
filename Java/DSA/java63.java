//largest number
//find the largest number in a given array

import java.util.*;
public class java63 {
    public static int getLargest(int numbers[]){
        int Largest = Integer.MIN_VALUE; //-infinity

        for(int i=0;i<numbers.length;i++){
            if(largest < number[i]){
                largest = number[i];
            }
        }
        return largest;
    } 
    public static void main(String[] args) {
        int numbers[] = {1,2,6,3,5};
        System.out.println("largest value is : "+getLargest(numbers));

    }
}
