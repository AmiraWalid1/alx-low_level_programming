#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_t - struct list_t
 * @str: pointer to string
 * @len: length of string
 * @next: pointer to the next list
*/
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /*LISTS_H*/
