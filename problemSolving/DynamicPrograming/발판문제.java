package day4;


import java.util.Scanner;

/**
 * 1번째 발판에서 발판 밟기를 시작할 경우 총 8개의 발판을 밟고 끝났음을 알 수 있다.
 * 소마가 2번째 발판에서 발판 밟기를 시작했을 경우에는 6개의 발판을 밟고,
 * 3번째 발판에서 발판 밟기를 시작했을 경우에는 7개의 발판을 밟게 된다.
 * 따라서 소마가 1번째 발판에서 발판 밟기를 시작했을 때,
 * 총 8개의 발판을 밟게 되고 이것이 소마가 밟을 수 있는 발판 개수의 최댓값이다.
 */
// 3 5 -1 -2 4 4 3 -2 -3 -2
public class 발판문제 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n+1];

        arr[0] = 0;

        int i;
        for(i=1; i < arr.length; i++){
            arr[i] = sc.nextInt();
        }
        int rotation = 1;
        int start, index, max = 0;
        for(start=1; start <=3; start++){
            int[] q = arr;

            index = start;
            while (q[index] != 0){
                int number = q[index];
                // 한번 방문후에는 삭제
                q[index] = 0;
                index = number + index;
                rotation++;
                System.out.print(rotation + " ");

            }

            System.out.println("시작인덱스가 " + start + "일 떄");
            System.out.println( rotation + "개의 발판을 밟는다.");
            System.out.println(" ");
            if(rotation >= max){
                max = rotation;
            }
        }
        System.out.println(max);
    }
}
