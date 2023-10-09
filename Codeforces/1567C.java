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
        String s = sc.next();
        int n = s.length();
        long ans = 0;
        for (int mask = 0; mask < 1 << n; mask += 4) {
            long ways = 1;
            for (int i = n - 1; i >= 0; i--) {
                int carry_before = mask >> (i + 2) & 1;
                int carry = mask >> i & 1;
                int digit = s.charAt(i) - '0';

                if (carry_before > 0) {
                    if (digit == 0 && carry == 0) {
                        ways = 0;
                        break;
                    }
                    digit = (digit + 9) % 10;
                }

                int goal = carry != 0 ? digit + 10 : digit;

                if (carry_before != 0 && goal == 19) {
                    goal = 9;
                }
                ways *= Math.min(goal, 18 - goal) + 1;
            }
            ans += ways;
        }
        System.out.println(ans-2);
    }
}