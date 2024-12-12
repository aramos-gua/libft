/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:19:50 by alex              #+#    #+#             */
/*   Updated: 2024/12/12 12:33:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;
	char	*start_r;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	start_r = result;
	while (s[i] != '\0')
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (start_r);
}
