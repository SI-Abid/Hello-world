import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        while (q-- > 0) {
            int n = sc.nextInt();
            long k = sc.nextLong();
            StringBuffer s = new StringBuffer(sc.next());
            int pos = 0;
            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '0') {
                    swap(s, i, (int) (i - Math.min(i - pos, k)));
                    k -= Math.min(i - pos, k);
                    pos++;
                }
            }
            System.out.println(s);
        }
    }

    static void swap(StringBuffer s, int i, int j) {
        char tmp = s.charAt(i);
        s.setCharAt(i, s.charAt(j));
        s.setCharAt(j, tmp);
    }
}