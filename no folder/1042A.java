
import java.util.Arrays;
import java.util.Scanner;
/*
    Date: 17/9/18
    Author: mahfuz
*/

public class A1042 {
    //Important Declaration and Initilization
    static Scanner usrInp = new Scanner(System.in);

    public static void main(String[] args) {


        //Main Code
        int n, m, a[], cnt = 0;
        n = usrInp.nextInt();
        m = usrInp.nextInt();
        a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = usrInp.nextInt();
        }

        int maxk, minK;
        Arrays.sort(a);
        maxk = m + a[n-1];

        while (m != 0){
            Arrays.sort(a);

            a[0] += 1;

            m -= 1;
            if (cnt < n){
                cnt++;
            }else {
                cnt = 0;
            }
        }
        Arrays.sort(a);
        minK = a[n-1];

        System.out.println(minK+" "+maxk);

    }
}