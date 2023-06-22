#include "monty.h"

/**
 * f_pstr - prints the entire string starting at the top of the stack
 * @head: points to the stack head
 * @counter: line number
 * Return: nothing
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
