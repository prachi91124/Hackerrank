import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String timeConversion(String s) {
        // Write your code here
        StringBuilder ans = new StringBuilder();

        if (s.contains("PM")) {
            int t = Integer.parseInt(s.substring(0, 2));
            if (t != 12) {
                t += 12;
            }
            ans.append(t);
            ans.append(s.substring(2, 8));
        } else {
            int t = Integer.parseInt(s.substring(0, 2));
            if (t == 12) {
                t = 0;
            }
            ans.append("0");
            ans.append(t);
            ans.append(s.substring(2, 8));
        }
        return ans.toString();
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.timeConversion(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}