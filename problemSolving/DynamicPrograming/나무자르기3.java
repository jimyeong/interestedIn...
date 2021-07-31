package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


/**
 * 4 7
 * 20 15 10 17
 */


/**
 * 6 25
 * 20 15 10 16 41 44
 */

/**
 * 1 10
 * 17
 */

/**
 * 1 9
 * 17
 */

/**
 * 20 1000000000
 * 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1000000000
 * 0이 나와야 된다.
 */

/**
 * 6 1
 * 0 2 0 0 0 2
 */
public class 나무자르기3 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String[] token = bf.readLine().split(" ");

        long[] inputs = new long[token.length];
        for (int i = 0; i < token.length; i++) {
            inputs[i] = Integer.parseInt(token[i]);
        }
        ;

        String[] treesToken = bf.readLine().split(" ");
        long[] trees = new long[treesToken.length];
        for (int i = 0; i < treesToken.length; i++) {
            trees[i] = Integer.parseInt(treesToken[i]);
        }
        // bf 종료
        bf.close();
        boolean isLack = true;
        long start = 0;
        long end = 1000000000;
        long cutSize = (start + end) / 2;
        int amount = 0;
        long need = inputs[1];

        while (isLack) {
            if (start == cutSize) {
                isLack = false;
            }
            // 자른 나무들을 다 더한다.
            amount = 0;
            for (int i = 0; i < trees.length; i++) {
                if (trees[i] - cutSize <= 0) {

                } else {
                    amount += trees[i] - cutSize;
                }
            }
            if (amount > need) {
                // 칼 사이즈를 크게 한다.
                start = cutSize;
                cutSize = (start + end) / 2;
            } else if (amount == need) {
                isLack = false;
            } else {
                // 칼 사이즈를 줄인다
                end = cutSize;
                cutSize = (start + end) / 2;
            }
        };
        System.out.println(cutSize);
    }
}
