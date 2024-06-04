#include "binary_trees.h"

void binary_tree_preorder(const bianry_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
    {
        return;
    }

    if (func == NULL)
    {
        return;
    }

    func(tree->n);
    binary_tree_preorder(tree->right, func);
}