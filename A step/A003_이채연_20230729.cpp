#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry= 0;
        int size = digits.size()-1;
        while(size>=0 && digits[size]==9)
        {
            digits[size]=0;
            --size;
        }
        //만약 999,9999처럼 끝까지 9만 반복된 경우 뒤에 1을 넣고 반전시켜버립니다. 00001->10000처럼
        if(size==-1)
        {
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        else
            digits[size]++;
        return digits;
    }
};
