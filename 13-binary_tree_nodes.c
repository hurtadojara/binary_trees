#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with 1 child or more
 * @tree: pointer to root
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	else
		return (0);
}
