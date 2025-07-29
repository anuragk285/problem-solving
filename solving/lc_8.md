# string to integer (atoi)

```python
class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        max = (2**31) - 1
        min = -(2**31)
        ans = 0
        negetive = False
        start = False

        for c in s :
            if c == ' ' and not start:
                continue
            if (c == '-' or c == '+') and not start: 
                if c == '-':
                    negetive = True 
                start = True
            elif '0' <= c and c <= '9':
                start = True
                ans = ans*10 + int(c)
                if ans > max or ans > -min:
                    if negetive : return min
                    else : return max
            else : break
        
        if negetive : ans = -ans
        return ans


        
```
