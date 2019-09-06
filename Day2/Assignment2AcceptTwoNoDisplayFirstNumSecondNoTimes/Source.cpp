//Source.cpp
#include<stdio.h>
/////////////////////////////
//Name:Accept One Number from User and print that number of * on screen
//Input:int,int
//Output:Int times int no
//description:Accept One Number from User and display first number in second number of times
//Author: Arati
//Date:05-sep-2019
/////////////////////////////////
void display(int iNo,int iFrequency)
{
	int iCnt = 0;
	//write updater for First Number
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	//updater for frequency
	if (iFrequency < 0)
	{
		iFrequency = -iFrequency;
	}

	for (iCnt = 1; iCnt <= iFrequency; iCnt++)
	{
		printf("\n%d\n", iNo);
	}

}


//Entry Point function---main
int main()
{
	int iValue = 0;
	int iCount = 0;
	printf("Enter number");
	scanf("%d", &iValue);

	printf("\nEnter Frequency\n");
	scanf("%d", &iCount);
	display(iValue,iCount);
	return 0;
}