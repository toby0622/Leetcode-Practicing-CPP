class Solution 
{
public:
    int reverse(int x) 
    {
        // Initial the answer for later usage
        int answer = 0;
        
        // Value '0' cannot be reversed (already known limitation)
        while (x != 0) 
        {
            // INT_MAX = 2147483647, the max value of int
            // Check if the value of the answer overflows
            if (abs(answer) > INT_MAX / 10) 
            {
                return 0;
            }
            
            // Receive the answer digit by digit (starts from unit to the top digit)
            answer = answer * 10 + x % 10;
            
            // Move to the next decimal of the number x
            x = x / 10;
        }
        
        // Return the demanding answer
        return answer;
    }
};