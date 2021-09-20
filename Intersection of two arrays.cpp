class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>A;
        unordered_map<int,int>s;
        for(int i=0;i<nums1.size();i++){
            if(s.find(nums1[i])==s.end()){
                s[nums1[i]]=1;
            }else{
                s[nums1[i]]+=1;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end() && s[nums2[i]]!=0){
                s[nums2[i]]-=1;
                A.push_back(nums2[i]);
            }
        }return A;
    }
};
