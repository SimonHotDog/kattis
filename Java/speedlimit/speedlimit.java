package Java.speedlimit;

import java.util.Scanner;

public class speedlimit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int limitCheck = 0;

        while (limitCheck < 10) {
            int n = sc.nextInt();

            if (n == -1) {
                break;
            }

            int res = 0;
            int previous = 0;

            sc.nextLine();

            for (int i = 0; i < n; i++) {
                String input = sc.nextLine();
                String[] splitInput = input.split("\\s+");
                int n0 = Integer.parseInt(splitInput[0]);
                int n1 = Integer.parseInt(splitInput[1]);
                res = res + (n0 * (n1-previous));
                previous = n1;
    
            }

            System.out.println(res + " miles");
            limitCheck++;
        }

        sc.close();
    }
}
