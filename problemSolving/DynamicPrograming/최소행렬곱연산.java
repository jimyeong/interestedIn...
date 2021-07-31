package day4;

import java.util.Scanner;

public class 최소행렬곱연산 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] matrixSize = new int[n+1][3];

        for (int i = 1; i < n+1; i++) {
            for (int j = 1; j < 3; j++) {
                matrixSize[i][j] = sc.nextInt();
            }
        };
        sc.close();
        int[][] dp = new int[n+1][n+1];
        int[][] optPosition = new int[n+1][n+1];
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if(i > j){
                    int min = Integer.MAX_VALUE;
                    int q = -1;
                    for (int k = 1; k < j+1; k++) {
                        // 곱셉연산 -> 행렬 사이즈를 알아야 한다
                        int h = matrixSize[i][1];
                        int w = matrixSize[k][2];
                        int p = matrixSize[j][2];
                        int CALC_NUMBER = h*w*p;
                        int value =dp[i][k] + dp[k+1][j] + CALC_NUMBER;
                        if(min >  value){
                            min = value;
                            q = k;
                        }
                    }
                    dp[i][j] = min;
                    optPosition[i][j] = q;
                }
            }
        }

        int min = Integer.MAX_VALUE;
        int k =0;
        for (int i = 1; i < n + 1; i++) {
            if(dp[i][3]!= 0 && min > dp[i][3]){
                min = dp[i][3];
                k = optPosition[i][3];
            }
        }
        System.out.println("최소값은: " + min);
        System.out.println("그떄의 최적화된 순서 k 는: "  + k);

    }
    
}
