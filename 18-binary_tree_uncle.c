#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the node uncle
 * @node: pointer to the node who wants to know his uncle
 * Return: pointer to the node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!(node) || !(node->parent) || !(node->parent->parent))
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
