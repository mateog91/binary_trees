#include "binary_trees.h"

/**
 * b_tree_height2 - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: integer height of tree
 * If tree is NULL, your function must return 0
 */
size_t b_tree_height2(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	/* Base Cases: NULL tree or is a leave */
	if (tree == NULL)
		return (0);

	/* Recursive Cases */
	if (tree->left != NULL)
		left = 1 + b_tree_height2(tree->left);
	if (tree->right != NULL)
		right = 1 + b_tree_height2(tree->right);

	/* Comparison to return biggest height*/
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance2 - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: integer balance factor
 * If tree is NULL, return 0
 */
int binary_tree_balance2(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;
	long int bf;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h_left = 1 + b_tree_height2(tree->left);
	if (tree->right != NULL)
		h_right = 1 + b_tree_height2(tree->right);

	bf = h_left - h_right;
	return (bf);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, else 0
 * If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int bf;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	bf = binary_tree_balance2(tree);
	if (bf == 0)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		return (right && left);
	}
	return (0);
}
