#include<stdio.h>
/**
 * main - C program to print the size of various types on computer.
 * Return: 0
 */
int main(void)
{
char charType;
int intType;
long int longintType
long long int longlongintType;
float floatType;
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
