#include "get_next_line.h"

int	main(void)
{
	int		fd1;
	// char	*line;

	fd1 = open("balice.txt", O_RDONLY);

	// line = get_next_line(fd1);
	// while (line)
	// {
	// 	printf("%s", line);
	// 	free(line);
	// 	line = get_next_line(fd1);
	// }
	(get_next_line(fd1));
	(get_next_line(fd1));
	(get_next_line(fd1));
	(get_next_line(fd1));
	(get_next_line(fd1));
	// printf("||%s++", (get_next_line(fd1)));
	// printf("||%s--", get_next_line(fd1));
	// printf("||%s**", get_next_line(fd1));
	// printf("||%s&&\n", get_next_line(fd1));
	// printf("||%s^^\n", get_next_line(fd1));
	// printf("||%s==\n", get_next_line(fd1));
	// printf("||%s##\n", get_next_line(fd1));

	// free(line);
	return (0);
}