/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:07:50 by aramos            #+#    #+#             */
/*   Updated: 2024/11/28 17:30:20 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = dest;
	if (src < dest)
	{
		while (n > 0)
		{
			
		}
	}
}

int	main(void)
{
	char	src[50] = "I think I understand it now!"
	char	dest[50] = "Are you sure, brosky?"

	memmove(dest, src, 8)
	printf("%s", )
}
