import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Scanner;

public class Main {
    static class Vector<E> extends ArrayList<E> {
        public Vector(int size) {
            super(size);
        }

        public Vector(Collection<? extends E> c) {
            super(c);
        }

        E back() {
            return super.get(super.size() - 1);
        }

        void pushBack(E item) {
            super.add(item);
        }

        E popBack() {
            return super.remove(super.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        Vector<Long> stk = new Vector<>(Arrays.asList(1L));
        long INF = 10000000000L; // Use 'L' to specify a long literal
        long ans = 0;
        while (q-- > 0) {
            String cmd = sc.next();
            if (cmd.equals("for")) {
                int n = sc.nextInt();
                stk.pushBack(stk.back() * n);
                if (stk.back() > INF)
                    stk.set(stk.size() - 1, INF); // Use 'set' to modify an element
            } else if (cmd.equals("end")) {
                stk.popBack();
            } else if (cmd.equals("add")) {
                ans += stk.back();
            }
        }
        if (ans >= 1L<<32) {
            System.out.println("OVERFLOW!!!");
        } else {
            System.out.println(ans);
        }
    }
}
