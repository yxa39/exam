/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:11:37 by yxie              #+#    #+#             */
/*   Updated: 2019/07/06 10:17:27 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}