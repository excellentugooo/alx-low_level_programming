#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenght1, lenght2, k;

	lenght1 = _strlen(name);
	lenght2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenght1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (k = 0; k <= lenght1; k++)
		dog->name[k] = name[k];

	dog->owner = malloc(sizeof(char) * (lenght2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (k = 0; k <= lenght2; k++)
		dog->owner[k] = owner[k];

	dog->age = age;

	return (dog);
}


