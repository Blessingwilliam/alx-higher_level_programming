#include "lists.h"


/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    /*Variable to store the number of nodes in the list.*/
    size_t nodes = 0;


    while (h)
    {
        /*Increment the node count.*/
        nodes++;


        /*Print the value of the current node.*/
        printf("%d\n", h->n);


        /*Move to the next node.*/
        h = h->next;
    }


    /*Return the tondex != 0; index--)
     *     {
     *             if (tmp == NULL)
     *                         return (-1);
     *                                 tmp = tmp->next;
     *                                     }
     *
     *                                         /* If the node to delete is the head node. */
        if (tmp == *head)
		    {
			            *head = tmp->next;
				            if (*head != NULL)
						                (*head)->prev = NULL;
					        }
	    /* If the node to delete is not the head node. */
	    else
		        {
				        tmp->prev->next = tmp->next;
					        if (tmp->next != NULL)
							            tmp->next->prev = tmp->prev;
						    }
	    
	        /* Free the memory of the deleted node. */
	        free(tmp);
		    return (1);
}
tal number of nodes in the list.*/
    return (nodes);
}

