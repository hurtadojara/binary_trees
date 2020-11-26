#include "binary_trees.h"

/**
 *  binary_tree_height -  returns height of binary tree recursively
 * @tree: root
 * Return: void
 **/


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lroot = 0, Rroot = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		Lroot = binary_tree_height(tree->left) + 1;
	if (tree->right)
		Rroot = binary_tree_height(tree->right) + 1;
	if (Lroot > Rroot)
		return (Lroot);
	return (Rroot);
}
