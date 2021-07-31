package day4;

import java.util.Scanner;

public class 카드구매하기 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N + 1];
        int[][] T = new int[N + 1][N + 1];
        int dp[] = new int[N + 1];

        for (int i = 1; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        ;
        sc.close();
        for (int i = 1; i < N + 1; i++) {
            int max = 0;
            for (int j = 1; j < i + 1; j++) {
                if (i == 1 && j == 1) {
                    T[1][1] = arr[1];
                } else {
                    T[j][i] = dp[i - j] + arr[j];
                }
                if (T[j][i] > max) {
                    max = T[j][i];
                }
            }
            dp[i] = max;
        }
        System.out.println(dp[N]);
    }
}
