
#include "header.h"

int if_sorted(t_list *p1)
{
	t_list *p;

	p = p1;
	while (p->next)
	{
		if(p->content > p->next->content)
			return (0);
		p = p->next;
	}
	return (1);
}

void	free_listarr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

int	chakmiax(char *p, long int n)
{
	char	*n2;

	n2 = ft_itoa(n);
	printf("%s == %s\n", p,n2 );
	if (ft_strncmp(n2, p, 12))
		return (free(n2), 1);
	free(p);
	return (free(n2), 0);
}

int	checknbr(t_list *list, long int nbr)
{
	t_list	*p;

	if (!list)
		return (0);
	p = list;
	while (p)
	{
		if (p->content == nbr)
			return (1);
		p = p->next;
	}
	return (0);
}

t_list	*fillstack(char *str)
{
	t_list		*list;
	char		**ptr2;
	int			i;
	long int	number;

	list = NULL;
	i = 0;
	ptr2 = ft_split(str, ' ');
	if (!ptr2[i])
		ererr(str);
	while (ptr2[i])
	{
		number = ft_atoi(ptr2[i]);
		if (checknbr(list, number) || chakmiax(rm_zero(ptr2[i]), number))
			{
				frfun(ptr2);
				ererr(str);
			}
		ft_lstadd_back(&list, ft_lstnew(number));
		i++;
	}
	frfun(ptr2);
	// if (if_sorted(list))
	// 	ererr(str);
	return (list);
}