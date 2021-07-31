package day4;

import com.sun.tools.jdeprscan.scan.Scan;

import java.util.Scanner;

/**
 * 6
 * 10
 * 20
 * 15
 * 25
 * 10
 * 20
 */

/**
 * 6
 * 1
 * 1
 * 2
 * 2
 * 1
 * 1
 */
public class 계단오르기 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // 입력 배열 받기
        // n<= 300;
        int[] k = new int[300];
        int[] dp = new int[300];
        for (int i = 0; i < n; i++) {
            //k[i] <= 10,000
            k[i] = sc.nextInt();
        }


        dp[0] = k[0];
        dp[1] = Math.max(k[0] + k[1], k[1]);
        dp[2] = Math.max(k[1] + k[2], k[0] + k[2]);


        for (int i = 0; i < n; i++) {

            if (i <= 2) {

            } else {
                // 실수로 + 가 아니라 - 를 해버렸다. 그래서 40분동안 찾았다..
                dp[i] = Math.max(k[i] + k[i - 1] + dp[i - 3], k[i] + dp[i - 2]);

            }
        }
        System.out.println(dp[n - 1]);
    }
}