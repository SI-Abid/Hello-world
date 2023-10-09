import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String s = sc.next();
        sc.close();
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (k == 0) {
                ans.append(s.charAt(i));
            } else {
                int x = s.charAt(i) - 'a';
                int y = 'z' - s.charAt(i);
                if (x > y) {
                    if (k > x) {
                        ans.append((char) (s.charAt(i) - x));
                        k -= x;
                    } else {
                        ans.append((char) (s.charAt(i) - k));
                        k = 0;
                    }
                } else {
                    if (k > y) {
                        ans.append(next(s.charAt(i), y));
                        k -= y;
                    } else {
                        ans.append(next(s.charAt(i), k));
                        k = 0;
                    }
                }
            }
        }
        System.out.println(k == 0 ? ans : "-1");
    }

    static char next(char ch, int k) {
        return (char) ((ch - 'a' + k) % 26 + 'a');
    }
}