import java.util.ArrayList;
import java.util.Arrays;

class Solution {
      public static int solution(String n, int b) {
        ArrayList<String> listOfIDs = new ArrayList<>();
        String x, y, z;
        while (true) {
            y = ascending(n);
            x = descending(y);
            z = subtract(x, y, b);
            if (z.equals(n) || z.equals("0")) {
                return 1;
            }
            if (IDIsDuplicate(listOfIDs, z)) {
                return listOfIDs.size() - listOfIDs.indexOf(z);
            } else {
                listOfIDs.add(z);
                n = z;
            }
        }
    }

    private static String subtract(String x, String y, int b) {
        String result = Integer.toString(Integer.parseInt(x, b) - Integer.parseInt(y, b), b);
        if (result.length() < x.length() && !result.equals("0")) {
            return modifyWithZeros(result, x.length() - result.length());
        }
        return result;
    }

    private static String ascending(String n) {
        char[] array = n.toCharArray();
        Arrays.sort(array);
        return new String(array);
    }

    private static String descending(String n) {
        return new StringBuilder(n).reverse().toString();
    }

    private static String modifyWithZeros (String input, int zeros) {
        StringBuilder result = new StringBuilder();
        while(zeros != 0) {
            result.append("0");
            zeros--;
        }
        result.append(input);
        return result.toString();
    }

    private static boolean IDIsDuplicate (ArrayList<String> list, String element) {
        for (String s : list) {
            if (s.equals(element)) {
                return true;
            }
        }
        return false;
    }
}

