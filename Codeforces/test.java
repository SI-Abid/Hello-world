import java.util.HashSet;

class Run extends Thread {
    public void run(int n) {
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        HashSet<Integer> set = new HashSet<>();
        do {
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = 0; j <= i; j++) {
                    sum += arr[j];
                }
                set.add(sum % n);
            }
            if (set.size() == n) {
                System.out.print(n + " => ");
                for (int i = 0; i < n; i++) {
                    System.out.print(arr[i] + " ");
                }
                System.out.println();
                break;
            }
            set.clear();
        } while (findNextPermutation(arr));
    }

    public static int[] swap(int data[], int left, int right) {

        // Swap the data
        int temp = data[left];
        data[left] = data[right];
        data[right] = temp;

        // Return the updated array
        return data;
    }

    // Function to reverse the sub-array
    // starting from left to the right
    // both inclusive
    public static int[] reverse(int data[], int left, int right) {

        // Reverse the sub-array
        while (left < right) {
            int temp = data[left];
            data[left++] = data[right];
            data[right--] = temp;
        }

        // Return the updated array
        return data;
    }

    // Function to find the next permutation
    // of the given integer array
    public static boolean findNextPermutation(int data[]) {

        // If the given dataset is empty
        // or contains only one element
        // next_permutation is not possible
        if (data.length <= 1)
            return false;

        int last = data.length - 2;

        // find the longest non-increasing suffix
        // and find the pivot
        while (last >= 0) {
            if (data[last] < data[last + 1]) {
                break;
            }
            last--;
        }

        // If there is no increasing pair
        // there is no higher order permutation
        if (last < 0)
            return false;

        int nextGreater = data.length - 1;

        // Find the rightmost successor to the pivot
        for (int i = data.length - 1; i > last; i--) {
            if (data[i] > data[last]) {
                nextGreater = i;
                break;
            }
        }

        // Swap the successor and the pivot
        data = swap(data, nextGreater, last);

        // Reverse the suffix
        data = reverse(data, last + 1, data.length - 1);

        // Return true as the next_permutation is done
        return true;
    }
}

public class test {
    public static void main(String[] args) {
        long start = System.currentTimeMillis();
        Run runners[] = new Run[12];
        for (int i = 1; i <= 12; i++) {
            runners[i - 1] = new Run();
        }
        for (int i = 12; i >= 1; i--) {
            System.out.println("Thread " + i + " started!");
            runners[i - 1].run(i);
        }
        // end time
        long end = System.currentTimeMillis();
        System.out.println("Time taken: " + (end - start) + "ms");
    }
}