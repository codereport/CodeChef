// code_report Solution
// https://youtu.be/GMY0D60TPWE

import java.util.*;
import java.io.*;

public class Main{

     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- != 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int k = sc.nextInt();
            String ans = (a + b) % (2 * k) < k ? "CHEF" : "COOK";
            System.out.println(ans);
        }
     }
}
