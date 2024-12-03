/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:09:55 by aramos            #+#    #+#             */
/*   Updated: 2024/12/03 15:58:52 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr_l;
	const char	*ptr_b;

	ptr_l = little;
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		ptr_b = big;
		ptr_l = little;
		while (*ptr_b == *ptr_l && *ptr_l != '\0')
		{
			ptr_b++;
			ptr_l++;
		}
		if(*little == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
