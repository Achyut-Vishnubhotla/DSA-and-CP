//check prime(optimised)
//we need optimisation because factors can be repeated for checking
/* 6 -> 1 * 6  |   8 -> 1 * 8
        2 * 3  |        2 * 4
      -------- |      --------
        3 * 2  |        4 * 2  
        6 * 1  |        8 * 1
*/
public class java56 {
    public static boolean isPrime(int n){
        if(n==2){
            return true;
        }
        for(int i=2; i<=Math.sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        System.out.println(isPrime(16));
    }
}
