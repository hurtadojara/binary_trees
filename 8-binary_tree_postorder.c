#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * @tree: root
 * @func: print function
 * Return: void
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
