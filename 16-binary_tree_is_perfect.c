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

/**
 * binary_tree_is_perfect - looks for prefect tree
 * @tree: pointer to root of tree
 * Return: 1 is true or 0 false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lft_lvl = 0, rgt_lvl = 0;
	if (tree == NULL)
		return (0);

	lft_lvl = binary_tree_height(tree->left);
	rgt_lvl = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (lft_lvl == rgt_lvl)
	{
		if ((binary_tree_is_perfect(tree->left) == 1) && binary_tree_is_perfect(tree->right) == 1)
			return (1);
	}
	return (0);
}
