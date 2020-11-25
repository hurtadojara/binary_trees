#include "binary_trees.h"

/**
 * binary_tree_preorder -  goes through a binary tree using pre-order traversal
 * @parent: parent to append value
 * @value: value of node
 * Return: New node
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
        if (!tree)
                return;

        func(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
}