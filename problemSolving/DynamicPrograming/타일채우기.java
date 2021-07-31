package day4;


import java.util.Scanner;

public class 타일채우기 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[]{3, 2};
        int[][] dp = new int[3][31];

        dp[0][2] = 3;
        dp[1][2] = 0;
        dp[0][4] = 9;
        dp[1][4] = 2;
        dp[0][0] = 1;


        for (int i = 1; i < n + 1; i++) {
            if (i > 4) {
                if (i % 2 == 0) {
                    for (int j = 0; j < 2; j++) {
                        int numberOfStartingCube = arr[j];
                        int cubeCases = i - arr[j];
                        if (cubeCases >= 0) {
                            for (int k = 0; k < 2; k++) {
                                dp[j][i] += numberOfStartingCube * dp[k][cubeCases];
                            }
                        }
                    }
                }
            }
        }
        System.out.println(dp[0][n] + dp[1][n]);
    }
}
