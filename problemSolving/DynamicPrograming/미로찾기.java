package day4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.StringTokenizer;

public class 미로찾기 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[][] arr = new int[n][m];

        for (int i = 0; i < n; i++) {
            String row = bf.readLine();
            for (int j = 0; j < m; j++) {
                arr[i][j] = row.charAt(j) - '0';
            }
        }

        int[] dx = {-1, 1, 0, 0 };
        int[] dy = {0, 0, -1, 1 };
        Queue<int[]> q = new LinkedList<>();
        q.add(new int[]{0, 0});
        while (!q.isEmpty()){
            int[] point = q.poll();
            for (int i = 0; i < 4; i++) {
                int nx = point[0] + dx[i];
                int ny = point[1] + dy[i];
                if(0 <= nx && nx < arr.length && 0 <= ny && ny < arr[0].length && arr[nx][ny] == 1){
                    arr[nx][ny] = arr[point[0]][point[1]] + 1;
                    q.add(new int[]{nx, ny});
                }
            }
        }
        System.out.println(arr[arr.length -1][arr[0].length-1]);
    }
}
