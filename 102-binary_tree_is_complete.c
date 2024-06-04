#include "binary_trees.h"

int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *queue[1000];
	int front = 0;
	int rear = 0;
	int not_full_node = 0;

		if (tree == NULL)
		{
			return (0);
		}
	queue[rear++] = tree;
	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];

		if (not_full_node && (current->left || current->right))
		{
			return (0);
		}
		if (current->left == NULL && current->right)
		{
			return (0);
		}
		if (current->left == NULL || current->right == NULL)
		{
			not_full_node = 1;
		}
		if (current->left)
		{
			queue[rear++] = current->left;
		}
		if (current->right)
		{
			queue[rear++] = current->right;
		}
	}
	return (1);
}