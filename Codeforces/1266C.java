import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        sc.close();
        if (R == 1 && C == 1) {
            System.out.println(0);
            return;
        }
        ArrayList<Integer> row = new ArrayList<>();
        ArrayList<Integer> col = new ArrayList<>();
        if (R < C) {
            for (int r = 0; r < R; r++) {
                row.add(r + 1);
            }
            for (int c = 0; c < C; c++) {
                col.add(R + c + 1);
            }
        } else {
            for (int r = 0; r < R; r++) {
                row.add(C + r + 1);
            }
            for (int c = 0; c < C; c++) {
                col.add(c + 1);
            }
        }
        for (int r = 0; r < R; r++) {
            for (int c = 0; c < C; c++) {
                System.out.print(row.get(r) * col.get(c)+" ");
            }
            System.out.println();
        }
    }
}