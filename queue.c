#include "monty.h"

/**
* f_queue - a print the top
* @head: stack head.
* @counter: line_number.
* Return: not return.
*/
void f_queue(stack_t **head, unsigned int counter)
{
		(void)head;
		(void)counter;

		bus.lifi = 1;

}


/**
* addqueue - a program that add node.
* @n: new_value...
* @head: head of stack.
* Return: not return.
*/
void addqueue(stack_t **head, int n)
{
		stack_t *new_node, *aux;

		aux = *head;

		new_node = malloc(sizeof(stack_t));

		if (new_node == NULL)

		{

			printf("Error\n");

		}
		new_node->n = n;
		new_node->next = NULL;
		if (aux)
		{
			while (aux->next)
				aux = aux->next;
		}
		if (!aux)
		{
			*head = new_node;
			new_node->prev = NULL;
		}
		else
		{
			aux->next = new_node;
			new_node->prev = aux;
		}

}
