// week10-6.cpp 學習計畫 Basic 第8題
// LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        // 全部乘起來的正負號
        int total=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) total *= 1;
            if(nums[i]<0) total *= -1;
            if(nums[i]==0) total *= 0;
        }
        if(total>0) return 1;
        if(total<0) return -1;
        return 0;
    }
};