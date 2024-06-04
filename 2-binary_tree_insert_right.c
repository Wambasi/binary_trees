#include "binary_trees.h"

bianry_tree_t *binary_tree_insert_right(bianry_tree_t *parent, int value)
{
    bianry_tree_t *former_right_child = NULL;
    bianry_tree_t *new_right_child = NULL;

    if (parent == NULL)
        return (NULL);


    new_right_child = binary_tree_node(parent, value);
    if (new_right_child == NULL)
        return (NULL);

    if (parent->right != NULL)
            former_right_child = parent->right;
            
    parent->right = new_right_child;
    if (former_right_child)
    {
        new_right_child->right = former_right_child;
        former_right_child->parent = new_right_child;
    }

    return (new_right_child);
}