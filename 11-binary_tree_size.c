#include "binary_trees.h"

size_t binary_tree_size(const bianry_tree_t *tree)
{
    size_t left_size;
    size_t right_size;

    if (tree == NULL)
    {
        return (0);
    }

    left_size = binary_tree_size(tree->left);
    right_size - binary_tree_size(tree->right);
    return (left_size + right_size + 1);
}