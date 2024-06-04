#include "binary_trees.h"

size_t binary_tree_nodes(const bianry_tree_t *tree)
{
    size_t left_node;
    size_t right_node;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left != NULL || tree->right != NULL)
    {
        left_node = binary_tree_nodes(tree->left);
        right_node = binary_tree_nodes(tree->right);
        return *(left_node + right_node +1);
    }
    else
    {
        return (0);
    }
}