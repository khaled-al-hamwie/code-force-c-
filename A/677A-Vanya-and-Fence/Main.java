import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int n = scanner.nextInt();
            int h = scanner.nextInt();
            int a;
            int width = n;
            for (int i = 0; i < n; i++) {
                a = scanner.nextInt();
                if (a > h) {
                    width++;
                }
            }
            System.out.println(width);
        }
    }
}
