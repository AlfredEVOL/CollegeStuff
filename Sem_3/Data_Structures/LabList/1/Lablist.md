---
geometry: margin=3cm
header-includes:
    - \usepackage{fvextra}
    - \DefineVerbatimEnvironment{Highlighting}{Verbatim}{breaklines,commandchars=\\\{\}}
---

## 1. Search an element in a two dimensional array

### Algorithm

1. start
2. accept rows and columns
3. accept elements into matrix m
4. accept element e to be searched for in the matrix
5. set i=0,found=false
6. repeat while i < rows
    1. set j=0
    2. repeat while j < columns
        1. if e = m[i][j] , then print found at (i,j) and set flag=true
        2. set j = j + 1
    3. set i = i + 1
7. if found = false, then print not found
8. stop

### Source Code

```c
#include <stdio.h>

int main()
{
    int x, y, flag = 0;
    printf("\n To search an element from 2D array : \n");

    printf("\n Enter n.o rows in array : ");
    scanf("%d", &x);

    printf("\n Enter n.o cols in array : ");
    scanf("%d", &y);

    int arr[x][y], i, j, search;

    for (i = 0; i < x; i++) {
        printf("enter row %d : \n", i + 1);
        for (j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n Enter element to be searched : ");
    scanf("%d", &search);

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (arr[i][j] == search)
            {
                flag = 1;
                printf("\n\n %d Found at position (%d,%d) ", search, i + 1, j + 1);
            }
        }
    }
    if (!flag)
        printf("\n\n Not found ");
    return 0;
}
```
