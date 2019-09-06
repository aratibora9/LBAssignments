//demo.c
#include<stdio.h>
/////////////////////////////
//Name:Accept No and Print *
//Input:int
//Output: Boolean
//description:Accept one number and print that number of * on screen
//Author: Arati
//Date:04-sep-2019
/////////////////////////////////
void Accept(int iNo)
{
	int iCnt = 0;
	for (iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("*");
	}
}
//entry point function--main
int main()
{
	int iValue1 = 0;
	iValue1 = 5;

	Accept(iValue1);
	return 0;
}