/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:52:49 by aramos            #+#    #+#             */
/*   Updated: 2024/12/12 20:34:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	if (n < 0)
		n = -(long)n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long 	num;
	char	*result;
	int	len;

	num = n;
	len = num_len(n);
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	result[len] = '\0';
	if (n < 0)
		num = -num;
	if (n == 0)
		result[0] = '0';
	while (num > 0)
	{
		result[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
//
//int	main(void)
//{
//	int	number;
//
//	number = -2147483648;
//	printf("%s\n", ft_itoa(number));
//	return (0);
//}
