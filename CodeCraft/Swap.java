//package CodeCraft;

import java.util.Scanner;

public class Swap {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("welcome to swapping station\n\n");
        System.out.print("enter value of a:");
        int a = input.nextInt();
        System.out.print("now, enter value of b:");
        int b = input.nextInt();
        int c=a;
        a=b;
        b=c;
        System.out.println("swapping done  ");
        System.out.println("value of A is: "+a);
        System.out.println("value of B: "+b);
       
    }
    
}
