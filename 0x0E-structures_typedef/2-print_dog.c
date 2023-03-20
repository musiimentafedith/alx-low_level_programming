#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: /(nil/)");
	if (d->owner == NULL)
		printf("owner: /(nil/)");
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
