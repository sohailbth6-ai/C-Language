//package CodeCraft;

import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Welcome to Simple Interest Calculator\n");
        System.out.print("please enter your principal amount Rs:");
        int principal=input.nextInt();
        System.out.print("Now, tell me your rate of interest:");
        float rate=input.nextFloat();
        System.out.print("NOw, tell me for how many years are  you borrowing this money:");
        float years=input.nextFloat();

        float interest=(principal*rate*years);
         
        System.out.println("\n\nyour simple intrest is Rs:"+interest);

    }
    
}
