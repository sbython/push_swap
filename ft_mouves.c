/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 04:01:29 by msbai             #+#    #+#             */
/*   Updated: 2024/03/06 14:10:04 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void frfun(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}
void	swap(t_list **stack)
{
	t_list	*ptr;
	t_list	*ptr1;
	t_list	*ptr2;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	ptr1 = ptr->next;
	ptr2 = ptr->next->next;
	ptr->next = ptr2;
	ptr1->next = ptr;
	*stack = ptr1;
}

void	push(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr_a;

	if (!stack_a || !*stack_a)
		return ;
	ptr_a = *stack_a;
	*stack_a = ptr_a->next;
	ptr_a->next = NULL;
	ft_lstadd_front(stack_b, ptr_a);
}
// void    push(t_list **stack_a, t_list **stack_b)
// {
//     t_list    *ptr_a;

//     if (!stack_a || !*stack_a)
//         return ;
//     ptr_a = *stack_a;
//     *stack_a = ptr_a->next;
//     ptr_a->next = NULL;
//     ft_lstadd_front(stack_b, ptr_a);
// }
void	rotate(t_list **stack)
{
	t_list	*ptr;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	*stack = ptr->next;
	ptr->next = NULL;
	ft_lstadd_back(stack, ptr);
}

void	re_rotate(t_list **stack)
{
	t_list	*ptr;
	t_list	*last;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	ptr = *stack;
	while (ptr->next->next)
		ptr = ptr->next;
	last = ft_lstlast(*stack);
	ptr->next = NULL;
	last->next = *stack;
	*stack = last;
}
