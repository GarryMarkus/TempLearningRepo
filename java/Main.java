import java.util.*;

interface A {
    void show();
    void add(int a, int b);
}

// interface B {
//     void show();
//     void diff(int a, int b);
// }
class B {
    public void show(){
        System.out.println("Method from class b");
    }
}

class C  extends B implements A {
    public void show() {
        System.out.println("Method defined in class C");
    }

    public void add(int a, int b) {
        System.out.println("Addition: " + (a + b));
    }

    public void diff(int a, int b) {
        System.out.println("Difference: " + (a - b));
    }
}

public class Main {
    public static void main(String[] args) {
        C t = new C();
        t.show();
        t.add(5, 4);
        t.diff(7, 1);
    }
}