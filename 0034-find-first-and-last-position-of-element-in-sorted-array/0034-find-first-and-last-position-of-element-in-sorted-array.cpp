class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int index1 = -1;
        while(low<=high){
            mid = low + ((high - low)/2);
            if(nums[mid] == target){
                index1 = mid;
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        low = 0;
        high = n-1;
        int index2 = -1;
        while(low<=high){
            mid = low + ((high - low)/2);
            if(nums[mid] == target){
                index2 = mid;
                low = mid+1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        vector<int>ans;
        ans.push_back(index1);
        ans.push_back(index2);
        
        return ans;

        
    }
};