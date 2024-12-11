/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:52:49 by aramos            #+#    #+#             */
/*   Updated: 2024/12/11 19:48:14 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		flag;
	int		len;

	if (!n)
		return (NULL);
	len = num_len(n);
	if (n < 0)
	{
		flag = 1;
		len += 1;
		n *= -1;
	}
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (n > 0)
	{
		result[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	if (flag == 1)
		result [len] = '-';
	return (result);
}

int	main(void)
{
	int	number;

	number = -58;
	printf("%s", ft_itoa(number));
	return (0);
}
