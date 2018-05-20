// code_report Solution 
// https://youtu.be/y03Oe5RRVeQ

import java.util.*;
import java.io.*;

public class Main {

     public static void secret_recipe (float x1, float x2, float x3, float v1, float v2)
     {
        float t1 = (x3 - x1) / v1, t2 = (x2 - x3) / v2;
    
        if (t1 < t2)      System.out.println ("Chef");
        else if (t1 > t2) System.out.println ("Kefa");
        else              System.out.println ("Draw");
     }

     public static void main (String []args)
     {
        Scanner scan = new Scanner (System.in);
        
       int t = scan.nextInt ();
       while (t-- != 0)
       {
          float x1 = scan.nextInt ();
          float x2 = scan.nextInt ();
          float x3 = scan.nextInt ();
          float v1 = scan.nextInt ();
          float v2 = scan.nextInt ();

          secret_recipe (x1, x2, x3, v1, v2);
       }
     }
}
