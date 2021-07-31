package day4;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class 삼각형 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // 입력받아서, 입력사이즈에 맞게 배열만들기
        int a[][] = new int[n][n];
        int d[][] = new int[n][n];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<=i; j++){
                a[i][j] = sc.nextInt();
            }
        }
        d[0][0]=a[0][0];
        for(int i = 1; i<n; i++){
            for(int j = 0; j<=i; j++){
                // 최대값 구하기 =  i-1 번째 층까지 최대값 + 현채층에서의 가능한 최대값
                // d[0][0] = 7
                // d[1][0] = d[0][0] +  a[1][0] // 3 +  7 = 10
                // d[1][1] = d[0][1] + a[1][1] // 7 + 8 = 15

                // d[2][0] = d[1][0] + a[2][0] // 3 + 8 = 11
                // d[2][0] = d[1][0] + a[2][0] //  +  8
                // d[2][1] = d[1][1] + a[2][1] // 8 +
                // d[2][2]

                // 나무자르 // RGB 거리 // 정수삼각형
                // 단계별로 높여나갈떄





                // max(왼쪽 대각선,바로 위)
                // d[i][j] = max(d[i-1][j-1],d[i-1][j]) + a[i][j];
            }
        }
        int ans = d[n-1][1];
        for(int i= 1; i<n; i++){
            if(d[n-1][i]>ans)
                ans = d[n-1][i];
        }
        System.out.println(ans);
    }
}
