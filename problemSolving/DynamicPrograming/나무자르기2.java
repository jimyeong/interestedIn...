package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * 4 7
 * 20 15 10 17
 */

public class 나무자르기2 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String[] tokens = bf.readLine().split(" ");

        int[] vars = new int[2];
        for (int i = 0; i < tokens.length; i++) {
            vars[i] = Integer.parseInt(tokens[i]);
        }

        int[] trees = new int[vars[0]];
        String[] treeTokens = bf.readLine().split(" ");
        for (int i = 0; i < trees.length; i++) {
            trees[i] = Integer.parseInt(treeTokens[i]);
        }
        ;
        bf.close();

        // long cutHight = 5000000000L;
        long start = 0;
        long end = 5000000000L;
        end = 2500000000L;
        end = 1192;
        long cutHight = (start + end) / 2;

        boolean isLack = true;
        long amount = 0;
        long enough = vars[1];
        System.out.println(cutHight);
        while (isLack) {
            // amount 를 계산하는 함수
            System.out.println(cutHight);
            for (int i = 0; i < trees.length; i++) {
                System.out.println(cutHight);
                if (trees[i] - cutHight < 0) {
                    amount += 0;
                } else {
                    amount += trees[i] - cutHight;
                }
                System.out.println("amount = tree[" + i + "]" + "- cutHight: " + amount + "=" + trees[i] + "-" + cutHight);
            }
            // System.out.println("---------------------------------------------------------------------------------------");

            // 계산된 amount 를 판단한다. 나무를 더 크게 자를지, 더 작게 짜를지
            // 얻는 양이 부족하면, 나무를 더 조그만 칼 사이즈로 자른다.
            if (amount >= enough) {

                // cuthight가 올라가면, 얻게되는 양이 줄어든다.
                if (start == end) {
                    // while 종료
                    isLack = false;
                    return;
                }
                start = cutHight;
                cutHight = (start + end) / 2;
            } else {
                // cutHight를 줄인다. -> 더 많이 가져가게 된다.
                end = cutHight;
                cutHight = (start + end) / 2;

                System.out.println("cutHeight: " + cutHight);
                System.out.println("start: " + start);
                System.out.println("end: " + end);
            }
        }
        System.out.println(cutHight);
    }
}
