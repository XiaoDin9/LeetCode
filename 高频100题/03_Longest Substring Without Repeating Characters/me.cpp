int lengthOfLongestSubstring(string s) 
{
    if(s.empty())
        return 0;

    unordered_map<char, int> charStr;         // 用来存储每个字符在字符串s中每个字符的索引值
    charStr.clear();

    int s_len = s.size();
    int max = 0;                // 字串的最大长度
    int chongfuIndex = -1;
    for(int i = 0; i < s_len; ++i){
        char ch = s[i];

       if(charStr.find(ch) != charStr.end() && chongfuIndex < charStr[ch])
            chongfuIndex = charStr[ch];

        int str_len = i - chongfuIndex;
        if(max < str_len)
            max = str_len;

        charStr[ch] = i;
    }

    return max;
}

