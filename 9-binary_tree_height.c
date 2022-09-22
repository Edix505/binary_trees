#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: no return.
*/
void node_height(const binary_tree_t *tree, size_t h, size_t *height)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (h > *height)
			{
				*height = h;
			}
		}
		else
		{
			node_height(tree->left, h + 1, height);
			node_height(tree->right, h + 1, height);
		}
	}
}

/**
 * binary_tree_height
 * @tree
 *
 * Return
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	node_height(tree, 0, &height);
	return (height);
}
