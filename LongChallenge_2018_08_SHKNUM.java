// code_report Solution
// https://youtu.be/yMxoRT381yQ

import java.util.*;
import java.io.*;

public class Main {

     public static void main(String []args)
     {
           TreeSet<Integer> s = new TreeSet<> ();

           for (int i = 0; i <= 30; ++i)
              for (int j = 0; j <= 30; ++j)
                 if (i != j) s.add ((int) (Math.pow (2, i) + Math.pow (2, j)));
                 
            Scanner sc = new Scanner (System.in);
            int     t  = sc.nextInt ();
            
            while (t-- != 0) {
                int N   = sc.nextInt ();
                int ans = 0;
                
                if (N < 3) ans = 3 - N;
                else       ans = Math.min (N - s.floor (N), s.higher (N) - N);
                
                System.out.println (ans);
            }
     }
}
