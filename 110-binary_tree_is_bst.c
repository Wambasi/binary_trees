#include "binary_trees.h"
#include <limits.h>

 */
int is_valid_BST(const binary_tree_t *node, int *prev)
{
	if (node == NULL)
		return (1);

	if (!is_valid_BST(node->left, prev))
		return (0);

	if (*prev >= node->n)
		return (0);

	*prev = node->n;

	return (is_valid_BST(node->right, prev));
}

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev = INT_MIN;

	if (tree == NULL)
		return (0);


	return (is_valid_BST(tree, &prev));
}