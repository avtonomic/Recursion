#include <stdio.h>
#include "function.h"

int sum_array_r(int array[], int length)
{
	if (length == 0) {
		return array[0];
	}

	return array[length] + sum_array_r(array, length - 1);
}

int sum_array_i(int array[], int length, int result)
{
	if (length == 0) {
		return result;
	}

	return sum_array_i(array, length - 1, result + array[length - 1]);
}

int fib_number_r(int number)
{
	if (number == 0 || number == 1) {
		return 1;
	}

	return fib_number_r(number - 1) + fib_number_r(number - 2);
}

int fib_number_i(int a, int b, int number)
{
	if (number == 1) {
		return a;
	}

	return fib_number_i(a + b, a, number - 1);
}

void number_to_string(S* q, int number)
{
	int length = 0, x = number;

	if (q->num == 0) {
		q->str[0] = (q->num + 48);
	} else {
		while (x != 0) {
			x = x / 10;
			length++;
		}
		q->str[length - 1] = ((number % 10) + 48);
		number = number / 10;

		if (number != 0) {
			number_to_string(q, number);
		}
	}
}

int menu_sorting(int option)
{
	printf("Options: \n");
	printf("\t1 - Calculating the sum of array elements\n");
	printf("\t2 - Fibonacci numbers\n");
	printf("\t3 - Converting a number to a string\n");
	printf("\t4 - Exit\n");
	switch(option) {
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		default:
			return 0;
	}
}