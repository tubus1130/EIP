import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    int a;
    public Main(int a){
        this.a = a;
    }

    int func(){
        int b = 1;
        for(int i=1; i<a; i++){
            b = a * i + b;
        }
        return a+b;
    }
    
    public static void main(String[] args) {
        Main obj = new Main(3);
        obj.a = 5;
        int b = obj.func();
        System.out.println(obj.a + b);
    }

}
