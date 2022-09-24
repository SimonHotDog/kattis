package Java.reverse;

import java.util.Scanner;

public class reverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] nlist = new int[n];

        for (int i = 0; i < n; i++) {
            int input = sc.nextInt();
            nlist[i] = input;
        }

        int x = n-1;

        for (int i = 0; i < n; i++) {
            System.out.println(nlist[x-i]);
        }
        sc.close();

    }
}
