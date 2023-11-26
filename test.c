/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:50:19 by databey           #+#    #+#             */
/*   Updated: 2023/11/26 04:36:12 by databey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Taha\n");
	ft_printf("%s", "Taha\n");
	ft_printf("%c", 'T');
	ft_printf("\n");
	ft_printf("%d\n", 95);
	ft_printf("%s Yasinda %x, %s\n", "Taha", 21);
	ft_printf("%u Yasinda %s\n", -5353, "Taha");
	ft_printf("%d Yasinda %s\n", "Taha");
	return (0);
}
