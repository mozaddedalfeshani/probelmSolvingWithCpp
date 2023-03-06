class Solution
{
public:
    string reverseVowels(string s)
    {
        int last = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                if (i >= last)
                {
                    break;
                }
                for (; last > 0; last--)
                {
                    if (s[last] == 'a' || s[last] == 'e' || s[last] == 'i' || s[last] == 'o' || s[last] == 'u' || s[last] == 'A' || s[last] == 'E' || s[last] == 'I' || s[last] == 'O' || s[last] == 'U')
                    {
                        swap(s[i], s[last]);
                        last--;
                        break;
                    }
                }
            }
        }
        return s;
    }
};