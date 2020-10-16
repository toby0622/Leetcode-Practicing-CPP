class Solution
{
public:
    bool isPalindrome(int x) // The function for verifying palindrome
    {
        if(x < 0) // Negative number will never be a palindrome because of the minus sign
        {
            return false;
        }

        int controlGroup = x; // A control group for the input for checking the palindrome
        long int n = 0; // Use long int to prevent integer overflow

        while(x != 0) // Input x has been verified as a valid number
        {
            n = n * 10 + x % 10; // Exchange the digit of the number
            x = x / 10; // Drop out the number already been exchanged
        }

        if(n == controlGroup) // Palindrome succeed
        {
            return true;
        }

        else // Palindrome failed
        {
            return false;
        }
    }
};