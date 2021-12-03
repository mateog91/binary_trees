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

/**
 * up_times - goes up n times up
 *
 * @node: starting node
 * @n: times to go up
 *
 * Return: pointer of node up times the input node.
 */
binary_tree_t *up_times(binary_tree_t *node, size_t n)
{
	if (node == NULL)
		return (NULL);
	if (n == 0)
		return (node);
	return (up_times(node->parent, n - 1));
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first:  pointer to the first node
 * @second:  pointer to the second node
 *
 * Return:
 * pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t depth_first;
	size_t depth_second;
	binary_tree_t *a_first;
	binary_tree_t *a_second;

	a_first = (binary_tree_t *)first;
	a_second = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	if (depth_first > depth_second)
		a_first = up_times(a_first, depth_first - depth_second);
	else
		a_second = up_times(a_second, depth_second - depth_first);

	while (a_first != a_second)
	{
		a_first = a_first->parent;
		a_second = a_second->parent;
	}
	return (a_first);
}
