import java.util.*;
public class Main {
	
	public static void main(String[] args){
		List list1 = new LinkedList();
		list1.add(3);
		list1.add("1");
		list1.add(1, false);
		list1.remove(0);
		System.out.println(list1.get(0));
		System.out.println(list1.get(1));
		System.out.println(list1);
		System.out.println("=======================");
		
		LinkedList list2 = new LinkedList();
		list2.add(1);
		System.out.println(list2.get(0));
		System.out.println("=======================");
		
		List<Integer> list3 = new LinkedList<Integer>();
		list3.add(100);
		System.out.println(list3.get(0));
		System.out.println("=======================");
		
		LinkedList<String> list4 = new LinkedList<>();
		list4.add("IH");
		System.out.println(list4.get(0));
		System.out.println("=======================");
	}
}
