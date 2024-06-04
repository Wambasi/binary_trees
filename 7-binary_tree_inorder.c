#include "binary_trees.h"

void binary_tree_inorder(const bianry_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
    {
        return;
    }

    if (func == NULL)
    {
        return;
    }

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}