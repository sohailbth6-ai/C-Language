import java.util.Scanner;

public class BitwiseOr {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Showing Bitwise OR operator");
        System.out.print("please enter the first number: ");
        int first = input.nextInt();
        System.out.print("Now, please enter the other number: ");
        int second = input.nextInt();
         
        int result = first | second;

        System.out.println(" result is: " +result);
    }
    
}
