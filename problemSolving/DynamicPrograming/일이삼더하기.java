package day4;

import java.util.Scanner;

public class 일이삼더하기 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // 제일 큰 수를 뽑아서, 그 수 하나에만 이 로직을 수행한다.
        int[] arr = new int[n];
        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > max){
                max = arr[i];
            }
        }

        long[][] dp = new long[4][max + 1];

        dp[1][1] = 1;
        dp[2][1] = 0;
        dp[3][1] = 0;

        dp[1][2] = 0;
        dp[2][2] = 1;
        dp[3][2] = 0;

        dp[1][3] = 1;
        dp[2][3] = 1;
        dp[3][3] = 1;

        for (int i = 1; i < max+1; i++) {
            if (i >= 4) {
                dp[1][i] = (dp[2][i - 1] + dp[3][i - 1]) % 1000000009;
                dp[2][i] = (dp[1][i - 2] + dp[3][i - 2]) % 1000000009;
                dp[3][i] = (dp[1][i - 3] + dp[2][i - 3]) % 1000000009;
            }
        }

        for (int i = 0; i < arr.length; i++) {
            int k = arr[i];
            System.out.println((dp[1][k] + dp[2][k] + dp[3][k]) % 1000000009);
        }

    }
}
