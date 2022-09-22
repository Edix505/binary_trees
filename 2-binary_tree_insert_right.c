#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the,
 * right-child of another node.
 *
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent,
 * is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_f;

	if (parent == NULL)
		return (NULL);

	new_f = binary_tree_node(parent, value);
	if (new_f == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_f->right = parent->right;
		parent->right->parent = new_f;
	}
	parent->right = new_f;
	return (new_f);
}
