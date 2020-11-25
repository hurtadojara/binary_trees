#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
 * 
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t tamano = 0;

    if (!tree)
        return (0);
    
    if (tree->left)
        tamano++;
    if (tree->right)
        tamano++;
    else if (!tree->left && !tree->right)
        tamano++;
    return (tamano);
}