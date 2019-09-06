//demo.c
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/////////////////////////////
//Name:Divisible
//Input:int
//Output: Boolean
//description:Check wheather no is divisible by 5 or not
//Author: Arati
//Date:04-sep-2019
/////////////////////////////////
BOOL Check(int iNo)
{
	if (((iNo % 5) == 0) && ((iNo / 3) >= 1))
	{
		return TRUE;//return 1
	}
	else
	{
		return FALSE;//return 0
	}
}
//entry point function--main
int main()
{
	int iValue1 = 0;
	BOOL bRet = FALSE;

	printf("Enter Number\n");
	scanf("%d", &iValue1);
	bRet = Check(iValue1);
	if (bRet == TRUE)
	{
		printf("\n No is divisible by 5\n");
	}
	else
	{
		printf("\n No is not divisible by 5\n");
	}
	return 0;
}