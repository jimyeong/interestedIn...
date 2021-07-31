package day4;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;
import java.util.Stack;

public class 악당 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String st = br.readLine();
        char[] ch = st.toCharArray();
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        Stack<Character> s = new Stack();

        for (char c : ch) {
            // 스택이 비어있는 지 확인
            if (c == '(') {

                if (s.isEmpty()) {
                    s.push(c);
                } else {
                    if(s.peek().equals(c)){
                        s.push(c);
                    }else{
                        s.pop();
                    }
                }
            }
            if (c == ')') {
                // 첫순서가
                // ( 일 떄
                if (s.isEmpty()) {
                    s.push(c);
                } else {
                    if(s.peek().equals(c)){
                        s.push(c);
                    }else{
                        s.pop();
                    }
                }
            }
        }
        if(s.isEmpty()){
            bw.write("YES");
        }else{
            bw.write("NO");
        }
        bw.flush();
    }
}
