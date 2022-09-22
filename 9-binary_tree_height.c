#include "binary_trees.h"

/**
 * node_height_2 - function that computes the height of a binary tree's node.
 * @tree: pointer to the root node of the tree to measure the height.
 * @n: accumulated height.
 * @height: pointer to the maximum height in the node's tree.
 *
 * Return: no return.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_n a = 0, b = 0;

		a = tree->left ? a + binary_tree_height(tree->left) : 0;
		b = tree->right ? a + binary_tree_height(tree->right) : 0;
		return ((a > b) ? a : b);
	}
	return (0);
}
