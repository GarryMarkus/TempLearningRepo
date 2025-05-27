class Odd extends Thread {
    public void run() {
        for (int i = 1; i <= 100; i += 2) {
            System.out.println("No: " + i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Odd obj1 = new Odd();
        obj1.start();
    }
}