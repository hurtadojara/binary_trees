#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling
 * @node: points to the node who wants to know his sibling
 * Return: a pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!(node) || !(node->parent))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
