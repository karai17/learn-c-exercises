#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// **head is a pointer that points to the pointer that points to the first node in the list

typedef struct node {
	uint32_t    value;
	struct node *next;
} node_t;

// Iterate over a list starting from the head
void print_list(node_t *head) {
	node_t *current = head;

	while (current != NULL) {
		printf("%d\n", current->value);
		current = current->next;
	}
}

// Pop a node from the head
int32_t pop(node_t **head) {
	int32_t ret = -1;
	node_t *next = NULL;

	if (*head == NULL) {
		return -1;
	}

	next = (*head)->next;
	ret  = (*head)->value;
	free(*head);
	*head = next;

	return ret;
}

// Removes any node if the value of the node is the same as the value passed in
int32_t remove_by_value(node_t **head, uint32_t value) {
	uint32_t i      = 0;
	node_t *current = *head;
	node_t *prev    = NULL;

	while (current != NULL) {

		if (current->value == value) {

			// Pop off the top of the stack (edgecase)
			if (i == 0) {
				return pop(head);
			}

			// Remove current from the list and free it
			int32_t ret = current->value;
			prev->next = current->next;
			free(current);

			return ret;
		}

		// Advance down the list by one node, keeping a handle on the previous node
		prev    = current;
		current = current->next;
		i+=1;
	}

	return -1;
}

int main() {
	node_t *list = calloc(sizeof(node_t), 1);
	list->value = 1;
	list->next = calloc(sizeof(node_t), 1);
	list->next->value = 2;
	list->next->next = calloc(sizeof(node_t), 1);
	list->next->next->value = 3;
	list->next->next->next = calloc(sizeof(node_t), 1);
	list->next->next->next->value = 4;
	list->next->next->next->next = NULL;

	print_list(list);
	remove_by_value(&list, 3);
	print_list(list);

	return 0;
}
