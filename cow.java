public class cow {
public static void main(String[] args) {
    System.out.println(parse("cow", 9));
}

public static char parse(String s, long index) {
    System.out.println(index);
		if(index < s.length()) {
			return s.charAt((int)index);
		}
		long length = s.length();
		while(2*length <= index){
			length *= 2;
    }
		if(length == index) {
			return parse(s, length-1);
		}
		return parse(s, index - length - 1);
	}
}
