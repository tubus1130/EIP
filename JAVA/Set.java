import java.util.*;
public class Main {
	
	public static void main(String[] args){
    // HashSet
		Set<Integer> h = new HashSet<>();
		h.add(2);
		System.out.println(h);
		h.add(1);
		System.out.println(h);
		h.add(1);
		System.out.println(h); // 중복값 허용 x
		h.remove(1); // set은 list와 달리 값으로 삭제, list는 인덱스로 삭제
		System.out.println(h);
		System.out.println(h.size());
		System.out.println("============================");
    
    
    // TreeSet
		/*
		 * headSet, tailSet 숫자, 문자비교가능
		 */
		TreeSet<String> set = new TreeSet<>();
		set.add("dog");
		set.add("c");
		set.add("bus");
		System.out.println("50 미만의 값 : " + set.headSet("d"));
		System.out.println("50 이상의 값 : " + set.tailSet("d"));
		System.out.println(set.size());
		
	}
}
