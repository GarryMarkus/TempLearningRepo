import java.lang.*;
import java.util.*;

class welcomeMessage{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        String name;
        System.out.println("Enter you name: ");
        name = s.nextLine();
        System.err.println("Your name is: Mr." + name);
    }
}