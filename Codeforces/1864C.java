import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);
    static ArrayList<Integer> twos = new ArrayList<>();
    public static void main(String[] args) {
        int x=1;
        int limit=1000000000;
        while(x<limit){
            twos.add(x);
            x*=2;
        }
        int t=sc.nextInt();
        while(t-->0){
            solve();
        }
        sc.close();
    }
    static void solve(){
        int n=sc.nextInt();
        ArrayList<Integer> ans = new ArrayList<>();
        ans.add(n);
        while(n>1){
            int x = getBiggestTwoUnderN(n);
            n-=x;
            ans.add(n);
        }
        System.out.println(ans.size());
        ans.forEach(x -> System.out.print(x+" "));
        System.out.println("");
    }
    static int getBiggestTwoUnderN(int n){
        int ret=1;
        for (int x : twos) {
            if(n<=x)break;
            if(n%x==0)ret=x;
        }
        return ret;
    }
}