/*Given a five digit integer, print the sum of its digits.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int i,n,sum=0;
    scanf("%d", &n);
    for (i=1;i<=5;i++)
    {
        sum=sum+(n%10);
        n=n/(10);
    }
    printf("%d",sum);//Complete the code to calculate the sum of the five digits on n.
    return 0;
}
