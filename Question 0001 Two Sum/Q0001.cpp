class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Create an integer vector to store answers
        vector<int> answer;
        
        // Go through the list to find the first correct index
        for (int i = 0; i < nums.size() ; ++i)
        {
            // Go through the list to find the second correct index
            for (int j = i + 1 ; j < nums.size() ; ++j)
            {
                // Find out the answer that matches the demand
                if (target == nums[i] + nums[j])
                {
                    // solution.reserve(2);
                    // Asking for memory space

                    // Add the first index of the answer at the end of the vector
                    answer.push_back(i);
                    // Add the second index of the answer at the end of the first one
                    answer.push_back(j);
                    // Return back the answer
                    return answer;
                }
            }
        }
        
        // Check the exception for the question
        // Throw back all of the logical error
        throw logic_error("no solution!");
    }
};
