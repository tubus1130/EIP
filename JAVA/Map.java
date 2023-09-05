import java.util.*;
public class Main {
	
	public static void main(String[] args){
		/*
		 * TreeMap은 즉시 정렬하는 특성으로 인해 추가, 삭제 작업이 HashMap보다
		 * 오래걸림.
		 * 정렬,검색 => TreeMap
		 * 그외 => HashMap
		 */
		
		
		// HashMap
		Map<Integer, String> h = new HashMap<>();
		h.put(1, "A");
		System.out.println(h);
		h.put(1, "C"); // 기존값이 변경된다.
		System.out.println(h); 
		h.put(2, "D");
		System.out.println(h);
		// list, set은 [...] 형식으로 출력
		// map은 {1=C, 2=D} 형식으로 출력
		h.remove(1);
		System.out.println(h);
		System.out.println(h.get(2));
		System.out.println("=========================");
		
		// TreeMap
		Map<Integer, String> map = new TreeMap<>();
		map.put(1, "A");
		// hashmap과 동일
	}
}
