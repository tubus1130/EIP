import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    public static void main(String[] args) {
        int p = 0;
        for(int i=2; i<100; i++){
            // Math.sqrt(i) = 루트i
            int t = (int)Math.sqrt(i);
            for(int j = 2; j<=t; j++){
                if(i%j == 0){
                    break;
                }
                if(j==t){
                    p = i;
                }
            }
        }
        System.out.println(p);
    }
}
