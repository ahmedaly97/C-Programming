#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to check                 ************/         
/*************        odd or even with bitwise            ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	
	/* variables to store the 2 numbers*/
	int x ,y , res;
	
	/*taking the  number from user*/

	printf("x : ");
	scanf("%d",&x);

	(x&1) ? printf("odd "): printf("even"); 

	
	return 0 ; 
}