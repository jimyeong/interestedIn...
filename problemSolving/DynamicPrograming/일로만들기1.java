package day4;

import java.util.Scanner;

public class 일로만들기1 {
    public static void main(String[] args) {
        // n의 최대대수는 백만
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] dp = new int[1000001];
        for (int i = 1; i < n+1; i++) {
            if(i < 4){
                dp[1] = 0;
                dp[2] = 1;
                dp[3] = 1;
            }else{
                // 공식으로 뽑아낼 수 없는 경우도 있으니,,
                // 이런경우는 코드로 짧게 처리해줄 수도 있을 것이다.
                if(i % 6 ==0){
                    // 한줄만 추가해주면 되는 데,
                    // 공식으로 만들어내려고, 계속 추상화 하려고 하고 있었나,
                    // 규칙이 없기 떄문에, 실제로 값을 계산해서 넣어줘야 하는데.
                    dp[i] = Math.min(Math.min(1+dp[i/3],1+dp[i-1]), 1+dp[i/2]);
                } else if (i % 3==0){
                    dp[i] = Math.min(1+dp[i/3],1+dp[i-1]);
                }else if(i % 2== 0){
                    dp[i] = Math.min(1+dp[i/2],1+dp[i-1]);
                }else{
                    dp[i] = 1 + dp[i-1];
                }
            }
        }
        System.out.println(dp[n]);
    }
}
