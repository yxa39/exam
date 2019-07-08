/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:14:42 by yxie              #+#    #+#             */
/*   Updated: 2019/07/08 15:39:04 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (ft_strcmp(argv[2],"+") == 0)
			printf("%d\n", atoi(argv[1]) + atoi(argv[3]));
		if (ft_strcmp(argv[2],"-") == 0)
			printf("%d\n", atoi(argv[1]) - atoi(argv[3]));
		if (ft_strcmp(argv[2],"*") == 0)
			printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
		if (ft_strcmp(argv[2],"%") == 0)
			printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
		if (ft_strcmp(argv[2],"/") == 0)
			printf("%d\n", atoi(argv[1]) / atoi(argv[3]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
