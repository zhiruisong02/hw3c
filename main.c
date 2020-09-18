#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n)
{
	if(n<10)
	{
		return n;
	}
	else
	{
		int r=n/10;
		int m=n%10;
		int s=m+digit_sum(r);
		return s;
	}
}

int main (void){
  int result = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d\n.", result, digit_sum(result));
}