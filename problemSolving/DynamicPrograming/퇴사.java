package day4;

import java.util.Scanner;

/**
 * 3 10
 * 5 20
 * 1 10
 * 1 20
 * 2 15
 * 4 40
 * 2 200
 */

public class 퇴사 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n+1][2];
        int[] dp = new int[n+1];

        // 입력을 받는다.
        for (int i = 1; i < n+1; i++) {
            for (int j = 0; j < 2; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int max = 0;
        for (int i = 1; i < n+1; i++) {
            // i-1 일 까지의 최대값 구하기
            for (int j = 1; j < i; j++) {
                if(max < dp[j]){
                    max = dp[j];
                }
            }


            // 퇴사일이 n+1 보다 작을 경우에만 연산을 할 것
            // 현재 상담에 소요되는 시간  + i 지난일, 시작일, 끝일 포함이라서 -1 을 뺀다.
            int index = arr[i][0] + i -1;
            if(index < n+1){
                // k는 일 까지 일해서 벌수 있는 돈중에 최대값을 넣어준다.
                // dp[k]
                dp[index] = Math.max(arr[i][1] + max, dp[index]);
            }
        }
        int ans = 0;
        for (int i = 1; i < dp.length; i++) {
            if(ans < dp[i]){
                ans = dp[i];
            };
        }
        System.out.println(ans);
    }
}
