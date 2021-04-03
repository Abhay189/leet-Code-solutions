//
// Created by brows on 4/3/2021.
//

#include "solution.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> num = nums;
        vector<int> result;


        for(int i =0;i<num.size();i++){
            int number = num[i];
            for(int a = i+1;a<num.size();a++){
                int othernum = num[a];
                if(othernum + number == target){
                    result.push_back(i);
                    result.push_back(a);
                    return result;
                }
            }
        }
        return result;
    }
};