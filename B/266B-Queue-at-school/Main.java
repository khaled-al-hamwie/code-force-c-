import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int n = scanner.nextInt();
            int t = scanner.nextInt();

            char[] str = scanner.next().toCharArray();
            while (t > 0) {
                for (int i = 0; i < n; i++) {
                    if (i != n - 1 && str[i] == 'B' && str[i + 1] == 'G') {
                        char temp = str[i + 1];
                        str[i + 1] = str[i];
                        str[i] = temp;
                        i++;
                    }
                }
                t--;
            }
            System.out.println(str);
        }

    }
}