/*For each integer n in the interval[a,b]  (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2 , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	for(i=a;i<=b;i++)
    {
        if (i==1)
            printf("one\n");// Write Your Code Here
        else if(i==2)
            printf("two\n");
        else if(i==3)
            printf("three\n");
        else if(i==4)
            printf("four\n");
        else if(i==5)
            printf("five\n");
        else if(i==6)
            printf("six\n");
        else if(i==7)
            printf("seven\n");
        else if(i==8)
            printf("eight\n");
        else if(i==9)
            printf("nine\n");
        else {
            if(i%2==0)
                printf("even\n");
            else {
                printf("odd\n");
                }
            }// Complete the code.
    }
    return 0;
}

