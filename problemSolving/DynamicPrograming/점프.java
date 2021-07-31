package day4;

import java.util.Scanner;

// 걍 일찍 끝낼걸
// 어차피 풀지 못하는 걸 알았는데

public class 점프 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();




    }
}
