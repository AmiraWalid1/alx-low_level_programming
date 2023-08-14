#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - get length of string.
 * @str: string
 * 
 * Return: length
*/
int _strlen(char *str)
{
	int len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * _cpystr - copy s2 in s1
 * @s1: first string
 * @s2: second string 
 * 
 * Return: s1 after copy s2 in it
*/
char *_cpystr(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s2[i] != '\0' ; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = s2[i];
	return (s1);
}
/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _cpystr(dog->name, name);
	dog->age = age;
	dog->owner = _cpystr(dog->owner, owner);
	return (dog);
}
