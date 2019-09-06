//Source.cpp
#include<stdio.h>
/////////////////////////////
//Name:Accept One Number from User and print that number of * on screen
//Input:int
//Output:Int times *
//description:Accept One Number from User and print that number of * on screen
//Author: Arati
//Date:05-sep-2019
/////////////////////////////////
void display(int iNo)
{
	int iCnt = 0;
	//write updater
	if (iNo < 0)
	{
		iNo = -iNo;
	}

	while (iCnt < iNo)
	{
		printf("*\n");
		iCnt++;
	}
}


//Entry Point function---main
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d", &iValue);

	display(iValue);
	return 0;
}