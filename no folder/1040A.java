import java.util.Scanner;
import static java.lang.Math.min;
/*
    Date: 16/9/18
    Time: 2:25 PM
    Author: mahfuz
*/

public class A1040 {

    static Scanner usrInp = new Scanner(System.in);

    public static void main(String[] args) {
        //Your code goes here
        byte n, a, b, c[];
        n = usrInp.nextByte();
        a = usrInp.nextByte();
        b = usrInp.nextByte();

        c = new byte[n];

        for (int i = 0; i < n; i++) {
            c[i] = usrInp.nextByte();
        }
        boolean ok = true;
        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            if (c[i] == 2) {
                if (c[n - 1 - i] == 0) {
                    ans += a;
                } else if (c[n - 1 - i] == 1) {
                    ans += b;
                } else if (c[n - 1 - i] == 2) {
                    ans += 2 * min(a, b);
                }
            } else if (c[n - 1 - i] == 2) {
                if (c[i] == 0) {
                    ans += a;
                } else if (c[i] == 1) {
                    ans += b;
                } else if (c[i] == 2) {
                    ans += min(a, b);
                }
            } else if (c[i] != c[n - 1 - i]) {
                ok = false;
                break;
            }
        }
        if (n % 2 == 1 && c[n / 2] == 2) {
            ans += min(a, b);
        }
        if (!ok) {
            ans = -1;
        }
        System.out.println(ans);
    }
}
