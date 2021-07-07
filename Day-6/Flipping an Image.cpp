#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        if(A.size()==0 || A.empty())
        {
            return A;
        }
        for (int i=0;i<A.size();i++)
        {
           flip(A[i]);
           invert(A[i]);
        }

        return A;
    }
    void flip(vector<int>&nums)
    {
        int i=0;
        int j=nums.size()-1;
        while (i<j)
        {
            swap(nums[i++],nums[j--]);
        }
    }
    void invert(vector<int>&nums)
    {
        for (int i=0;i<nums.size();i++)
        {
            nums[i]=1-nums[i];
        }
    }
};