import java.util.Scanner;

public class BIteiseAnd {

    public static void main(String[]args) {
        Scanner input = new Scanner(System.in);
        System.out.println("welcome to Bitwise and calculator");
        System.out.print("please enter the value of a: ");
        int a = input.nextInt();
        System.out.print("now, please enter the value of b: ");
        int b = input.nextInt();
         
        int AND = a & b;

        System.out.println("your Bitwise AND result:"+AND);
    }
}