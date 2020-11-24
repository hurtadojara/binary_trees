#include "binary_trees.h"

/**
 * binary_tree_delete - deletes binary tree
 * @tree: - node structure
 * Return: New node
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	free(tree->left);
	free(tree->right);
	free(tree);
}
