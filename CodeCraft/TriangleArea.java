//package CodeCraft;

import java.util.Scanner;

public class TriangleArea {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        System.out.println("Welcome to area calculator\n");
        System.out.print("please enter your base in cms:");
        double base=input.nextDouble();
        System.out.print("Now, enter your perpendicular height:");
        double height=input.nextDouble();

        double area=0.5*base*height;

        System.out.println("the area of triangle is:"+area+"cm2");
    }
    
}
