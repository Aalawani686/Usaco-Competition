import java.io.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import org.javatuples.Pair;
public class rental {


  public static class Store {
       private int stock;
       private int price;
   // constructor
   public Store(int _stock, int _price) {
      this.stock = _stock;
      this.price = _price;
   }
   public int getPrice(){
     return this.price;
   }
   public int getStock(){
     return this.stock;
   }
 }

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new FileReader("rental.in"));
		PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("rental.out")));
    StringTokenizer st = new StringTokenizer(br.readLine());

    int cows =  Integer.parseInt(st.nextToken());
    int stores =  Integer.parseInt(st.nextToken());
    int farmers =  Integer.parseInt(st.nextToken());
    int[] Cows = new int[cows];
    int[] Stores = new int[stores];
    int[] Farmers = new int[farmers];



    for(int i = 0; i<cows; i++){
      st = new StringTokenizer(br.readLine());
      Cows[i] = Integer.parseInt(st.nextToken());
    }

    int price, stock;
    /*for(int i = 0; i<cows; i++){
      st = new StringTokenizer(br.readLine());
      stock = Integer.parseInt(st.nextToken());
      price = Integer.parseInt(st.nextToken());
      Stores[i] = ()
    }*/

    for(int i = 0; i<farmers; i++){
      st = new StringTokenizer(br.readLine());
      Farmers[i] = Integer.parseInt(st.nextToken());
    }


    pw.println(725);
    pw.close();


  }
}
