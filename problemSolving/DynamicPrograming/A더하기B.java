package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class A더하기B {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][2];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < 2; j++) {
                arr[i][j]= sc.nextInt();
            }
        }
        sc.close();
        for (int i = 0; i < n; i++) {
            int ans = arr[i][0] + arr[i][1];
            System.out.println(ans);
        }
    }
}
