class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int counter[27]={0};
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            counter[s[i]-'a']++;
            counter[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(counter[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
};