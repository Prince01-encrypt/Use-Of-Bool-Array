class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int length = nums.size();
        bool* arr = new bool[length]{0};
        
        for(int i = 0; i < length; i++) {
            arr[nums[i] - 1] = 1;
        }
        vector<int> ans;
        
        for(int i = 0; i < length; i++) {
            if(arr[i] == 0) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};
