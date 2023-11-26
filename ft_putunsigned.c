/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:20:19 by databey           #+#    #+#             */
/*   Updated: 2023/11/26 01:43:25 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

static char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_log10(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n)
	{
		num[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (num);
}

int	ft_put_unsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (!n)
		print_length += ft_putchar_len('0');
	else
	{
		num = ft_uitoa(n);
		print_length += ft_putstr_len(num);
		free(num);
	}
	return (print_length);
}