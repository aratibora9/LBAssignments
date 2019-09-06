//Source.cpp
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
/////////////////////////////
//Name:Accept One Number from User and Check wheather number is even or odd.
//Input:in
//Output:BOOL i.e. int Even or ODD
//description:Accept One Number from User and Check wheather number is even or odd.
//Author: Arati
//Date:05-sep-2019
/////////////////////////////////
BOOL ChkEven(int iNo)
{
	//updater to convert negative to positive
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if ((iNo % 2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

//Entry Point function---main
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("\nEnter Number\n");
	scanf("%d", &iValue);

	bRet=ChkEven(iValue);
	if (bRet == 1)
	{
		printf("\n Given No is Even No\n");
	}
	else
	{
		printf("\n Given no is ODD No\n");
	}
	return 0;
}