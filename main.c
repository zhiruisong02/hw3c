// Author: Song Zhirui zjs5301@psu.edu
// Collaborator: Jack Hillman jsh5719@psu.edu
// Collaborator:  Shrey Hillman sxs6588@psu.edu
// Collaborator: Alexandros Condeelis afc5865@psu.edu
// Section:5

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
  int n = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n", n, digit_sum(n));
}