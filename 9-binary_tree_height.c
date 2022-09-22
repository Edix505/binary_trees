#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
*/
void n_height(const binary_tree_t *tree, size_t h, size_t *height)
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
			n_height(tree->left, h + 1, height);
			n_height(tree->right, h + 1, height);
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

	n_height(tree, 0, &height);
	return (height);
}
