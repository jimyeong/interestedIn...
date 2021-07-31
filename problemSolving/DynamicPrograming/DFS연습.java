package day4;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

/**
 * #include <bits/stdc++.h>
 *
 * using namespace std;
 *
 * vector<int> v[26];
 * int main() {
 *
 * 	// A = 0;
 * 	// B = 1;
 *
 * 	v['A' - 'A'].push_back('E' - 'A');
 * 	v['A' - 'A'].push_back('B' - 'A');
 *
 * 	v['B' - 'A'].push_back('D' - 'A');
 * 	v['B' - 'A'].push_back('C' - 'A');
 *
 * 	v['E' - 'A'].push_back('G' - 'A');
 * 	v['E' - 'A'].push_back('F' - 'A');
 *
 *
 * 	// v[0] = {1, 4}
 *
 * 	stack<int> s;
 * 	s.push(0);
 * 	while (!s.empty()) {
 * 	top -> peek
 * 		int node = s.top();
 * 	    정점 출력
 * 		cout << (char)(node + 'A') << " ";
 * 		s.pop();
 * 		for (int i = 0; i < v[node].size(); i++) {
 * 			s.push(v[node][i]);
 *                }* 	}
 * }
 */

// vetor, queue, c++

public class DFS연습 {
    public static void main(String[] args) {
        Map<String, ArrayList<String>> node = new HashMap<>();
        String[] arr = {"A","B","C","D","E"};








    }
}
