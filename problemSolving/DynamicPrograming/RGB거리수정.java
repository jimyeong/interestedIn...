package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/**
 * 26 40 83
 * 49 60 57
 * 13 89 99
 */
// 모르는 api 나오면 반드시 공식문서에서 확인할 것.
// 간혹 레거시인경우가 있다.

// 집입력은 2 <= N <= 1000 니까
// rgb 입력의 개수는 최대 3000개

// 이중 포문 돌리면 9000 개니까, 연산은 5000만번을 넘지 않는다.
// 제한시간이 0.5초니까 최대 연산횟수가 5천만임.
public class RGB거리수정 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bf.readLine());
        int[][] map = new int[n][3];
        int[][] dp = new int[n][3];


        // 이거 여러번
        // Buffer을 쓸 떄
        // 숫자 입력을 받아서 다차원배열 안에 집어넣어야 할 떄
        // 머릿속에 그림을 그려라
        // 그림이 안그려지면, 손으로 그림을 그려라

        // 코드는, 그림을 옮기는 생각을 가지고 짜라
        // 코드를 짤 떄는 반드시 머릿속에 그림이 있어야 한다.

        for (int i = 0; i < n; i++) {
            String[] st = bf.readLine().split(" ");
            for (int j = 0; j < 3; j++) {
                map[i][j] = Integer.parseInt(st[j]);

            }
        }
        dp[0][0] = map[0][0];
        dp[0][1] = map[0][1];
        dp[0][2] = map[0][2];

        for (int i = 1; i < n; i++) {
            dp[i][0] = Math.min(map[i][0] + dp[i - 1][1], map[i][0] + dp[i - 1][2]);
            dp[i][1] = Math.min(map[i][1] + dp[i - 1][0], map[i][1] + dp[i - 1][2]);
            dp[i][2] = Math.min(map[i][2] + dp[i - 1][0], map[i][2] + dp[i - 1][1]);
        }

        int minValue = Integer.MAX_VALUE;

        for(int i =0; i < 3; i++){
            if(minValue > dp[n-1][i]){
                minValue = dp[n-1][i];
            };
        };
        System.out.println(minValue);
    }
}
