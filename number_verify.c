#include "monty.h"
/**
 * number_verify -  verify is number for push opcode
 * is valid or not
 * @token: token string
 * Return: none
 */
void number_verify(char *token)
{
	int i = 0;

	if (atoi(token) < 0)
		i++;
	if ((isdigit(token[i]) && strlen(token) == num_len(atoi(token))) ||
			(token[0] == '-' && isdigit(token[1])))
		datax.push_value = atoi(token);
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", datax.line_num);
		free_stack(datax.top);
		exit(EXIT_FAILURE);
	}
}
