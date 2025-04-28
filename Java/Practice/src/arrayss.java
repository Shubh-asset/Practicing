//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.Arrays;

public class arrayss {
    public static void main(String[] args) {
        int[] marks = new int[3];
        //boolean[] marks = new boolean[3];
        marks[0] = 97;
        marks[1] = 98;
        marks[2] = 95;

        System.out.println(marks[0]);
        System.out.println(marks.length);

        Arrays.sort(marks);

        System.out.println(marks[0]);

        System.out.println("Second student ke second subject ke marks");
        //2D arrays
        int[][]finalMarks = {{1,2,3,4}, {5,6,7,8}};
        System.out.println(finalMarks[1][1]);


    }
}