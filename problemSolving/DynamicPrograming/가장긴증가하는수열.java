package day4;


import javax.swing.text.html.HTMLDocument;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class 가장긴증가하는수열 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n+1];
        for (int i = 1; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        };
        sc.close();
        int[][] dp = new int[n+1][n+1];
        int[] total = new int[n+1];

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if(j ==1){
                    dp[j][i] = 0;
                    dp[1][1] = 1;
                }
                if(i==1){
                    dp[j][i] = 1;
                    dp[1][1] = 1;
                }
                if(i >=2){
                    for (int k = 1; k < j; k++) {
                        if(arr[j] > arr[k]){
                            dp[j][i] += dp[k][i-1];
                            total[i] += dp[j][i];
                        }
                    }
                }
            }
        }
        total[1] = n;
        int ans = 0;
        for (int i = 1; i < total.length; i++) {
            if (total[i] != 0)ans = i;
        }
        System.out.println(ans);
    }
}
