#include "libft.h"
#include <stdio.h>

// Función de ejemplo para transformar el contenido de la lista
void	*transform(void *content)
{
	char	*new_content;
	new_content = ft_strdup((char *)content); // Duplica el contenido
	if (new_content)
	{
		int i = 0;
		while (new_content[i])
		{
			new_content[i] = ft_toupper(new_content[i]); // Convierte a mayúsculas
			i++;
		}
	}
	return ((void *)new_content);
}

// Función de eliminación para limpiar la memoria
void	del(void *content)
{
	free(content);
}

// Función para imprimir la lista
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	// Crear la lista original
	t_list *lst1 = ft_lstnew(ft_strdup("hola"));
	t_list *lst2 = ft_lstnew(ft_strdup("mundo"));
	t_list *lst3 = ft_lstnew(ft_strdup("libft"));
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);

	printf("Lista original:\n");
	print_list(lst1);

	// Usar ft_lstmap para crear una nueva lista
	t_list *new_list = ft_lstmap(lst1, transform, del);

	printf("\nNueva lista después de mapear (convertir a mayúsculas):\n");
	print_list(new_list);

	// Liberar la memoria de ambas listas
	ft_lstclear(&lst1, del);
	ft_lstclear(&new_list, del);

	return (0);
}
