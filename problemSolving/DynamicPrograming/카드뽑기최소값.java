package day4;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;


// 무조건 스케치 쓰고 시작하자
public class 카드뽑기최소값 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N + 1];
        arr[0] = -1;

        for (int i=1; i<=N; i++) {
            arr[i] = sc.nextInt();
        }

        int[] d = new int[N + 1];
        d[1] = arr[1];
        // 10000이 최대 범위

        if (N == 1) {
            // N이 1일 경우
            System.out.println(d[1]);
        } else {
            //  N이 2 이상일 경우
            for (int p = 2; p < N + 1; p++) {
                int min = d[p - 1] + arr[1];
                for (int q = 1; q <= p; q++) {
                    d[0] = 0;
                    int smallNumber = d[p - q] + arr[q];
                    int qw = p - q;
                    if (min >= smallNumber) {
                        min = smallNumber;
                        d[p] = smallNumber;
                    }
                }
            }
        }

        System.out.println(d[N]);
    }
}

