package day4;

import java.util.Scanner;

public class 오르막수 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // 메모리를 잡고
        long[][] dp = new long[10][1001];

        for (int i = 0; i < 10; i++) {
            for (int j = 1; j < n+1; j++) {
                if(j==1){
                    dp[i][j] = 1;
                }else if(i==0){
                    dp[i][j] = 1;
                }else{
                    dp[i][j] = (dp[i-1][j] + dp[i][j-1])%10007;
                }
            }
        }
        long ans = 0;
        for (int i = 0; i < 10; i++) {
            ans += dp[i][n]%10007;
        }
        System.out.println(ans%10007);
    }
}
