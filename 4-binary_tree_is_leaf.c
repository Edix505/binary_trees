#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf
 * Otherwise - returns 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int x = 0;

	if (node != NULL)
	{
		x = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (x);
}
