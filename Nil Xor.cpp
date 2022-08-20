
/*

problem link - https://www.codechef.com/submit/NILXOR


problem statement - 

Chef has two non negative integers NN and XX. He now wants to find the number of integers KK such that 0 \le K \lt N0≤K<N, and (N \oplus K) \And X = 0(N⊕K)&X=0.

Note that \oplus⊕ denotes the bitwise XOR operator and \And& denotes the bitwise AND operator.

Help Chef in finding the total required count.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing NN and XX denoting the two integers as described in the statement.
Output Format
For each test case, output the total number of integers KK which satisfy the requirements mentioned.

Constraints
1 \leq T \leq 10^51≤T≤10 
5
 
1 \leq N, X \leq 2^{30} - 11≤N,X≤2 
30
 −1
Subtasks
Subtask 1 (10 points): 1 \leq M \leq 101≤M≤10
Subtask 2 (20 points): The sum of NN across all test cases won't exceed 2020.
Subtask 3 (70 points): No further constraints.


*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	
	ll t;
	std::cin >> t;
	
	while(t--){
	  int n, x;
	  std::cin >> n>>x;
	   ll ans = 0;
	   
	   for(int i = 29 ; i >= 0 ; i--){
	       //int a = x&(1<<i);
	       //std::cout << a << std::endl;
	       if((x&(1<<i)) == 0){
	          
	           ans = ans*2;
	           
	           if((n & (1 << i)) != 0){
	               ans += 1;
	           }
	       }
	   }
	   
	   std::cout << ans << std::endl;
	}
	return 0;
}
