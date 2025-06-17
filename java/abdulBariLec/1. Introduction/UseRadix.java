import java.lang.*;
import java.util.*;

class UseRadix {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        sc.useRadix(2); //input value should be the base 2, that is binary
        int x = sc.nextInt(); //converts the binary value to integer and then gives result
        
        System.err.println(x);
    }
}
