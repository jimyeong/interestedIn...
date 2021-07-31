package day4;

import java.util.Scanner;
/**
 * 6
 * 6
 * 10
 * 13
 * 9
 * 8
 * 1
 */
//
//
// 2156
    // 연속으로 마시는 경우를 피하기 위해, 케이스를 3가지로 나눔
public class 와인고르기 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[10000];
        int[][] dp = new int[3][10000];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();
        for (int i = 0; i < n; i++) {
            if(i == 0){
                dp[0][0] = 0;
                dp[1][0] = arr[0];
                dp[2][0] = 0;
            }else{
                dp[0][i] = Math.max(dp[0][i-1], Math.max(dp[1][i-1], dp[2][i-1]));
                dp[1][i] = dp[0][i-1] + arr[i];
                dp[2][i] = dp[1][i-1] + arr[i];
            }
        };

        int answer = 0;
        for (int i = 0; i < 3; i++) {
            if(answer  < dp[i][n-1]){
                answer  = dp[i][n-1];
            };
        }
        System.out.println(answer);
    }
}
