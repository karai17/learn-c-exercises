#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
    5
   / \
  4   8
 /
3
*/

typedef struct node {
	int32_t     value;
	struct node *left;
	struct node *right;
} node_t;

void insert(node_t *tree, int32_t value) {
	if (tree->value == 0) {

		// insert on current (empty) position
		tree->value = value;
	} else {
		if (value < tree->value) {

			// insert left
			if (tree->left != NULL) {
				insert(tree->left, value);
			} else {
				tree->left = malloc(sizeof(node_t));
				tree->left->value = value;
				tree->left->left  = NULL;
				tree->left->right = NULL;
			}
		} else {
			if (value >= tree->value) {

				// insert right
				if (tree->right != NULL) {
					insert(tree->right,value);
				} else {
					tree->right = malloc(sizeof(node_t));
					tree->right->value = value;
					tree->right->left  = NULL;
					tree->right->right = NULL;
				}
			}
		}
	}
}

// depth-first search
void printDFS(node_t *current) {
	if (current        == NULL) return;
	if (current        != NULL) printf("%d ", current->value);
	if (current->left  != NULL) printDFS(current->left);
	if (current->right != NULL) printDFS(current->right);
}

int main() {
	node_t *list = malloc(sizeof(node_t));
	list->value = 0;
	list->left  = NULL;
	list->right = NULL;

	insert(list, 5);
	insert(list, 8);
	insert(list, 4);
	insert(list, 3);

	printDFS(list);
	printf("\n");

	return 0;
}
