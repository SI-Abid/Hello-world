import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int p = sc.nextInt();
        sc.close();
        long ans = 1, total = n;
        long l = 0, h = n, lt = 1, rt = 0, mid;
        while (l < h) {
            mid = (l + h) / 2;
            if (mid < p) {
                total--;
                ans *= x - lt;
                lt++;
                l = mid + 1;
            } else if (mid > p) {
                total--;
                ans *= n - x - rt;
                rt++;
                h = mid;
            } else {
                total--;
                l = mid + 1;
            }
            ans %= 1000000007;
        }
        for (int i = 1; i <= total; i++) {
            ans = (ans * i) % 1000000007;
        }
        System.out.println(ans);
    }
}