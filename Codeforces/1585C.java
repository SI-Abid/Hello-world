import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
        sc.close();
    }

    static void solve() {
        int n = sc.nextInt();
        int k = sc.nextInt();
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            if (x > 0)
                pos.add(x);
            else
                neg.add(-x);
        }
        pos.sort((a, b) -> a - b);
        neg.sort((a, b) -> a - b);
        long ans = 0;
        for (int i = pos.size() - 1; i >= 0; i -= k) {
            ans += (2L * pos.get(i));
        }
        for (int i = neg.size() - 1; i >= 0; i -= k) {
            ans += (2L * neg.get(i));
        }
        int x = -1;
        int y = -1;
        if (pos.size() > 0)
            x = pos.get(pos.size() - 1);
        if (neg.size() > 0)
            y = neg.get(neg.size() - 1);
        ans -= Math.max(x, y);
        System.out.println(ans);
    }
}