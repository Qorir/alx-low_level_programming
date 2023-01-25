#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - find length of string
 * @str: string to be measured
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copy the string pointed by src to a buffer pointed by dest
 * @dest: buffer storing the string copy
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\n';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nee struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kim;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	kim = malloc(sizeof(dog_t));
	if (kim == NULL)
		return (NULL);

	kim->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (kim->name == NULL)
	{
		free(kim);
		return (NULL);
	}

	kim->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if (kim->owner == NULL)
	{
		free(kim->name);
		free(kim);
		return (NULL);
	}

	kim->name = _strcopy(kim->name, name);
	kim->age = age;
	kim->owner = _strcopy(kim->owner, owner);

	return (kim);
}
