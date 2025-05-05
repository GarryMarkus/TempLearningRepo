import java.util.Scanner;

public class FrequencyFinder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        int size = scanner.nextInt();

        int[] numbers = new int[size];

        System.out.println("Enter " + size + " numbers:");
        for (int i = 0; i < size; i++) {
            numbers[i] = scanner.nextInt();
        }

        System.out.print("Enter the number to find its frequency: ");
        int value = scanner.nextInt();

        int count = 0;
        for (int i = 0; i < size; i++) {
            if (numbers[i] == value) {
                count++;
            }
        }

        System.out.println("The number " + value + " appears " + count + " time(s) in the array.");

        scanner.close();
    }
}
