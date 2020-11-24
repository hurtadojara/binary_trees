#include "binary_trees.h"
/**
 * 
 * 
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (!(node->right && node->left) == NULL)
        return (0);
    return (1);
}
