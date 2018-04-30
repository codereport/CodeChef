// code_report Solution
// 

import java.util.*;
import java.io.*;

public class Main {
    
     public static void main(String []args)
     {
        Scanner scan = new Scanner (System.in);
        int n = scan.nextInt ();
        
        while (n-- != 0)
        {
            int x = scan.nextInt ();
            System.out.println (x % 5 == 0 ? (x % 2 == 0 ? 0 : 1) : -1);
        }
     }
}
