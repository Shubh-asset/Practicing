//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the
import java.util.Scanner;
public class input {
    public static void main(String[] args) {

    //taking input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = sc.nextInt();
        // nextint, nextfloat, nextboolean etc...
        System.out.println("Your age is: ");
        System.out.println(age);

        System.out.println("Input your name: ");
        //String name = sc.next();
        String name = sc.nextLine();
        System.out.println(name);
    }
}