//Source.cpp
#include<stdio.h>
/////////////////////////////
//Name:Print 5 to 1
//Input:int,int
//Output:
//description:Print 5 to 1 numbers on screen
//Author: Arati
//Date:04-sep-2019
/////////////////////////////////
void display()
{
	int i = 0;
	i = 5;
	while (i>0)
	{
		printf("%d\n", i);
		i--;
	}
}


//Entry Point function---main
int main()
{
	display();
	return 0;
}