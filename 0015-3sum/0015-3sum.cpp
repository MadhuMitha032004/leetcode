class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;// Initialize the result vector to store triplets
        int n = nums.size(); // Get the size of the input array
        sort(nums.begin(), nums.end());// Sort the array

        for(int i=0; i<n; i++){  // Skip duplicates for the first element
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int j=i+1; // Initialize the second pointer
            int k = n - 1; // Initialize the third pointer

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];

                if(sum<0){
                    j++;
                }

                else if(sum > 0){
                    k--;
                }

                else{ // If the sum is zero, we found a triplet
                    vector<int>temp = {nums[i], nums[j], nums[k]};
                    result.push_back(temp); // Add the triplet to the result
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1])// Skip duplicates for the second element
                    {
                        j++;
                    }

                    while(j<k && nums[k] == nums[k+1])  // Skip duplicates for the third element
                    {
                        k--;
                    }
                }
            }
        }
        return result;       
    }
};