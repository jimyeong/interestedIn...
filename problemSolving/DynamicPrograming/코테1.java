package day4;

import java.lang.reflect.Array;
import java.util.ArrayList;

public class 코테1 {
    public static ArrayList list = new ArrayList();
    public static int[] solution (String code, String day, String[] data){
        ArrayList<Integer> list = new ArrayList<>();
        
        for(int i =0; i < data.length; i++){
            if(code.equals("012345") && data.time=="2019062009"){
                list.add(Integer.parseInt(data[i].price));
            }
        };

        int [] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] =  list.get(i);
        }

        return answer;
    }

    public static void main(String[] args) {
        String[] data = {"price=80 code=987654 time=2019062113","price=90 code=012345 time=2019062014","price=120 code=987654 time=2019062010","price=110 code=012345 time=2019062009","price=95 code=012345 time=2019062111"};

        int[] answer = solution("012345", "20190620", data);
        for (int i = 0; i < answer.length; i++) {
            System.out.println(answer[i]);
        }




    }
}
