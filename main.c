#include "get_next_line.h"

int	main(void)
{
	int		fd1;
	char	*line;

	fd1 = open("alice.txt", O_RDONLY);
	int	n;

	n = 0;


	while (n < 60)
	{
		line = get_next_line(fd1);
		printf("%s", line);
		// free(line);
		n++;
	}
	return (0);
}