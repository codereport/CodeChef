// code_report Solution
// https://youtu.be/aWBkxc__VDY

import java.util.Scanner;

public class Main {
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int r = sc.nextInt();
        while (n-- != 0) {
            int x = sc.nextInt();
            System.out.println(x < r ? "Bad boi" : "Good boi");
            System.out.flush();
        }
     }
}
