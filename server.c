/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:51:03 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/09/22 13:27:46 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#include "ft_printf/include/ft_printf.h"

int main(void)
{

    ft_printf("%u\n", getpid());
    return (0);
}
