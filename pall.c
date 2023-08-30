#include "monty.h"
/**
 * f_pall - a fun that prints the stack.
 * @head: the stack head.
 * @counter: the no used.
 * Return: no return.
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