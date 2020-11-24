#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert in the_right node
 * @parent: parent to append value
 * @value: value of node
 * Return: New node
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *n_node;

	if (parent)
        {
                if (parent->right)
                {
                        n_node = malloc(sizeof(binary_tree_t));
                        if (!n_node)
                                return (NULL);

                        n_node->parent = parent->right->parent;
                        n_node->right = parent->right;
                        n_node->n = value;
                        parent->right->parent = n_node;
                        parent->right = n_node;
                        return(n_node);
                }
                else
                {
                        n_node = malloc(sizeof(binary_tree_t));
                        if (!n_node)
                                return (NULL);
                        n_node->parent = parent;
                        n_node->n = value;
                        n_node->right = NULL;
                        parent->right = n_node;

                        return (n_node);
                }
        }
        return (NULL);
}