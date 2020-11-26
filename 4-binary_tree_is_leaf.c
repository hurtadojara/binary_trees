#include "binary_trees.h"
/**
* binary_tree_is_leaf - binary tree is leaf
* @node: - node structure
* Return: New node
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right && node->left)
		return (0);
	if (node->left || node->right != NULL)
		return (0);
	if (node->right || node->left == NULL)
		return (1);
	return (10);
}
