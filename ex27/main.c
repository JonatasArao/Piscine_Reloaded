/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:12:20 by jarao-de          #+#    #+#             */
/*   Updated: 2024/10/08 15:49:57 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	invalid_arguments_count(int argc)
{
	if (argc == 2)
		return (0);
	if (argc == 1)
		write(1, "File name missing.\n", 20);
	if (argc > 2)
		write(1, "Too many arguments.\n", 21);
	return (1);
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_readed;
	char	buffer[8192];

	fd = open(filename, O_RDONLY);
	bytes_readed = read(fd, buffer, 8192);
	while (bytes_readed > 0)
	{
		write(1, buffer, bytes_readed);
		bytes_readed = read(fd, buffer, 8192);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (invalid_arguments_count(argc))
		return (1);
	ft_display_file(argv[1]);
	return (0);
}
