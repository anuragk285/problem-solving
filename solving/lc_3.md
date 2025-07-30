# Longest Substring Without repeating Characters

```python
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0; i =0
        d = {}
        while i < len(s) : 
            
            if s[i] in d : 
                if ans < len(d) : ans = len(d)
                i = d[s[i]]
                d.clear()
            else : d[s[i]] = i
            i += 1

        if ans < len(d) : ans = len(d)
        return ans
        
```