#include <iostream>
#include<vector>
#include<map>

using namespace std;

class Solution
{
private:
    int top = -1;
    vector<char> stack;

public:
    bool isValid(string s)
    {

        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (IsOpeningBracket(s[i]))
                push(s[i]);
            else
            {   if(isEmpty())
                {
                    return false;
                }

                if (!IsClosingbracketMatched(s[i]))
                {
                    return false;
                }
            }
        }
        if(top==-1)
        {
            return true;
        }
        return false;
    }
    bool IsClosingbracketMatched(char c)
    {
        map<char, char> match = {{')', '('}, {'}', '{'}, {']', '['}};

        // int m = int(stack.size());       //equivalent to top

        if (stack[top] == match[c])
        {
            pop();
            return true;
        }
        return false;
    }
    bool IsOpeningBracket(char c)
    {
        char startwith[] = {'(', '{', '['};
        for (int i = 0; i < 3; i++)
        {
            if (c == startwith[i])
                return true;
        }
        return false;
    }

    void push(char C)
    {
        top += 1;
        stack.push_back(C);
    }
    void pop()
    {
        top -= 1;
        stack.pop_back();
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
};

int main()
{
    Solution obj;
    cout<<obj.isValid("{{}}((()]))");
    return 0;
}