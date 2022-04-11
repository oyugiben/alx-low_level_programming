#include <stdio.h>
#include <stdlib.h>

#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - Builds a dog type
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Used to buld a dog type
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif


void init_dog(struct dog *d, char *name, float age, char *owner);
