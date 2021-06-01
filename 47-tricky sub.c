#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to subtract              ************/         
/*************    2 numbers without minus sign            ************/ 
/*********************************************************************/
/*********************************************************************/





int main ()
{
	
	/* variables to store the 2 numbers*/
	int x , y  ;
	int x , y  ;
	
	/*taking the two numbers from user*/
	printf("enter the two numbers\n");
	printf("x : ");
	scanf("%d",&x);
	printf("y:  ");
	scanf("%d",&y);
	
	/*  The bitwise complement of number ~y=-(y+1) */
	
	printf("sub= %d", x + (~y)+1);
	
	
	
	
	
	return 0 ; 
	
}