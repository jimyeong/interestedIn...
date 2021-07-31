package day4;

import java.util.Scanner;

// 30 20 10 40 -> 70

// 10 90 20 80 100 -> 210

// 2 6 3 4

// 100 2 50 60 3 5 6 7 200 -> 312

// 3 10 2 7 11 5 13 8 --> 37

public class 가장큰부분증가수열 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n+1];

        for (int i = 1; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        sc.close();

        int[][] dp = new int[n+1][1001];
        int[] ans = new int[n+1];


        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if(i==1){
                    dp[j][i] = arr[j];
                    ans[i] = Math.max(ans[i], arr[j]);
                }else if(i >= 2 && j ==1){
                    dp[j][i] = 0;
                }else{
                    int max = 0;
                    for (int k = 1; k < j; k++) {
                        if(dp[k][i-1] == 0){
                            dp[j][i] = 0;
                        }else if(arr[k] < arr[j]){
                            if(arr[j] + dp[k][i-1] > max){
                                max = arr[j] + dp[k][i-1];
                            }
                        }
                    }
                    dp[j][i] = max;
                    ans[i] = Math.max(ans[i], max);
                }
            }
        }

        int max = Integer.MIN_VALUE;
        for (int i = 1; i < ans.length; i++) {
            if (max < ans[i]){
                max = ans[i];
            }
        }

        System.out.println(max);
    }
}
