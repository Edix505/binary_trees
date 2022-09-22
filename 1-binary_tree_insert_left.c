#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the,
 * left-child of another node.
 *
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent,
 * is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_f;

	if (parent == NULL)
		return (NULL);

	new_f = binary_tree_node(parent, value);
	if (new_f == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_f->left = parent->left;
		parent->left->parent = new_f;
	}
	parent->left = new_f;

	return (new_f);
}
