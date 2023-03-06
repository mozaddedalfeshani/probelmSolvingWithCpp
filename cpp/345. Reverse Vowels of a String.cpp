class Solution
{
public:
    string reverseVowels(string s)
    {
        // variable declaration part

        int last = s.length();
        // starting loop for finding vowel charecter
        for (int i = 0; i < s.length(); i++)
        {
            // writing condition
            // uppercase and lowercase include here
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                // we will stop when first order and last order will same
                if (i >= last)
                {
                    // break syntax
                    // it will stop for loop i
                    break;
                }
                // if first condition true ,then we will start from last order
                //  last order will swap with s[i] value by swap syntax
                for (; last > 0; last--)
                {
                    if (s[last] == 'a' || s[last] == 'e' || s[last] == 'i' || s[last] == 'o' || s[last] == 'u' || s[last] == 'A' || s[last] == 'E' || s[last] == 'I' || s[last] == 'O' || s[last] == 'U')
                    {
                        // swap keword for exchange two string
                        // you can use other option like
                        //  temp using
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