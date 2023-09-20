/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:51:03 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/09/20 18:04:30 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t   pid;

    pid = getpid();
    printf("%u\n", pid);
    return (0);
}