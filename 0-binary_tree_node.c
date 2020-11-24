#include "binary_trees.h"
/**
 * binary_tree_node - add a and parent
 * @parent: parent node
 * @value: value of node
 * Return: New node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;
	/* if parent if null you should start a new tree */
	if (!parent)
	{
		n_node = malloc(sizeof(binary_tree_t));
		if (!n_node)
			return (NULL);
		n_node->left = NULL;
		n_node->right = NULL;
		n_node->parent = NULL;
		n_node->n = value;
		return (n_node);
	}
	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);
	n_node->left = NULL;
	n_node->right = NULL;
	n_node->parent = parent;
	n_node->n = value;
	return (n_node);
}
