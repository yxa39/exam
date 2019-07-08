/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:06:48 by yxie              #+#    #+#             */
/*   Updated: 2019/07/08 14:05:53 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int	*num;
	int	i;
	int	size;

	size = (end >= start) ? (end - start + 1): (start - end + 1);
	printf("size: %d\n", size);
	num = (int *)malloc(sizeof(int) * size);
	num[0] = end;
	i = 0;
	while (++i < size)
		num[i] = (end >= start) ? num[i - 1] - 1: num[i - 1] + 1;
	return (num);
}

int	main()
{
	int *num;
	int	i;

	i = 0;
	num = ft_rrange(2, -1);
	while (i < (2+1)+ 1)
		printf("%d\n", num[i++]);
}
