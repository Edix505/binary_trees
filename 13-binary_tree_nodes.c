#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: pointer to the node to check.
 *
 * Return: If the tree is NULL, must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		n += (tree->left || tree->right) ? 1 : 0;
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
	}
	return (n);
}
