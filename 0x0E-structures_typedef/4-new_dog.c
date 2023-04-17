#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	dog2 = malloc(sizeof(struct dog));
	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(strlen(name) + 1);
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	strcpy(dog2->name, name);
	dog2->age = age;
	dog2->owner = malloc(strlen(owner) + 1);
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	strcpy(dog2->owner, owner);
	return (dog2);
}
