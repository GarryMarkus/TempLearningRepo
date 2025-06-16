import java.lang.*;
import java.util.*;

class Keyboard {
    public static void main(String args[]){
        System.out.println("Taking inputs from keyboard: ");
            Scanner s = new Scanner(System.in); // s is a reference to a scanner object
            int a, b, c, sum;
            System.out.println("Enter three numbers: ");

            a = s.nextInt();// nextInt() method returns the integer being input from the keyboard
            b = s.nextInt();
            c = s.nextInt();
            sum = a+b+c;

            System.out.println("Sum = " + sum); 
    }
}
