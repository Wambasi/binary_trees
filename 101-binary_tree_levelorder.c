#include "binary_trees.h"

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *queue[1000];
	int front = 0;
	int rear = 0;

	if (tree == NULL)
	{
		return;
	}
	if (func == NULL)
	{
		return;
	}
	queue[rear++] = tree;
	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];


		func(current->n);

		if (current->left)
			queue[rear++] = current->left;
		if (current->right)
			queue[rear++] = current->right;
	}
}