import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {

    public static void main(String[] args) {
        /*
            2차원 배열에서 length
            - arr.length : 행의 개수 출력
            - arr[0].length : 열의 개수 출력
        */
        int arr[][] = new int [2][3];
        System.out.println(arr.length); // 행의개수 출력
        System.out.println(arr[0].length); // 열의개수 출력
        System.out.println("========================");

        System.out.println("5 + 2 = " + 3 + 4);
        System.out.println("5 + 2 = " + 3.1 + 4);
        System.out.println("5 + 2 = " + (3 + 4));
        System.out.println(5 + 2 + " = 3 + 4");
        System.out.println(2+3);

        String a = "kim";
        System.out.println(a);
        Main.print();
    }

    static void print(){
        System.out.println("static method");
    }
}
