#include<stdio.h>
#pragma warning(disable: 4996) 

int getNum();  // creating a prototype for getNum function //
int main(void)
{
	printf("Please enter 10 integers, pressing ENTER after each one:\n");
	int totalnum[10] = {0} ; // declaring exactly 10 value in array //
	int maximum = 0;
	int stater  = 0;
	int counter;
	for (counter = 0 ;counter <= 9 ;counter++) // creating a loop for getting input from user and save it in an array //
	{
		int input = getNum(); // getting input from the user //
		totalnum[counter] = input;
		if (maximum < input) // if the input value is grater then maximum then store the value in maximum and store the counter in index //
		{
			maximum = input;
			stater = counter;
		}
	}
	printf("The highest value is %d at index %d", maximum, stater);

	return 0;
}

int getNum(void)
{
	char record[121] = { 0 }; 
	int number = 0;
	fgets(record, 121, stdin);
	if (sscanf(record, "%d", &number) != 1)
	{
		number = -1;
	}
	return number;
}