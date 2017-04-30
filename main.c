#include <stdio.h>
#include "function.h"

int main()
{
	int option = 0, quit = 1, number, result = 0, i;
    int array[5] = {1, 2, 3, 4, 5};
	S q;

	menu_sorting(option);
	scanf("%d", &option);
    while(quit != 0) {
        switch (option) {
            case 1:
                result = sum_array_r(array, 4);
                printf("Result(recursion): %d\n", result);
                result = 0;
                result = sum_array_i(array, 5, result);
                printf("Result(iteration): %d\n\n", result);
                result = 0;
				menu_sorting(option);
				scanf("%d", &option);
                break;
            case 2:
                printf("Input number: ");
                scanf("%d", &number);
                result = fib_number_r(number);
                printf("Result(recursion): %d\n", result);
                result = fib_number_i(1, 1, number);
                printf("Result(iteration): %d\n\n", result);
                result = 0;
           		menu_sorting(option);
				scanf("%d", &option);
                break;
            case 3:
                for (i = 0;i < 10;i++) {
                    q.str[i] = 0;
                }
                printf("Input number: ");
                scanf("%d", &q.num);
                number = q.num;
                number_to_string(&q, number);
                printf("string: %s\n", q.str);
                for (i = 0;i < 10;i++) {
                    q.str[i] = 0;
                }
				menu_sorting(option);
				scanf("%d", &option);
        		break;
            case 4:
                quit = 0;
                break;
            default:
                printf("Wrong option\n\n");
                menu_sorting(option);
                scanf("%d", &option);
                break;
        }  
    }
}