//Codeforces - Multiply by 2, divide by 6

/*You are given an integer n. In one move, you can either multiply n by two or divide n by 6 (if it is divisible by 6 without the remainder).

Your task is to find the minimum number of moves needed to obtain 1 from n or determine if it's impossible to do that.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤2⋅104) — the number of test cases. Then t test cases follow.

The only line of the test case contains one integer n (1≤n≤109).

Output
For each test case, print the answer — the minimum number of moves needed to obtain 1 from n if it's possible to do that or -1 if it's impossible to obtain 1 from n. */

/*Example
input
7
1
2
3
12
12345
15116544
387420489

output
0
-1
2
-1
-1
12
36
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt2 = 0, cnt3 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++cnt2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++cnt3;
		}
		if (n == 1 && cnt2 <= cnt3) {
			cout << 2 * cnt3 - cnt2 << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}
