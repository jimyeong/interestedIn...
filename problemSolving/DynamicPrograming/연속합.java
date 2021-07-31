package day4;

import java.util.Scanner;


public class 연속합 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N + 1];
        int[] dp = new int[N + 1];
        int max = Integer.MIN_VALUE;


        for (int i = 1; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            dp[i] = Math.max(dp[i-1]+arr[i], arr[i]);
            if (max < dp[i]){
                max = dp[i];
            }
            System.out.println("i 가 " + i +" 일떄: " + dp[i]);

        };
        sc.close();

    }
}
