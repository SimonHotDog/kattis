package Java.turnitup;

import java.util.Scanner;

public class turnitup {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int volume = 7;

        for (int i = 0; i <= n; i++) {
            String input = sc.nextLine();

            if (input.equals("Skru op!") && volume < 10) {
                volume = volume + 1;
            }
            if (input.equals("Skru ned!") && volume > 0) {
                volume = volume - 1;
            }
        }

        System.out.println(volume);
        sc.close();
    }
}
