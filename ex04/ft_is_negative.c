/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-pa <jruiz-pa@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:31:40 by jruiz-pa          #+#    #+#             */
/*   Updated: 2024/03/27 11:32:01 by jruiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}
