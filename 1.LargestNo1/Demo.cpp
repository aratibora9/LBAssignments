//demo.c
#include<stdio.h>
/////////////////////////////
//Name:Maximum
//Input:int,int
//Output: int
//description:return largest
//Author: Arati
//Date:03-sep-2019
/////////////////////////////////
int maximum(int iNo1, int iNo2)
{
	if (iNo1 > iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
//entry point function--main
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter First Number\n");
	scanf("%d", &iValue1);
	printf("Enter Second Number\n");
	scanf("%d", &iValue2);
	iRet = maximum(iValue1, iValue2);
	printf("MAximum No id = %d\n", iRet);
	return 0;
}