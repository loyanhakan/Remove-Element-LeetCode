class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sayac = 0;
        int knm = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            sayac++;
            else
            {
                nums[knm]=nums[i];
                knm++;
            }
        }
            return nums.size()-sayac;
    }
};
