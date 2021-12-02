#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Description:
 * If parent already has a left-child, the new node must take its place, and
 * the old left-child must be set as the left-child of the new node.
 *
 * Return:
 * Your function must return a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_left = binary_tree_node(parent, value);

	if (new_left == NULL)
		return (NULL);

	binary_tree_t *old_left = parent->left;

	if (old_left != NULL)
	{
		old_left->parent = new_left;
		new_left->left = old_left;
	}
	parent->left = new_left;
	return (new_left);
}
