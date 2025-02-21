/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:50:31 by aramos            #+#    #+#             */
/*   Updated: 2025/02/21 13:50:42 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	replace_by;
	void	*ptr;	

	ptr = s;
	replace_by = (unsigned char)c;
	while (n > 0)
	{
		*(unsigned char *)s = replace_by;
		n--;
		s++;
	}
	return (ptr);
}

//int	main(void)
//{
//	char str[50] = "Hello, I am understanding the memset function";
//
//	//printf("Before memset(): %s\n", str);
//	printf("Before ft_memset(): %s\n", str);
//	//memset(str, -133, 10*sizeof(char));
//	//printf("After memset():   %s\n", str);
//	ft_memset(str, '.', 10*sizeof(char));
//	printf("After ft_memset():   %s", str);
//	return (0);
//}
