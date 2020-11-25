#include "binary_trees.h"

/**
 *  binary_tree_height -  returns height of binary tree recursively
 * @tree: root
 * Return: void
 **/


size_t binary_tree_height(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        else
        {
                int Lroot = binary_tree_height(tree->left);
                int Rroot = binary_tree_height(tree->right);
                if (Lroot > Rroot)
                        return(Lroot + 1);
                else return (Rroot + 1);
        }
}
