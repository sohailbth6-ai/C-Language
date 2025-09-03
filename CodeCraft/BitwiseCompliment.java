import java.util.Scanner;

public class BitwiseCompliment {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Showing the Bitwise xor operator");
        System.out.print("please enter the  number: ");
        int num = input.nextInt();
         

        int result = ~num;
         
        System.out.println("result is: "+result);
       
    }
    
}
