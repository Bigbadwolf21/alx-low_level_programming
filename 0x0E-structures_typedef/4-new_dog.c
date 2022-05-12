#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - is a function that creates a new dog
 * @name: is a pointer to name
 * @age: is a pointer to age
 * @owner: is a pointer owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0, n = 0, c;
	dog_t *bingo;

	while (name[x] != '\0')
		x++;
	while (owner[n] != '\0')
		n++;

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = malloc(x * sizeof(bingo->name));
	if (bingo->name == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (c = 0; c <= x; c++)
		bingo->name[c] = name[c];
	bingo->age = age;
	bingo->owner = malloc(n * sizeof(bingo->owner));
	if (bingo->owner == NULL)
	{
		free(bingo->owner);
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (c = 0; c <= n; c++)
		bingo->owner[c] = owner[c];
	return (bingo);
}
