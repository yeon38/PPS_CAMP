#include <iostream>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
		int parenthCount = 0;

		if (S.length() > 0) {
			for (int i = 0; i < S.length(); ++i) {
				if (S[i] == '(') {
                    if (parenthCount++ == 0) {
                        S.erase(S.begin() + (i--));
                    }
				}
				else {
					if (--parenthCount == 0) {
						S.erase(S.begin() + (i--));
					}
				}
			}
		}
		return S;
	}
};