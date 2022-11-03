​ **APProach-1**
1- Brute force→

*Additional Memory Approach-*If any cell of the matrix has a zero we can record its row and column number. All the cells of this recorded row and column can be marked zero in the next iteration.

**Algorithm**

- We iterate over the original array and look for zero entries.
- If we find that an entry at `[i, j]` is `0`, then we need to record somewhere the row `i` and column `j`.
- So, we use two sets, one for the rows and one for the columns.

```
 if cell[i][j] == 0
 {
     row.insert(i)
     column.insert(j)
 }

```

- We iterate over the array once again, and check each cell.
    - If the row **Or** column is marked, we set the value of the cell as 0.
   
**TIME COMPLEXITY-** O(M*N) where M and N are the number of rows and columns respectively.
**SPACE COMPLEXITY**- O(M+N)
 
 **APProach-2**
 - using the first row and first col as dummy array
 

We handle cases separately.

- Check the first row and column for pre-existing `0`.
    - If found we mark that row or column as true
- Now we work upon the remaining matrix.
    - First we look for the cell that has `0` in it.
    - Then proceed with the working i.e. marking the cell as 0.
- Now work upon the checked first row and column and update their values.
    - Note: Updating before hand gives WA

**TIME COMPLEXITY- O(M*N)**where M and N are the number of rows and columns respectively.

**SPACE COMPLEXITY- O(1)**
