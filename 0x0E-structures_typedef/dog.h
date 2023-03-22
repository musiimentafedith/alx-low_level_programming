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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
