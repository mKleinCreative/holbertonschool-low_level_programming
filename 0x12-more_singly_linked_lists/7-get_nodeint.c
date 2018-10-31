#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - deletes the head node of
 * a linked list and returns the nodes data
 * @head: pointer to the head of the list
 * @index: index address of the node.
 * Return: data of the head of the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	for (count = 0; count <= index; count++)
	{
		if (count == index)
			break;
		temp = temp->next;
	}
	if (count > index)
		return (NULL);
	if (!temp)
		return (0);
	return (temp);
}