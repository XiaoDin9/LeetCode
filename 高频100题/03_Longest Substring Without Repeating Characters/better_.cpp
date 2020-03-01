int lengthOfLongestSubstring(string s) 
{   
    int freq[256] = {0} ;
    int l = 0 ;
    int r = -1 ;        /// 滑动窗口:s[l...r]
    int res = 0 ;       /// 保持最长不含重复子串的长度

    while(l < s.size())
    {
        if(r+1 < s.size() && freq[s[r+1]] == 0)      /// 表示之前没有包含该字符
            freq[s[++r]]++ ;
        else
            freq[s[l++]]-- ;

        res = max(res, r - l + 1) ;
    }

    return res ;
}

