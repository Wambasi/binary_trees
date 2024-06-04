#include "binary_trees.h"

bianry_tree_t *bianry_tree_sibling(bianry_tree_t *node)
{
    if (node == NULL)
    {
        return (NULL);
    }

    if (node->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->left == node)
    {
        return (node->parent->right);
    }

    else if (node->parent->right == node)
    {
        return (node->parent->left);
    }

    else
    {
        return (NULL);
    }
}