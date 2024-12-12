class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0 ;
        int n = 0 ;
        for(int j = 0 ; j < nums.size() ;j++){
            if(nums[j]==1){
                i++ ;
            }
            if(nums[j]==0){
                if(i>n){
                    n =i ;
                }
                i = 0 ;
            }
        }
        if(i>n){
            n = i ;
        }
        return n ;
    }
};