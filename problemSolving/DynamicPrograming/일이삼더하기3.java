package day4;

import java.util.Scanner;

public class 일이삼더하기3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int[] arr = new int[k];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        long mod = 1000000009L;
        long[] d = new long[1000001];
        d[0] = 0;
        d[1] = 1;
        d[2] = 2;
        d[3] = 4;
        for (int n = 0; n < arr.length; n++) {
            // arr[n] 정수임,
            if(arr[n] > 3){
                for (int m = 4; m <= arr[n]; m++) {
                    d[m] = d[m-1] + d[m-2] + d[m-3];
                }
            }
            System.out.println(d[arr[n]]%mod);
        }
    }
}