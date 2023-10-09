import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<String> nums = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            nums.add(sc.next());
        }
        int ans = 7;
        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < i; j++) {
                int d = dis(nums.get(i), nums.get(j));
                d = (d+1)/2;
                ans = Math.min(ans, d);
            }
        }
        System.out.println(ans - 1);
    }

    static int dis(String a, String b) {
        int cnt = 0;
        for (int i = 0; i < 6; i++) {
            if (a.charAt(i) != b.charAt(i))
                cnt++;
        }
        return cnt;
    }
}