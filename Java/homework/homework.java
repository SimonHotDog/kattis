package Java.homework;

import java.util.Scanner;

public class homework {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String input = sc.nextLine();

        String[] splitInput = input.split(";");
        int splitInputLength = splitInput.length;
        int res = 0;

        for (int i = 0; i < splitInputLength; i++) {
            if (splitInput[i].indexOf('-') == -1) {
                res = res + 1;
            } else {
                String[] numbers = splitInput[i].split("-");
                int n1 = Integer.parseInt(numbers[0]);
                int n2 = Integer.parseInt(numbers[1]);
                int result = (n2 - n1) + 1;
                res = res + result;
            }
        }

        System.out.println(res);
        sc.close();
    }
}
