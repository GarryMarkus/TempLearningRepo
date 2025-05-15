import java.util.*;

class ioCommands {
    public static void main(String arg[]){
        Scanner sc=new Scanner(System.in);
        
        int integerValue=sc.nextInt();
        System.out.println(integerValue);

        float floatValue=sc.nextFloat();
        System.out.println(floatValue);
        
        String oneWord=sc.next();
        System.out.println(oneWord);

        String oneLine=sc.nextLine();
        System.out.println(oneLine);

    }
}
