# ZigZag conversion

```java
class Solution {
    public String convert(String s, int numRows) {
        int n = s.length();
        if(numRows==1 || s.length() <= numRows) return s;
        int cols = 0;
        while(n > 0){
            cols++;
            n -= numRows;
            if(n >= numRows-2){
                cols += numRows-2;
                n -= numRows-2;
            }else if(n>0){
                cols += n;
                n = 0;
            }
        }
        //System.out.println(cols);
        char[][] arr = new char[numRows][cols];
        for(int i=0; i<numRows; i++) for(int j=0; j<cols; j++) arr[i][j] = '-';
        int i=0, j=0, index = 0;
        String ans = "";
        while(index < s.length() && j<cols){
            if(i == 0) while(i<numRows && index<s.length()) arr[i++][j] = s.charAt(index++);
            if(i == numRows){
                i-=2;
                j++;
                while(i > 0 && index < s.length() && j<cols) arr[i--][j++] = s.charAt(index++);
            }
        }
        //for(i=0; i<numRows; i++) System.out.println(arr[i]);
        for(i=0; i<numRows; i++) for(j=0; j<cols; j++) ans = arr[i][j] == '-' ? ans : ans+arr[i][j];
        return ans;
    }
}
```
