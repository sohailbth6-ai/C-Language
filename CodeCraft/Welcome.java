//package CodeCraft;

import java.util.Scanner;

public class Welcome {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("plese enter your name:");
        String Name = input.nextLine();
        System.out.println("welcome "+Name+" to our village");
    }
    
}
