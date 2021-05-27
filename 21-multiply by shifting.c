#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************        Multiply without (*)	   		  ****************/         
/*********************************************************************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	/*variable to store the given number*/
	int num, result;
	
	/*taking the number from the user*/
	printf("\nEnter a number to be multiplied by 9 without using(*)\n");
	scanf("%d",&num);
	
	/*shifting the number 3 times = multiply the number by 8 
	  the remaining multiplication time is done with adding*/
	result =  (num<<3)+num;
	
	/*printing the result */
	printf("result= %d",result);
	
		return 0;
}
