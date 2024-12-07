/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:02:47 by aramos            #+#    #+#             */
/*   Updated: 2024/12/07 16:00:34 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	char		*start_ptr;
	char const	*new_s;

	ptr = (char *) malloc(len + 1);
	if (ptr == NULL || start >= ft_strlen(s))
		return (NULL);
	new_s = s + start;
	start_ptr = ptr;
	while (len > 0 && *new_s != '\0')
	{
		*ptr = *new_s;
		ptr++;
		new_s++;
		len--;
	}
	*ptr = '\0';
	return (start_ptr);
}
//
//int	main(void)
//{
//	char const	s[] = "Mashmhellos";
//
//	printf("%s", ft_substr(s, 5, 5));
//	return (0);
//}
