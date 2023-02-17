/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burun <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:40:28 by burun             #+#    #+#             */
/*   Updated: 2022/12/20 18:05:52 by burun            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		write(fd, "(NULL)", 6);
	else
		write(fd, s, ft_strlen(s));
}
/*#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd= open("/Users/burun/Desktop/text.txt",O_RDWR | O_CREAT, 777);
	ft_putstr_fd("merhaba naber",fd);
	printf("%d",fd);
}*/