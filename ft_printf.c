/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:37:02 by databey           #+#    #+#             */
/*   Updated: 2023/11/26 03:55:46 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/includes/libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		len;
	int		i;

	va_start(list, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_exec_cmd(&list, str[++i]);
		else
			len += ft_putchar_len(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}
