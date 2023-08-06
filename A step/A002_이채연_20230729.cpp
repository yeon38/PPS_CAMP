#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        if(rowIndex == 0){
            ans.push_back(1);
            return ans;
        } 
        ans.push_back(1);
        int start = 1, end = rowIndex;
        long long Calc = 1;
        for(int i=1;i<rowIndex;++i){
            Calc *= end;
            Calc /= start;
            end--;
            start++;
            ans.push_back(Calc);
        }
        ans.push_back(1);
        return ans;
    }
};