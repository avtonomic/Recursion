#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct {
    int num;
    char str[10];
} S;

int menu_sorting(int option);
int sum_array_r(int* array, int length);
int sum_array_i(int* array, int length, int result);
int fib_number_r(int number);
int fib_number_i(int a, int b, int number);
void number_to_string(S* q, int a);

#endif