// code_report Solution
// https://youtu.be/EbgOk_IDl1I

import java.util.*;
import java.io.*;

public class Main{
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- != 0) {
            int[] l = { 1, 0, 0 };
            int n = sc.nextInt();
            for (int i = 3; i <= n; ++i) {
                int d = i % 26;
                if (d == 3) {
                    l[1] = l[0];
                    l[0] = 0;
                } else if (d == 11) {
                    l[2] = l[1];
                    l[1] = 0;
                } else if (d == 1) {
                    l[0] = l[2] * 2;
                    l[2] = 0;
                }
            }
            
            for (int i = 0; i < 3; ++i) { 
                System.out.print(l[i]);
                System.out.print(' ');
            }
            System.out.println();
        }
     }
}
