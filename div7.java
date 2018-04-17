import java.io.*;
import java.util.*;
public class div7 {
	public static void main(String[] args) throws IOException {

		int n = 5;
    int[] set = new int[]{7, 9, 3, 4, 2};
		int[] first = new int[7];
		int[] last = new int[7];
		Arrays.fill(first, Integer.MAX_VALUE);
		first[0] = 0;
		int currPref = 0;

		for(int i = 1; i <= n; i++) {
			currPref += set[i-1];
			currPref %= 7;
			first[currPref] = Math.min(first[currPref], i);
			last[currPref] = i;
      System.out.println(currPref+ ", " + first[currPref] + ", " + last[currPref]);
		}

		int ret = 0;
		for(int i = 0; i < 7; i++) {
			if(first[i] <= n) {
				ret = Math.max(ret, last[i] - first[i]);
        System.out.println(ret);
			}
		}

	}
}
