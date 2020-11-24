#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert in the left node
 * @parent: parent to append value
 * @value: value of node
 * Return: New node
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent)
	{
		if (parent->left)
		{
			n_node = malloc(sizeof(binary_tree_t));
			if (!n_node)
				return (NULL);
			n_node->parent = parent->left->parent;
			n_node->left = parent->left;
			n_node->n = value;
			parent->left->parent = n_node;
			parent->left = n_node;

			return (n_node);
		}
		else
		{
			n_node = malloc(sizeof(binary_tree_t));
			if (!n_node)
				return (NULL);
			n_node->parent = parent;
			n_node->n = value;
			n_node->left = NULL;
			parent->left = n_node;

			return (n_node);
		}
	}

	return (NULL);
}
