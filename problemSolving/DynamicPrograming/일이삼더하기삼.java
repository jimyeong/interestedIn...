package day4;

import java.util.Scanner;

/*
3
4 7 10
 */

// 제한시간은 1초
// 근데 최대 데이터 입력갯수가 백만이기떄문에,
// 어차피 한번씩 다 연산해도 1초 안쪽이다,

public class 일이삼더하기삼 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n + 1];

        // 연산중 값이 10억을 초과한다.
        // 그래서 long 으로 써야 함
        long[] dp = new long[1000001];
        arr[0] = 0;
        dp[0] = 0;

        for (int i = 1; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        ;
        sc.close();
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        for (int i = 1; i < arr.length; i++) {
            int k = arr[i];
            for (int j = 1; j <= k; j++) {
                if(j >= 4){
                    dp[j] = (dp[j - 3] + dp[j - 2] + dp[j - 1])%1000000009;
                }
            }
        }
        for (int i = 1; i < arr.length; i++) {
            int index = arr[i];
            System.out.println(dp[index]);
        }
    }
}
