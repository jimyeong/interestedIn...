package day4;

public class 고차원배열 {
    public static void main(String[] args) {
        int[][] map = new int[2][2];
        map[0][0] = 1;
        map[0][1] = 2;
        map[1][0] = 3;
        map[1][1] = 4;
        for (int i=0; i < 2; i++){
            for (int j=0; j < 2; j++){
                System.out.println(map[i][j]);
            }
        }
    }
}
