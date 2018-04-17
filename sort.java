import java.io.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
public class sort {

  static class Val implements Comparable<Val> {
		public int value, index;
		public Val(int a, int b) {
			value=a;
			index=b;
		}
		public int compareTo(Val val) {
			return value - val.value;
		}
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader("sort.in"));
		PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("sort.out")));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int n =  Integer.parseInt(st.nextToken());

    //int[] values1 = new int[]{1,5,3,8,};
    //int count = 0;
    //int j, temp;
    //int n= 5;
    Val[] values = new Val[n];

    for(int i=0; i<n; i++){
      st = new StringTokenizer(br.readLine());
      values[i] =  new Val(Integer.parseInt(st.nextToken()), i);
      //values[i] =  new Val(values1[i], i);
    }
    int max = 0;
    Arrays.sort(values);
    for(int j=0; j<n; j++){
      if(j<values[j].index){
        max = Math.max(max, values[j].index-j);
      }
    }



    /*boolean sorted = false;
    while (!sorted){
      sorted = true;
      count ++;
      for(j=0; j<n-1; j++){
        if(values[j+1]<values[j]){
            temp = values[j+1];
            values[j+1] = values[j];
            values[j] = temp;
            sorted = false;
        }
      }
    }*/
    //System.out.println(max+1);
    pw.println(max+1);
    pw.close();
  }
}
