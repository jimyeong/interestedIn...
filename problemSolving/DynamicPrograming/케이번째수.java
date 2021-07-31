package day4;

import java.util.Scanner;

public class 케이번째수 {
    // 연산은 20억번 할 수 있다.
    // 근데 입력데이터가 100만개
    // 그냥 포문으로 처리하면

    // 백억번,,
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] var = new int[2];
        for (int i = 0; i < var.length; i++) {
            var[i] = sc.nextInt();
        };
        int N = var[0];

        long[] ans = new long[(int) Math.pow(N+1, N+1)];
        long[][] arr = new long[N+1][N+1];
        for (int i = 1; i < N+1; i++) {
            for (int j = 1; j < N + 1; j++) {
                int idx = (i*N) + j;
                ans[idx] = arr[i][j];
            }
        };





    }
}
