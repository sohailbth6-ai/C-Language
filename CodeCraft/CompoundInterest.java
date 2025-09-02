//package CodeCraft;

import java.util.Scanner;

public class CompoundInterest {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Welccome to compound intrest calculator\n\n ");
        System.out.println("please enter your principle amount Rs:");
        int principal=input.nextInt();
        System.out.println("Now, tell me your rate of intrest:");
        float rate=input.nextFloat();
        System.out.println("Now, tell me for how many years are you borrowing this money:");
        float years=input.nextFloat();

        double compInt=principal*math.pow((1+rate/100),years);

        
        System.out.println("your compound intrest is Rs:"+compInt);
    }
    
}
