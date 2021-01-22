// https://leetcode.com/problems/find-the-most-competitive-subsequence/
//
// Time Complexity:     O(`nNums`)
// Space Complexity:    O(`nNums`)
//
// References:
//  https://leetcode.com/problems/find-the-most-competitive-subsequence/discuss/952786/JavaC%2B%2BPython-One-Pass-Stack-Solution
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        const int nNums = nums.size();
        
        vector<int> stack;
        
        for(int i = 0; i < nNums; ++i){
            while(!stack.empty() && stack.back() > nums[i] && stack.size() - 1 + nNums - i >= k){
                stack.pop_back();
            }
            
            if(stack.size() < k){
                stack.push_back(nums[i]);
            }
        }
        
        return stack;
    }
};