/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:46:09 by hoatran           #+#    #+#             */
/*   Updated: 2024/08/07 14:30:12 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "cub.h"

int	main(int argc, char **argv)
{
	t_cub	cub;
	
	if (
		validate(argc, argv) == false
		|| init_cub(&cub) != 0
		|| start(&cub) != 0
	)
		return (EXIT_FAILURE);
	destroy_cub(&cub);
	return (EXIT_SUCCESS);
}
