#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Description:
 * If parent already has a right-child, the new node must take its place, and
 * the old right-child must be set as the right-child of the new node.
 *
 * Return:
 * Your function must return a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_right = binary_tree_node(parent, value);

	if (new_right == NULL)
		return (NULL);

	binary_tree_t *old_right = parent->right;

	if (old_right != NULL)
	{
		old_right->parent = new_right;
		new_right->right = old_right;
	}
	parent->right = new_right;
	return (new_right);
}
