package day4;

import com.sun.tools.jdeprscan.scan.Scan;

import java.util.Scanner;


/**
 * 4
 * 30 20 10 40
 * ans : 70
 */

public class 동전02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n+1];

        for (int i = 1; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();

        int[][] dp = new int[n+1][1001];
        int[] ans = new int[n+1];


        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if(i==1){
                    dp[j][i] = arr[j];
                    // ans[i] = Math.max(ans[i], arr[j]);
                }else if(i >= 2 && j ==1){
                    dp[j][i] = 0;
                }else{
                    int max = 0;
                    for (int k = 1; k < j; k++) {
                        if(dp[k][i-1] == 0){
                            dp[j][i] = 0;
                        }else if(dp[k][i-1] < arr[j]){
                            if(arr[j] + dp[k][i-1] > max){
                                max = arr[j] + dp[k][i-1];
                            }
                        }
                    }
                    dp[j][i] = max;
                    // ans[i] = Math.max(ans[i], max);
                    ans[i] = max;
                }
                 //System.out.println("j: " + j +
                // ", i: " + i +  " = " + dp[j][i]);
            }
        }

        int val = 0;
        for (int i = 1; i < ans.length; i++) {
            if (ans[i] != 0){
                val = ans[i];
            }
        }
        System.out.println(val);
    }
}