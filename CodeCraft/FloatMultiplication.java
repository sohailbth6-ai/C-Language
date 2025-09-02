//package CodeCraft;

import java.util.Scanner;

public class FloatMultiplication {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("we are dowing float multiplication\n");
        System.out.print("please enter first decimal number:");
        double first=input.nextDouble();
        System.out.print("Now, please enter second number:");
        double second=input.nextDouble();

        double mul=first*second;

        System.out.println("\nResult is:"+mul);
    }
    
}
