/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjose-ye <mjose-ye@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:36:30 by mjose-ye          #+#    #+#             */
/*   Updated: 2021/08/30 19:43:27 by mjose-ye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'a' && c <= 'z') || !ft_isalpha(c))
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (0);
}
