package day4;

import java.util.Stack;

// ["D 2","C","U 3","C","D 4","C","U 2","Z","Z"]
// ["D 2","C","U 3","C","D 4","C","U 2","Z","Z","U 1","C"]

//OOOOXOOO //["D 2", "C", "U 3", "C", "D 4", "C", "U 2", "Z", "Z"]
//OOXOXOOO //["D 2", "C", "U 3", "C", "D 4", "C", "U 2", "Z", "Z", "U 1", "C"]
public class 카카오에디터 {
    public static void main(String[] args) {
        String[] cmd = {"D 2", "C", "U 3", "C", "D 4", "C", "U 2", "Z", "Z", "U 1", "C"};
        solution(8 ,2 , cmd);

    }
    static public String solution(int n, int k, String[] cmd){

        String answer = "";
        Stack<Integer> s = new Stack<Integer>();
        int[] table = new int[n];
        for(int i =0; i < table.length; i ++ ){
            // 초기화
            table[i] = 1;
        }
        // 초기 커서위치
        int cursor = k;
        int a = 0;
        while (cmd.length > a){
            // 명령어를 추출한다.
            String[] token = cmd[a].split(" ");

            if(token[0].equals("D")){
                int move = Integer.parseInt(token[1]);
                while (move > 0){
                    cursor++;
                    move--;
                    if(table[cursor] == 0){
                        cursor++;
                    }
                    System.out.println("cursor: " + cursor+ ", move: " + move);
                }
            }else if(token[0].equals("U")){
                int move = Integer.parseInt(token[1]);
                while (move > 0){
                    cursor--;
                    move--;
                    if(table[cursor] == 0){
                        cursor--;
                    }
                    System.out.println("cursor: " + cursor+ ", move: " + move);

                }
            }else if(token[0].equals("Z")){
                table[s.peek()] = 1;
                s.pop();
            }else{
                // C가 나오는 경우

                // 커서가 마지막행인 경우
                boolean isLast = true;
                for(int i = cursor+1; i < table.length; i++){
                    if(table[i] == 0){
                        isLast = false;
                    }
                }
                if(isLast){
                    // 마지막인 경

                    // System.out.println(cursor);

                    table[cursor] = 0;
                    s.push(cursor);
                    cursor = cursor - 1;
                    while (table[cursor] == 0){
                        cursor = cursor -1;
                    }
                }else{
                    // 아닌경우
                    System.out.println("cursor: " +  cursor);

                    table[cursor] = 0;
                    s.push(cursor);
                    cursor++;
                    while (table[cursor] == 0){
                        cursor++;
                    }
                }
            }
            a++;
        }
        StringBuilder str = new StringBuilder("");
        for(int i=0; i < table.length; i++){
            if(table[i] == 1){
                str.append("O");
            }else{
                str.append("X");
            }
        }
        answer = str.toString();
        System.out.println(answer);
        return answer;
    }
}
