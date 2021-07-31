package day4;


import java.util.Scanner;

public class 동전1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[2];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        int K =arr[1];

        // 동전의 개수
        int N = arr[0];
        int[] coin = new int[N+1];
        for (int i = 1; i < coin.length; i++) {
            coin[i] = sc.nextInt();
        }
        sc.close();
        int[][] dp = new int[N+1][K+1];

        for (int i = 1; i < N+1; i++) {
            // coin = [0, 5 , 2 , 1]
            for (int j = 1; j < K+1; j++) {
                if(j-coin[i] > 0){
                    // 남은 돈을 만드는 방법을 구하기 위해서 저장된 dp 를 참조
                    int index = j-coin[i];
                    for (int k = 1; k <= i; k++) {
                        dp[i][j] += dp[k][index];
                        System.out.println( "i: " + i + "  j:" +  j + "  dp[k][index]:  "+  dp[k][index]);
                    }

                }

                if(j-coin[i] == 0){
                    dp[i][j] = 1;
                }
                if(j-coin[i] < 0){
                    dp[i][j] = 0;
                }
            }
        };
        int answwer  = 0;
        for (int i = 1; i < N+1; i++) {
            answwer += dp[i][K];

        }
        // System.out.println(answwer);

    }
}
