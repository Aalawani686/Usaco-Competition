import java.util.Scanner;

public class BinString {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int zeros = sc.nextInt();
		int ones = sc.nextInt();
		int switches = sc.nextInt();

		boolean startOnes=false;
		if(switches >= zeros*2){
			startOnes=true;
		}
		for(int i=0; i<switches/2; i++){
			if(startOnes){
				System.out.print("10");
			}
			else{
				System.out.print("01");
			}
			ones--;
			zeros--;
		}

		if(switches%2==0){
			if(!startOnes){
				for(int j=0; j<ones;j++){
					System.out.print("1");
				}
				for(int k=0; k<zeros;k++){
					System.out.print("0");
				}
			}
			else{
				for(int k=0; k<zeros;k++){
					System.out.print("0");
				}
				for(int j=0; j<ones;j++){
					System.out.print("1");
				}
			}
		}
		else{
			if(startOnes){
				for(int j=0; j<ones;j++){
					System.out.print("1");
				}
				for(int k=0; k<zeros;k++){
					System.out.print("0");
				}
			}
			else{
				for(int k=0; k<zeros;k++){
					System.out.print("0");
				}
				for(int j=0; j<ones;j++){
					System.out.print("1");
				}
			}
		}


		System.out.println();
	}

}
