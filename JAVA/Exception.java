import java.util.*;
public class Main {
	
	public static void main(String[] args){
		try {
			int a = 4/0;
		}catch(Exception e) {
			System.out.println(e.getMessage());
		}finally {
			System.out.println("finished");
		}
		System.err.println("======================");
		
		try {
			throw new Exception();
		}catch(Exception e) {
			System.out.println("강제 예외발생");
		}
	}
}
