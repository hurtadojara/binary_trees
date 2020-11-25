#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert in the right node
 * @parent: parent to append value
 * @value: value of node
 * Return: New node
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);

		n_node = binary_tree_node(parent, value);
		if (!n_node)
			return (NULL);
		if (parent->right)
		{
			parent->right->parent = n_node;
			n_node->right = parent->right;
		}
			parent->right = n_node;
			return (n_node);
}
