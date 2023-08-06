#include <iostream>
using namespace std;

class Solution {
public:
	bool backspaceCompare(string S, string T) {
		bool result = false;
		
		for (int i = 0; i < S.length(); ++i) {
            if (S[i] == '#') {
                if (i > 0) {
                    S.erase(S.begin() + (i-1));
                    --i;
                }
                S.erase(S.begin() + i);
                --i;
            }
        }
		for (int i = 0; i < T.length(); ++i) {
            if (T[i] == '#') {
                if (i > 0) {
                    T.erase(T.begin() + (i-1));
                    --i;
                }
                T.erase(T.begin() + i);
                --i;
            }
        }

		if (S == T) {
			result = true;
		}

		return result;
	}
};