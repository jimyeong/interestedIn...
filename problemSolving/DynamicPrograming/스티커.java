package day4;

import java.util.Scanner;

public class 스티커 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        while (n-- > 0) {
            int K = sc.nextInt();
            int[][] arr = new int[2][K + 1];
            int[][] dp = new int[2][K + 1];
            for (int i = 0; i < 2; i++) {
                for (int j = 1; j < K + 1; j++) {
                    arr[i][j] = sc.nextInt();
                }
            }
            for (int i = 1; i < K + 1; i++) {
                if(i  < 2){
                    dp[0][i] = arr[0][i];
                    dp[1][i] = arr[1][i];
                }else{
                    int theBeforePrev = Math.max(dp[0][i - 2], dp[1][i - 2]);
                    dp[0][i] = Math.max(dp[1][i - 1] + arr[0][i], theBeforePrev + arr[0][i]);
                    dp[1][i] = Math.max(dp[0][i - 1] + arr[1][i], theBeforePrev + arr[1][i]);
                }
            };
            System.out.println(Math.max(dp[0][K], dp[1][K]));
        }
    }
}
