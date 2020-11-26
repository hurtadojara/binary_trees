#include "binary_trees.h"
/**
 * binary_tree_balance - balance factor
 * @tree: pointer to root
 * Return: 0 if tree is NULL, otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
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
		/* compute the depth of each subtree */
			int lDepth = binary_tree_height(tree->left);
			int rDepth = binary_tree_height(tree->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return (lDepth + 1);
		return (rDepth + 1);
	}
}
