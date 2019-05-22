import java.util.Scanner;
/*
    Date: 17/9/18
    Time: 12:05 PM
    Author: mahfuz
*/

public class A1037 {

    static Scanner usrInp = new Scanner(System.in);

    public static void main(String[] args) {
        int n;
        n = usrInp.nextInt();

        int k = 1, z =0;
        while (true){
            if (n > 0) z++;
            else break;

            n -= k;
            k *= 2;
        }
        System.out.println(z);
    }
}
