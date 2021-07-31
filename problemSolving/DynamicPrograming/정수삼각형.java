package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;



// 시간제한 2초
// 삼각형 크기 제한이  1 < x < 500 임
// 삼각형 이루고 있는 정수의 범위는 0 <=  b  <=9999
// 시간제한 2초 -> 2억번의 연산 이내의 결과를 도출해야한다.
// 연산의 횟수는 200,000번정도
// 포문으로 돌렸을 떄도


public class 정수삼각형 {

    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bf.readLine());
        // 0으로 초기화 된다. int 니까
        int[][] map = new int[n][n];
        int[][] dp = new int[n][n];
        for (int i = 0; i < n; i++) {
            String[] str = bf.readLine().split(" ");
            for (int j = 0; j < str.length; j++) {
                map[i][j] = Integer.parseInt(str[j]);
            }
        }
        ;
        dp[0][0] = map[0][0];
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(j==0){
                    dp[i][j] =  dp[i-1][j] + map[i][j];
                }else{
                    dp[i][j] = Math.max(dp[i-1][j-1] + map[i][j], dp[i-1][j] + map[i][j]);
                }
            }
        }

        int max = 0;
        for(int i=0; i < n; i++){
            if(max < dp[n-1][i]){
                max = dp[n-1][i];
            }
        }
        System.out.println(max);
    }
}
