#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: integer nodes of tree
 * If tree is NULL, your function must return 0
 * A NULL pointer is not a node
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
	{

		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (right && left);
	}
	return (0);
}
