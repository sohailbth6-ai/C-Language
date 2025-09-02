//package CodeCraft;

import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Welcome to our calculator");
        System.out.print("plese enter first number:");
        int firstnumber = input.nextInt();
        System.out.print("Now, please enter the second number:");
        int secondnumber = input.nextInt();
        int sum = firstnumber+ secondnumber;
        System.out.println("sum of your number is:"+sum);

    }
    
}
