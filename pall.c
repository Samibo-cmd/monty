#include "monty.h"

/**
 * f_pall - prints all the values from the top of the stack.
 * @head: pointer to stack head
 * @counter: number used
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
