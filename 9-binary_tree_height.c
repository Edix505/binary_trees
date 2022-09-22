#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: 0 if the tree is NULL
*
*
*/
void node_height_2(const binary_tree_t *tree, size_t h, size_t *height)
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
			node_height_2(tree->left, h + 1, height);
			node_height_2(tree->right, h + 1, height);
		}
	}
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	node_height_2(tree, 0, &height);
	return (height);
}