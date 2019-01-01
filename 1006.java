import java.util.Scanner;

public class TaskA {
    public static void main(String[] args) {
        Scanner userInp = new Scanner(System.in);

        int n, cnt = 0;

        n = userInp.nextInt();

        int[] a = new int[n];

        for(int i = 0; i<n; i++){
            a[i] = userInp.nextInt();

            if (a[i] % 2 == 0){
                a[i] -= 1;
            }
        }

        while (cnt < n){
            if (n - cnt == 1){
                System.out.println(a[cnt]);
                break;
            }
            System.out.print(a[cnt]+ " ");

            cnt++;
        }
    }
}
