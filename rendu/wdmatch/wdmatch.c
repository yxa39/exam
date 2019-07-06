/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:19:19 by yxie              #+#    #+#             */
/*   Updated: 2019/07/06 11:04:42 by yxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
int	main(int argc, char **argv)
{
	char	*tmp;
	int		count;
	int		len;

	if (argc == 3)
	{
		tmp = argv[1];
		count = 0;
		len = ft_strlen(argv[1]);
		for (; *tmp && *argv[2]; argv[2]++)
		{
			if (*tmp == *argv[2])
			{
				count++;
				tmp++;
			}
		}
		if (len == count)
			write(1, argv[1], len);
	}
	write(1, "\n", 1);
}
