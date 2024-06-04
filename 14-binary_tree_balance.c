#include "binary_trees.h"


int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree;
	int right_subtree;

	if (tree == NULL)
	{
		return (0);
	}

	left_subtree = binary_tree_height(tree->left);

	right_subtree = binary_tree_height(tree->right);

	return (left_subtree - right_subtree);
}


size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}