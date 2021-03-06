/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:30:45 by ahubert           #+#    #+#             */
/*   Updated: 2020/02/19 17:30:46 by ahubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_pstar(const char *format, t_printf *tab)
{
	int n;

	n = 0;
	tab->pstar = TRUE;
	tab->pos++;
	while (ft_isdigit(format[tab->pos]))
	{
		n += (format[tab->pos] - 48) * 10;
		tab->pos++;
	}
	return (n);
}
