/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:06:48 by yxie              #+#    #+#             */
/*   Updated: 2019/07/06 11:46:44 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int	*num;
	int	i;

	if (end >= start)
	{
		num = (int *)malloc(sizeof(int) * (end - start + 1));
		num[0] = end;
		for(i = 1; i < (end - start + 1); i++)
			num[i] = num[i - 1] - 1; 
	}
	if (end < start)
	{
		num = (int *)malloc(sizeof(int) * (start - end + 1));
		num[0] = end;
		for(i = 1; i < (end - start + 1); i++)
			num[i] = num[i - 1] + 1; 
	}
	return (num);
}

int	main()
{
	int *num;
	int	i;

	i = 0;
	num = ft_rrange(-1, 2);
	while (i < (2+1)+ 1)
		printf("%d\n", num[i++]);
}
