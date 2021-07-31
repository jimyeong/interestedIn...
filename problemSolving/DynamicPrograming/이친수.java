package day4;

import java.util.Scanner;

public class 이친수 {
    /**
     * 왜 틀렸나고 나오는지 풀어보자 일단 영어 레슨 끝나고
     *
     * @param args
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        long[][] dp = new long[3][n + 1];
        dp[0][1] = 0;
        dp[1][1] = 1;
        dp[2][1] = 1;


        for (int j = 1; j < n + 1; j++) {
            if (j >= 2) {
                dp[0][j] = dp[2][j - 1];
                dp[1][j] = dp[0][j - 1];
                dp[2][j] = dp[0][j] + dp[1][j];
            }
        }
        System.out.println(dp[2][n]);
    }
}
