#include "monty.h"
/**
 * number_lenght -  count how many charachter in number
 * @num: number
 * Return: the number lentgh
 */
size_t number_lenght(int num)
{
	int len = 0;

	if (!num)
		return (1);
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
