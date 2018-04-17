import java.io.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
public class lifeguardsTest {

  public static class Lifeguard {
       private int start;
       private int end;
   // constructor
   public Lifeguard(int _start, int _end) {
      this.start = _start;
      this.end = _end;
   }
   public int getStart(){
     return this.start;
   }
   public int getEnd(){
     return this.end;
   }
 }

 public static void main(String[] args) throws IOException {
    //BufferedReader br = new BufferedReader(new FileReader("lifeguards.in"));
   //PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("lifeguards.out")));
    //StringTokenizer st = new StringTokenizer(br.readLine());
    //int n =  Integer.parseInt(st.nextToken());
    int n = 2;
    int start, end;
    int[] start1 = new int[]{1, 5};
    int[] end1 = new int[]{9, 7};
    //Lifeguard[] guards = new Lifeguard[n];
    Lifeguard[] guards = new Lifeguard[n];
    int[] times = new int[1000000];
    int k = 0, total = 0;
    int maxTime = 0;
    for(int i=0; i<n; i++){
      //st = new StringTokenizer(br.readLine());
      //start = Integer.parseInt(st.nextToken());
      //end = Integer.parseInt(st.nextToken());
      start = start1[i];
      end = end1[i];
      if (end>maxTime){
        maxTime = end;
      }
      guards[i] = new Lifeguard(start, end);
      for(k = start; k<=end; k++){
        times[k]++;
        //System.out.println(times[k]);
      }
    }
    for(int s = 0; s<=maxTime; s++){
      if(times[s]>0){
        total ++;
      }
    }
    System.out.println(total);
    int m = 0;
    int minimum = 1000000;
    int temp = 0;
    for(int l=0; l<n; l++){
      temp = 0;
      for(m = guards[l].getStart(); m <= guards[l].getEnd(); m++){
        if(times[m]==1){
          temp ++;
          //System.out.println("hi");
        }
      }
      if((minimum-temp)<minimum){
        minimum  = temp;
      }
    }
    System.out.println(total-minimum);
    //pw.println(total - minimum);
    //pw.close();






}
}
