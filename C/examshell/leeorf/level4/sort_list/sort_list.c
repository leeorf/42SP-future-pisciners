#include "list.h"
#include "stdio.h"
#include "stdlib.h"

void	print_list(t_list **begin_list)
{
	t_list	*current;
	current = *begin_list;

	while(current)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

void	swap_data(t_list *a, t_list *b)
{
	int	tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	flag;
	t_list *current;

	flag = 1;
	current = lst;

	while(flag)
	{
		flag = 0;
		while(current && current->next != 0)
		{
			if(cmp(current->data, current->next->data) == 0)
			{
				swap_data(current, current->next); 
				flag = 1;
			}
			current = current->next;
		}
		current = lst;
	}
	return lst;
}

int	ascending(int a, int b)
{
	return (a <= b);
}


int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list 	*node5;	
	t_list	**begin_list;
	t_list *sorted_list;
	begin_list = &node1;

	node1 = malloc(sizeof(t_list));
	node1->data = -2;
	node1->next = 0;

	node2 = malloc(sizeof(t_list));
	node2->data = 45;
	node2->next = 0;

	node3 = malloc(sizeof(t_list));
	node3->data = 0;
	node3->next = 0;

	node4 = malloc(sizeof(t_list));
	node4->data = 11;
	node4->next = 0;

	node5 = malloc(sizeof(t_list));
	node5->data = -9;
	node5->next = 0;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	printf("LIST:\n");
	print_list(begin_list);
	printf("----------------\n");

	sorted_list = sort_list(node1, ascending);
	begin_list = &sorted_list;
	printf("SORTED LIST:\n");
	print_list(begin_list);


}
