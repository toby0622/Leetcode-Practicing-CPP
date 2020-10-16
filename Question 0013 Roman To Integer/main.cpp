class Solution {
public:
    int charValue(char Roman) // A table for exchanging the Roman character to Arabic number
    {
        switch(Roman)
        {
            case 'I' :
                return 1;
            case 'V' :
                return 5;
            case 'X' :
                return 10;
            case 'L' :
                return 50;
            case 'C' :
                return 100;
            case 'D' :
                return 500;
            case 'M' :
                return 1000;

            default :
                return 0;
        }
    }


    int romanToInt(string s)
    {
        int answer = 0; // Initial the answer to the question

        if(s.empty()) // Check if the string is empty
        {
            return 0;
        }

        if(s.size() == 1) // Only one character in the string
        {
            return charValue(s[0]); // Just return the character value
        }

        // The string has more than 'one' character
        // Store the first character of the string
        int temporary = charValue(s[0]);

        // From i = 1 calculate the Roman character value
        for(int i = 1; i < s.size(); ++i)
        {
            // Temporary store the value for later usage
            int value = charValue(s[i]);

            // The exception for the Roman system
            // Check whether a greater Roman character is behind the smaller one or not

            if(value > temporary) // eg. IV = 5 - 1
            {
                answer = answer - temporary;
                temporary = value;
            }

            else // eg. VI = 5 + 1
            {
                answer = answer + temporary;
                temporary = value;
            }
        }

        // Add the value of the charValue(s[0]) which has been exclude first
        answer = answer + temporary;

        return answer; // Return the demanding answer
    }
};