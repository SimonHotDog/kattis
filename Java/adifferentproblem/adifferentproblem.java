package Java.adifferentproblem;

import java.util.Scanner;

public class adifferentproblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine()) {
            String data = sc.nextLine();
            String[] data2 = data.split("\\s+");
            long result = Long.parseLong(data2[0]) - Long.parseLong(data2[1]);
            result = Math.abs(result);
            System.out.println(result);
        }
        sc.close();
    }
}
