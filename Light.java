import java.util.Scanner;
import java.util.*;
import java.io.*;

public class Light {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int partitions = sc.nextInt();
		int length = sc.nextInt();
		int[] inputs = new int[partitions];
		for(int l=0; l<partitions; l++){
			inputs[l] = sc.nextInt();
		}

		//int length = 7;
		//int[] inputs = new int[]{3,4};

		int max = 0;
        int[] values = new int[length+1];
        boolean isOn=true;
        int j=0;
        int temp;
        for(int i=1; i<=length; i++){
        	if(isOn){
        		values[i]=values[i-1]+1;
        	}
        	else{
        		values[i]=values[i-1];
        	}
        	if(inputs[j]==i){
        		isOn = !isOn;
        		if(j<inputs.length-1){
        			j++;
        		}
        	}

        }
        j=0;
        for(int k=1; k<=length; k++){
        	/*if(k<inputs[0]){
        		System.out.println(k+((length-k)-(values[length]-values[k])));
        	}
        	else{
        		int after = (k-values[k]) + ((length-k)-(values[length]-values[k]));
        		System.out.println(after);
        	}*/
        	if(inputs[j]==k){
        		if(j<inputs.length-1){
        			j++;
        		}
        		continue;
        	}
        	//System.out.print(k + ": ");
        	//System.out.print(values[k]+((length-k)-(values[length]-values[k])));
        	//System.out.println();
        	temp = values[k]+((length-k)-(values[length]-values[k]));
        	if(max < temp){
        		max = temp;
        	}
        }
        System.out.println(max);
        //System.out.println(values[3]);
        //System.out.println(values[length]);
        //System.out.println((3-values[3]) + ((length-3)-(values[length]-values[3])));


	}

}
