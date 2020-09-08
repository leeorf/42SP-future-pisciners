#include "ft_list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;
	
	t_list *current;

	current  = *begin_list;

	if(cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	ft_list_remove_if(&current->next, data_ref, cmp); 
}

void print_list(t_list **begin_list)
{
	t_list *current;
	current = *begin_list;

	while(current)
	{
		printf("%s\n", current->data);
		current = current->next;
	}
}

int main()
{
	t_list *aa;
	char straa[] = "String aa";
	t_list *bb;
	char strbb[] = "String bb";
	t_list *cc;
	char strcc[] = "String cc";
	t_list *dd;
	char strdd[] = "String dd";
	t_list **begin_list;
	begin_list = &aa;

	
	aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	print_list(begin_list);
	printf("------------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
	
	return 0;
}
