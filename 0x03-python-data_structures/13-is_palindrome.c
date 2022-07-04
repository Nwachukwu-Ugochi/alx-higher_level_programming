#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palidrome
 * @head: pointer to the head node
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/

int is_palindrome(listint_t **head)
{
	unsigned int len = 1;
	listint_t *temp;

	if (head == NULL|| *head == NULL)
		return (1);

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (0);
}
