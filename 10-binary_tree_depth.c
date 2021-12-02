#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: integer depth of tree
 * If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* Base Case */
	if (tree == NULL || tree->parent == NULL)
		return (0);
	/* Recursive Case */
	return (1 + binary_tree_depth(tree->parent));
}
