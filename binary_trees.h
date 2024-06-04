#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>

struct binary_trees_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s bianry_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const bianry_tree_t *);

binary_tree_t *binary_tree_node(bianry_tree_t *parent, int value);
bianry_tree_t *binary_tree_insert_left(bianry_tree_t *parent, int value);
bianry_tree_t *binary_tree_insert_right(bianry_tree_t *parent, int value);
void binary_tree_delete(bianry_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const *node);
void binary_tree_preorder(const bianry_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const bianry_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const bianry_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const bianry_tree_t *tree);
size_t binary_tree_size(const bianry_tree_t *tree);
size_t binary_tree_leaves(const bianry_tree_t *tree);
size_t binary_tree_nodes(const bianry_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const bianry_tree_t *tree);
int binary_tree_is_perfect(const bianry_tree_t *tree);
binary_tree_t *bianry_tree_sibling(binary_treee_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const bianry_tree_t *first, const binary_tree_t *second);
void binary_tree_levelorder(const bianry_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const bianry_tree_t *tree);
bianry_tree_t *binary_tree_rotate_left(bianry_tree_t *tree);
bianry_tree_t *binary_tree_rotate_right(bianry_tree_t *tree);
int binary_tree_is_bst(const bianry_tree_t *tree);
int is_valid_BST(const bianry_tree_t *node, int *prev);
int is_bst_helper(const bianry_tree_t *tree, const bianry_tree_t *min, const bianry_tree_t *max);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
bst_t *bst_findMin(bst_t *node);
#endif
