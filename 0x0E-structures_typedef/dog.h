#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds the dos details
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - new name for struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owners name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
