import java.util.Scanner;
import java.lang.Math;


public class Coins {

	public static void main(String[] args) {
		int i,j,k,l,q,num,left,start;
		Scanner sc = new Scanner(System.in);
		int coin = sc.nextInt();
		int querie = sc.nextInt();

		int[] coins = new int[32];

		int[] queries = new int[querie];

		for(i=0; i<coin; i++){
			coins[(int) (Math.log(sc.nextInt())/Math.log(2))]++;
		}

		for(k=0; k<queries.length; k++){
			num = 0;
			left = sc.nextInt();
			start=coins.length-1;
			while(start>-2){
				if(left==0){
					System.out.println(num);
					break;
				}
				if(start==-1){
					break;
				}
				if(coins[start]==0){
					start--;

					continue;
				}
				//System.out.println(start);
				if(Math.pow(2,start)>left){
					start--;
					continue;
				}
				if(left/Math.pow(2,start)>coins[start]){
					num += coins[start];
					left -= coins[start]*Math.pow(2,start);
				}
				else{
					num += left/Math.pow(2,start);
					left = (int) (left - Math.pow(2,start)*(int) (left/Math.pow(2,start)));
				}
				start--;
			}

			if(left!=0){
				System.out.println(-1);
			}
		}
		sc.close();

	}

}
