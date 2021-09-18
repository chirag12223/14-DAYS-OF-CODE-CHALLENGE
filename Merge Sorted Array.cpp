class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int A[m+n];
        int k=0;
        int u=0;
        if(n>0){
        for (int i=0;i<m;i++){
            if (nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                int u=0;
                for(int j=1;j<n;j++){
                    if (nums2[u]>nums2[j]){
                        
                        swap(nums2[u],nums2[j]);
                        u=j;
                        
                    }
                }
                    
            }
        }for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        
    }
    }
};
