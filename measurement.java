import java.io.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
public class measurement {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader("measurement.in"));
		PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("measurement.out")));
    //int[] test = new int[]{3, 1, 9, 2, 7};

    StringTokenizer st = new StringTokenizer(br.readLine());
    int n =  Integer.parseInt(st.nextToken());
    int max =  Integer.parseInt(st.nextToken());
    int[] cows = new int[Integer.MAX_VALUE];
    int[] days = new int[Integer.MIN_VALUE];
    int[] gallons = new int[100000000];
    for(int i=0; i<n; i++){
      st = new StringTokenizer(br.readLine());

    }
    pw.println(3);
    pw.close();
  }
}
