package day4;

import java.util.Scanner;

public class 제곱수의합 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] d = new int[n + 1];
        int min = 0;
        int k = 0;

        d[0] = 0;
        for (int p = 1; p < d.length; p++) {
            // 최소항을 찾아서 d[p] 로 만들어 주어야 한다.
            for (int q = 1; q*q <= p; q++) {
                k = 1 + d[q * q];
                // 항의 개수
                if(p ==q*q){
                    k=1;
                }
                if (k < min) {
                    min = k;
                }
            }
            d[p] = min;
        }
    }
}
