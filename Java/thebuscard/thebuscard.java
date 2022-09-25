package Java.thebuscard;

import java.util.Scanner;

public class thebuscard {
    public static void main(String[] args) {
        //Solution only 33/100
        Scanner sc = new Scanner(System.in);

        int K = sc.nextInt();
        int res = 0;

        while (K >= 100) {
            if (K >= 500) {
                res = res + 1;
                K = K - 500;
                continue;
            }

            if (K >= 200) {
                res = res + 1;
                K = K - 200;
                continue;
            }

            if (K >= 100) {
                res = res + 1;
                K = K - 100;
                continue;
            }
        }

        System.out.println(res);

        sc.close();

    }
}
