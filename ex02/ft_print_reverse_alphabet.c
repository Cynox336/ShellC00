/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphaber.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-pa <jruiz-pa@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:30:11 by jruiz-pa          #+#    #+#             */
/*   Updated: 2024/03/27 11:30:23 by jruiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
