package Java.autori;

import java.util.Scanner;

public class autori {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();

        String output = shorten(input);

        System.out.println(output);
        scan.close();
    }

    public static String shorten(String s) {
        if (s.length() > 100) {
            throw new IllegalArgumentException("String cannot be longer than 100 characters");
        }

        String result = "";
        result += s.charAt(0);
        
        for (int i = 1; i < s.length(); i++) {
            if (s.charAt(i) == '-') {
                String temp = "";
                temp += s.charAt(i+1);
                temp = temp.toUpperCase();
                result += temp;
            }
        }

        return result;
    }
}
