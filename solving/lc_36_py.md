# valid sudoku

```python
class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """

        def valid_row(row_num):
            
            count = [0]*10
            for i in range(len(board[0])):
                if board[row_num][i] == '.' : continue
                val = int(board[row_num][i])
                count[val-1] += 1
                if count[val-1] > 1 : return False
            return True

        def valid_col(col_num):

            count = [0]*10
            for i in range(len(board)):
                if board[i][col_num] == '.' : continue
                val = int(board[i][col_num])
                count[val-1] += 1
                if count[val-1] > 1 : return False
            return True

        def vaild_sub_grid(row, col):
            count = [0]*10
            for i in range(row, row+3):
                for j in range(col, col+3):
                    if board[i][j] == '.' : continue
                    val = int(board[i][j])
                    count[val-1] += 1
                    if count[val-1] > 1 : return False
            return True

        for i in range(len(board)):
            
            if not valid_row(i): return False

            if not valid_col(i): return False

        for i in range(0, len(board), 3):
            for j in range(0, len(board[0]), 3):
                if not vaild_sub_grid(i, j): return False
        
        return True
```
