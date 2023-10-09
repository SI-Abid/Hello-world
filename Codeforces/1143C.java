import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        int[] c = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
            c[i] = sc.nextInt();
            if (p[i] > 0)
                p[i]--;
        }
        boolean[] good = new boolean[n];
        Arrays.fill(good, false);
        for (int i = 0; i < n; i++) {
            if (c[i] == 0 && p[i] >= 0)
                good[p[i]] = true;
        }
        boolean first = true;
        for (int i = 0; i < n; i++) {
            if (c[i] == 1 && !good[i]) {
                if (!first)
                    System.out.print(' ');
                first = false;
                System.out.print(i + 1);
            }
        }
        if (first)
            System.out.print(-1);
        System.out.println();
    }
}