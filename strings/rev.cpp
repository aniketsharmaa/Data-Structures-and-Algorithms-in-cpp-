class Solution
{
public:
    string reverseWords(string s)
    {
        int l, r = 0;
        while (l < s.size())
        {
            while (r < s.size() && s[r] != ' ')
            {
                r++;
            }
            reverse(s.begin() + l, s.end() + r);
            l = r + 1;
            r = l;
        }
        return s;
    }
};