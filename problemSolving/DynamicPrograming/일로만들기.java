package day4;

import java.util.Scanner;

public class 일로만들기 {
    // 입력 N 은  1<= N <= 100
    // 끝수에 따라서 올수있는 수 결정하는 것,
    // 최대값 구하는거, 다이나믹 프로래밍..
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        // 메모이제이션을 위한 이차원배열 생성
        long[][] dp = new long[10][n];
        for (int i = 0; i < 10; i++) {
            if(i==0){
                dp[i][0] = 0;
            }else {
                dp[i][0] = 1;
            }
        };

        // 가로축
        for (int i = 1; i < n; i++) {
            // 세로축
            for (int j = 0; j < 10; j++) {
                if(j == 0){
                   dp[j][i]  = dp[j+1][i-1]%1000000000;
                }else if(j == 9){
                    dp[j][i]  = dp[j-1][i-1]%1000000000;
                }else{
                    dp[j][i] = (dp[j-1][i-1] + dp[j+1][i-1])%1000000000;
                }
            }
        }

        long answer = 0;
        for (int i = 0; i < 10; i++) {
            answer += dp[i][n-1]%1000000000;
        }
        System.out.println(answer%1000000000);
    }
}
