import java.sql.SQLOutput;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class strings {
    public static void main(String[] args) {
        String name1 = "hello, ";
        String name2 = "Sir";
        String name3 = name1 + " and " + name2;
        System.out.println(name3);
        System.out.println(name1.charAt(1));
        System.out.println(name2.length());

        //String name4 = name2.replace(oldChar: 'i', newChar: 'd');

        String name = "Aman and Akku";
        System.out.println(name.substring(0, 4));

    }
}