#include "dog.h"
#include<stdlib.h>

/**
 * _strlen - gets length of a string
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copy a string
 * @src: pointer to source string
 * @dest: pointer to destination string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int lenN, lenO;

	lenN = _strlen(name);
	lenO = _strlen(owner);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (lenN + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (lenO + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	ndog->age = age;
	_strcpy(ndog->owner, owner);
	return (ndog);
}

