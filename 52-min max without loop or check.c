#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to print the max and     ************/         
/*************        min withiut check or loop           ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	
	/* variables to store the 2 numbers*/
	int x ,y , min , max;
	
	/*taking the  number from user*/

	printf("x : ");
	scanf("%d",&x);
	
	printf("y : ");
	scanf("%d",&y);
	
	max = ((x+y)+ abs (x-y) )/2 ; 
	
	
	min = ((x+y)- abs (x-y) )/2 ; 

	printf("min = %d\nmax = %d",min, max);
	
	
	return 0 ; 
}