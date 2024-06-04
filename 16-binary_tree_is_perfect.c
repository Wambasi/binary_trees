#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

		if (left_height != right_height)
		{
			return (0);
		}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}

size_t binary_tree_height(const binary_tree_t *tree)
{

	int left = 0;
	int right = 0;


	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left += 1 + binary_tree_height(tree->left);

	}
	if (tree->right)
	{
		right += 1 + binary_tree_height(tree->right);

	}
	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}
}