import java.util.Arrays;
import java.util.Scanner;
/*
    Date: 16/9/18
    Time: 4:35 PM
    Author: mahfuz
*/

public class A1041 {

    static Scanner usrInp = new Scanner(System.in);

    public static void main(String[] args) {

        int n, missing = 0;
        n = usrInp.nextInt();

        int a[] = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = usrInp.nextInt();
        }
        Arrays.sort(a);

        missing = ((a[n-1] - a[0])+1) - n;
        System.out.println(missing);

    }
}
