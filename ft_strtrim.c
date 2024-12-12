/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:14:43 by aramos            #+#    #+#             */
/*   Updated: 2024/12/10 09:58:58 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	char	*ptr_2;
	int		len_set;
	int		len_s1;

	if (s1 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = strlen(set);
	ft_strnstr(s1, set, len_s1);
	s2 = (char *) malloc();
}

int	main(void)
{
	
}
