#include "binary_trees.h"

void binary_tree_delete(bianry_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}