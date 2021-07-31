package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;

/**
 * 4 7
 * 20 15 10 17
 */

/**
 * 6 25
 * 20 15 10 16 41 44
 */
//1,000,000,000,000,000
// 입력의 최댁값이 백만이기 떄문에, 100만번의 입력값에서, 1m 만 필요하다고 하면 최대로 짜르는 연산수는
// 문재는 키가 최대로 큰 나무는 100억이다.
// 1m씩 자른다고 하면, 10^6 * 10^10 = 10^16
// 최대 연산의 결과가 1000 조 10^8 초가 걸리게 된다
// 1억초는 3년 2개월 후가 된다.
// 즉 이렇게 풀수 없는 문제다.


public class 나무자르기 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

        // stream 이 뭐지.. 공부를 좀 해야겠다. 이참에 // 일단 중요한 과제부터 끝내고
        String[] st = bf.readLine().split(" ");
        int[] var = new int[2];
        for (int i = 0; i < var.length; i++) {
            var[i] = Integer.parseInt(st[i]);
        }
        //
        int[] trees = new int[var[0]];

        String[] token = bf.readLine().split(" ");
        for (int i = 0; i < trees.length; i++) {
            trees[i] = Integer.parseInt(token[i]);
        }
        ;
        // 버퍼를 닫는다.
        bf.close();

        int cutterHeight = 1;
        int need = var[1];
        boolean lack = true;

        while (lack) {
            int amount = 0;
            for (int i = 0; i < trees.length; i++) {

                if (trees[i] - cutterHeight >= 0) {
                    // 양수면 잘라서 가져가고
                    amount += trees[i] - cutterHeight;
                } else {
                    // 음수면 못가져간다.
                    amount += 0;
                }
                System.out.println("amount += trees[ " +  i +" ] - cutterHeight= " +  trees[i] +  " - " + cutterHeight  + " = " + amount);
            }
            System.out.println("-----------------------------------------------------------------------------------------------");

            if (amount <= need) {
                lack = false;
            } else {
                cutterHeight++;
            }
        }
        System.out.println(cutterHeight);

        // 숫자를 받아야 하는 데 캐스팅하는 게 싫다.

    }
}
