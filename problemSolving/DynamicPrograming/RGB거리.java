package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class RGB거리 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        // trim 공백제거 함수
        int n = Integer.parseInt(bf.readLine().trim());
        System.out.println(n);
        int[][] map = new int[n][3];
        int[][] dp = new int[n][3];
        // 넣는다. 뭘 넣냐면, 입력받은 n개의 집을 rgb롤 칠하는 비용
        for(int i=0; i < n; i++){
            StringTokenizer st = new StringTokenizer(bf.readLine(), " ");
            for(int j=0; j < 3; j++){
                map[i][j] = Integer.parseInt(st.nextToken());
                dp[i][j] = map[i][j];
            }
        }
        // n = k 일 떄, k-1 번째의 집이 R,G,B중 어떤집인지 어떻게 알지.
        for(int i=1; i < n; i++){
            for(int j=0; j < 3; j++){
                //  i  j
                // [1][0]
                // [1][1]
                // [1][2]

                // dp[i-1][2] = 마지막집이 파란집일 경우 최소값
                // dp[i-1][1] = 마지막집이 초록일 경우 최소값
                // dp[i-1][0] = 마지막집이 빨간집인 경우 최소값
                dp[i][0] = Math.min(dp[i-1][1] + map[i][0], dp[i-1][2] + map[i][0]); // 마지막집이 초록집 또는 파란집으로 색칠 된 경우 , 빨간집으로 칠하려고 한다.
                dp[i][1] = Math.min(dp[i-1][0] + map[i][1], dp[i-1][2] + map[i][1]); // 마지막집이 빨간집 또는 초록집으로 칠해진 경우 비교,초록집으로 칠하려고 한다.
                dp[i][2] = Math.min(dp[i-1][0] + map[i][2], dp[i-1][1] + map[i][2]); // 파란집으로 칠하려고 하는 경우에서, 전집이 빨강혹은 초록으로 칠해진 경우
            }
        }
        int anw = Integer.MAX_VALUE;
        // 세집중에 가장 최소비용으로 칠한 집을 구한다.
        for (int i=0; i < 3; i++){
            if(dp[n-1][i] < anw){
                anw = dp[n-1][i];
            };
        }
        System.out.println(anw);
    }
}
