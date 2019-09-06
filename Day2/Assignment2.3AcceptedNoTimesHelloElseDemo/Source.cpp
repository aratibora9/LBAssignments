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

	//write updater
	if (iNo < 0)
	{
		iNo = -iNo;
	}

	if (iNo < 10 )
	{
		printf("\nHello\n");
	}
	else
	{
		printf("\nDemo\n");
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