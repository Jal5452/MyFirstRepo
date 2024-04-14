#include<stdio.h>
#pragma warning(disable: 4996) 

int getNum();  // creating a prototype for getNum function //
int main(void)
{
	printf("Please enter 10 integers, pressing ENTER after each one:\n");
	int value[10]; // declaring exactly 10 value in array //
	int maximum = 0;
	int index = 0;
	int counter = 0;
	while (counter <= 9) // creating a loop for getting input from user and save it in an array //
	{
		int input = getNum();
		value[counter] = input;
		if (maximum < input) // if the input value is grater then maximum then store the value in maximum and store the counter in index //
		{
			maximum = input;
			index = counter;
		}
		counter++; // incrementing the counter //
	}
	printf("The highest value is %d at index %d", maximum, index);

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