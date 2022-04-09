/*Question-

Print the pattern given in the sample output using loops.

Input Format

Number of rows in integer

Constraints

Number of rows should be between 1 to 10, otherwise program should print Outside the range

Output Format

The pattern.

Sample Input 0

4
Sample Output 0

1
2 3
4 5 6
7 8 9 10

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int r,i,j,k=1;
    scanf("%d",&r);
    if(r>0 && r<10)
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",k++);
            }
        printf("\n");
        }
    }
    else
    {
        printf("Outside the range");
    }
    return 0;
}