package day4;

import sun.security.krb5.internal.SeqNumber;

import java.util.Scanner;

public class BFS탐색 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        while (n-- > 0 ){
            int k = sc.nextInt();
            int[][] arr = new int[2][k+1];
            int[][] dp = new int[2][k+1];
            for (int i = 0; i < 2; i++) {
                for (int j = 1; j < k+1; j++) {
                    arr[i][j] = sc.nextInt();
                    if(j ==1){
                        dp[i][j] = arr[i][j];
                    }
                }
            }
            for (int i = 1; i < k + 1; i++) {

                if (i == 1){
                    dp[0][1] = arr[0][1];
                    dp[1][1] = arr[1][1];
                }else{
                    int prev2 = Math.max(dp[0][i-2], dp[1][i-2]);
                    dp[0][i] = Math.max(arr[0][i] + dp[1][i-1], prev2) ;
                    dp[1][i] = Math.max( arr[1][i] + dp[0][i-1], prev2);
                }
            }

            int ans = Math.max(dp[0][k],dp[1][k]);
            System.out.println(ans);
        }
    }
}
