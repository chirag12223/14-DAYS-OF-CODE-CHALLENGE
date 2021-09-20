class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int sum=0;
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0){
                maxi=max(maxi,sum);
                sum=0;                
            }else{
                maxi=max(maxi,sum);
            }
        }return maxi;
    }
};
