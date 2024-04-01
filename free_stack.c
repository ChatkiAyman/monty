#include "monty.h"
/**
 * free_stack -  frees stack
 * @top: head of double list
 * Return: none
 */
void free_stack(stack_t *top)
{
	stack_t *nv, *nv2;

	nv = top;
	while (nv)
	{
		nv2 = nv->next;
		free(nv);
		nv = nv2;
	}
	datax.top = NULL;
	fclose(datax.mfile);
}
