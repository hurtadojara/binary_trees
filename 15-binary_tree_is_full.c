#include "binary_trees.h"
/**
 * binary_tree_is_full - looks for full tree
 * @tree: pointer to root of tree
 * Return: 1 is true or 0 false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
