//Optimal Solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        // int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);

            }    
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }

        int noofzeros = temp.size();
        for(int i=noofzeros;i<n;i++){
            nums[i]=0;
        }

    }
};