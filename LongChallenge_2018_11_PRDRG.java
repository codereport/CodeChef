// code_report Solution
// https://youtu.be/xfvvyKms49Y

import java.util.Scanner;

public class Main {
     public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- != 0) {
            int n = sc.nextInt();
            int d = (int) Math.pow(2, n);
            int a[] = new int[25];
            a[0] = d / 2;
            a[1] = d / 4;
            for (int i = 2; i < n; ++i) 
                a[i] = (a[i - 1] + a[i - 2]) / 2;
            System.out.print(Integer.toString(a[n-1]) + ' ' +
                             Integer.toString(d)      + ' ');
        }
    }
}
