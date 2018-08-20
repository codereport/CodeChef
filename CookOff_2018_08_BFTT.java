// code_report Solution
// https://youtu.be/Enbht_Uf1CE

import java.util.*;
import java.io.*;

public class Main {
     public static void main (String []args) {
         Scanner sc = new Scanner (System.in);
         int t = sc.nextInt ();
         while (t-- != 0) {
             int n = sc.nextInt ();
             while (true) {
                n++;
                String s = Integer.toString (n); 
                long   c = s.chars ().filter (ch -> ch =='3').count ();
                if (c < 3) continue;
                System.out.println (n);
                break;
             }
         }
     }
}
