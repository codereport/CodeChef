// code_report Solution
// https://youtu.be/w6l_tDniL34

import java.util.*;
import java.io.*;

public class Main {
    
    public static String binary_nim (String[] stacks, String first) 
    {
       int a = 0, b = 0;
       for (String stack : stacks) 
       {
          if (stack.charAt (0) == '0') a += stack.chars ().filter (ch -> ch == '0').count ();
          if (stack.charAt (0) == '1') b += stack.chars ().filter (ch -> ch == '1').count ();
       }
    
       if (a == b) return (first.equals ("Dee") ? "Dum" : "Dee");
       else        return (a > b                ? "Dee" : "Dum");
    }
    
     public static void main(String []args)
     {
        Scanner scan = new Scanner (System.in);
        int t = scan.nextInt ();
        
        for (int j = 0; j < t; j++)
        {
            int    n = scan.nextInt ();
            String s = scan.next ();
            
            String[] v = new String[n];
            
            for (int i = 0; i < n; i++) v[i] = scan.next ();
            
            System.out.println (binary_nim (v, s));
        }
     }
}
