#include<stdio.h>


int getNum(); 
int main(void)
{
	printf("Please enter 10 integers, pressing ENTER after each one:\n");
	int value[10]; // declaring exactly 10 value in array //
	int maximum = 0;
	int index = 0;
	int counter = 0;
	while (counter <= 9) // creating a loop for getting input from user and save it in an array //
	{
		int x = getNum();
		value[counter] = x;
		if (maximum < x) // if the input value is grater then maximum then store the value in maximum and store the counter in index //
		{
			maximum = x;
			index = counter;
		}
		counter++;
	}
	printf("The highest value is %d at index %d", maximum, index);

	return 0;
}

#pragma warning(disable: 4996) 
int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}