import java.util.*;

public class cowdance {
	public static void main(String[] args){

		int maxT = 13;
		int[] l = new int[]{3,5,3,7,8};
		int min = 1;
		int max = l.length;
		while(min != max) {
			int mid = (min+max)/2;
			if(possible(l, mid, maxT)) {
				max = mid;
			}
			else {
				min = mid+1;
			}
		}
		System.out.println(min);
	}

	public static boolean possible(int[] l, int k, int t) {
		int lastTime = 0;
		PriorityQueue<Integer> q = new PriorityQueue<Integer>();
		for(int i = 0; i < l.length; i++) {
			if(q.size() == k) {
				lastTime = q.poll();
			}
			if(lastTime + l[i] > t) {
				return false;
			}
			q.add(lastTime + l[i]);
      Object[] a = q.toArray();
      for(int j=0; j<a.length; j++){
        System.out.println(a[j]);
      }
      System.out.println("|||");
		}
		return true;
	}

}
