//this is leetcode solution
class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int start = 0;
        int end = s.length() - 1;

        while (start < end)
        {
            if (s[start++] != s[end--])
                return false;
        }

        return true;
    }
};

//normal solution for understant deeply

#include <iostream>
using namespace std;
int main()
{
    int reminder, input, total = 0;
    cin >> input;
    int input2 = input;
    if (input > 0)
    {
        while (input != 0)
        {
            reminder = input % 10;
            total = total * 10 + reminder;
            input /= 10;
        }
        if (total == input2)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}