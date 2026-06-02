class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long curr_sum=0;
        for(int i=0;i<k;i++){
            curr_sum += nums[i];
        }
        long long max_sum=curr_sum;
        for(int i=k;i<nums.size();i++){
            curr_sum= curr_sum- nums[i-k] + nums[i];
            max_sum=max(max_sum,curr_sum);
        }
        return (double)max_sum/k;
    }
};