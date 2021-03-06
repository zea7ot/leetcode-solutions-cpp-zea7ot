// https://leetcode.com/problems/remove-palindromic-subsequences/
//
// Time Complexity:     O(`kLen`)
// Space Complexity:    O(`kLen`)
//
// Reference:
//  https://leetcode.com/problems/remove-palindromic-subsequences/discuss/490303/JavaC%2B%2BPython-Maximum-2-Operations
#include <string>

using namespace std;

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        // not used
        // const int kLen = s.size();

        return 2 - (s == string(s.rbegin(), s.rend())) - s.empty();
    }
};