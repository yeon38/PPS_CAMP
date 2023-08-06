#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> resultVector;
        
        int r = 0;
        for (int i = left; i <= right; ++i)
        {
            bool isValid = true;
            
            int number = i;
            int q = number / 10;
            int remain = number % 10;
            
            while (number != 0 && isValid)
            {                
                remain = number % 10;
                
                if (remain == 0 || i % remain != 0)
                {
                    isValid = false;
                }
                
                number /= 10;
            }
            
            if (isValid)
            {
                resultVector.push_back(i);
            }
        }
        
        return resultVector;
    }
};