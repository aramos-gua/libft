/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:48:43 by aramos            #+#    #+#             */
/*   Updated: 2024/11/30 14:29:13 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	size_t	j;
	int	len_dst;

	i = 0;
	j = size - 1;
	len_dst = ft_strlen(dst);
	if (sizeof(dst == 0))
		return (len_dst + strlen(src));
	while (src[i] != '\0' && dst[i] != '\0')
	{
		dst [j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_dst + ft_strlen(src));
}
//
//int	main(void)
//{
//	char	dst[50] = "Hola";
//	char	src[50] = " Como tu estas?";
//
//	ft_strlcat(dst, src, 5);
//	printf("%s", dst);
//	return (0);
//}
