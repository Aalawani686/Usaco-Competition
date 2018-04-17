import java.io.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
public class homework {
	public static void main(String[] args) throws IOException {
		//BufferedReader br = new BufferedReader(new FileReader("homework.in"));
		//PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("homework.out")));
    int[] test = new int[]{1, 3, 1, 9, 2, 7, 8, 8, 8, 8, 8};
    //int n = Integer.parseInt(br.readLine());


    //int[] numbers = new int[n];


    int n = test.length;
    int[] scores = new int[n];
    //ArrayList<Integer> scores=new ArrayList<Integer>(Collections.nCopies(n, 0));

    //ArrayList<Integer> max=new ArrayList<Integer>(Collections.nCopies(n, 0));
    //ArrayList<Integer> numbers=new ArrayList<Integer>();


    //StringTokenizer st = new StringTokenizer(br.readLine());
    int total = 0;
    for(int i=0; i<n; i++){

      //scores[i] =  Integer.parseInt(st.nextToken());
      scores[i] =  test[i];

      //numbers[i] =  Integer.parseInt(st.nextToken());
      //numbers[i] =  test[i];
      total += scores[i];
    }
    //Arrays.sort(numbers);
    //System.out.println(total);

    int instance = 0;
    int[] instances = new int[n];
    int smallest;
    int max1 = 0;
    int k, p;
    int grade;
    for(int j=0; j<n-2; j++){
      grade = total;
      total -= scores[j];
      //numbers = ArrayUtils.removeElement(numbers, scores[j]);
      smallest = 100000;
      for(p =j+1;p<scores.length;p++) {
            if(smallest > scores[p]) {
                smallest = scores[p];
            }
      }
      grade = ((total - smallest)/(scores.length-j-2));
      System.out.println(total + ", " + smallest + ", " + (scores.length-j-2));
      System.out.println(grade);
      if(grade == max1){
        instance++;
        instances[instance] = j+1;
      }
      if(grade>max1){
        max1 = grade;
        instances = new int[n];
        instance = 0;
        instances[instance] = j+1;
      }

      /*if(grade == max1){
        instances++;
      }
      if(grade>max1){
        max1 = grade;
        instances = 1;


      }*/

    }

    for(int q = 0; q<instances.length; q++){
      if(instances[q] == 0) break;
      System.out.println(instances[q]);
      //pw.println(instances[q]);

    }
    //



    //pw.close();

  }
}
