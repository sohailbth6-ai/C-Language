//package CodeCraft;

import java.util.Scanner;

public class Perimeter {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("welcome to perimeter calculator\n");
        System.out.println("please enter all 4 sides in cms");

        double a=input.nextDouble();
        double b=input.nextDouble();
        double c=input.nextDouble();
        double d=input.nextDouble();

        double parimeter=a+b+c+d;

        System.out.println("perimeter of your rectangle is:"+parimeter+"cm");
    }
    
}
