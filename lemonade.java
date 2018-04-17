import java.io.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
public class lemonade {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader("lemonade.in"));
		PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("lemonade.out")));
    StringTokenizer st = new StringTokenizer(br.readLine());
    int n =  Integer.parseInt(st.nextToken());
    //int n = 9;
    int[] cows = new int[n];
    int inLine = 0;
    st = new StringTokenizer(br.readLine());
    for(int i =0; i <n; i++){
      cows[i] = Integer.parseInt(st.nextToken());
    }
    Arrays.sort(cows);
    for(int j=n-1; j>=0; j--){
      //System.out.println(inLine);
      if(cows[j]>=inLine){
        inLine ++;
      }
    }
    //System.out.println(inLine);
    pw.println(inLine);
    pw.close();

  }
}
