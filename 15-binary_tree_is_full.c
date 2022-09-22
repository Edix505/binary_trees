#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is full. 0 otherwise.
 */

int is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			is_full(tree->left) == 0 ||
			is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full
 * @tree
 *
 * Return: If tree is NULL or is not full - 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree));
}