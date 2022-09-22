#include "binary_trees.h"

/**
 *binary_tree_depth - Measures the depth of a node in a binary tree
 *@tree: Pointer to the node to measure
 *
 * Return
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *new = NULL;

	if (tree != NULL)
	{
		new = tree->parent;
		while (new != NULL)
		{
			depth++;
			new = new->parent;
		}
	}
	return (depth);
}
