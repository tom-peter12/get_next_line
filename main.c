#include "get_next_line.h"

int	main(void)
{
	int		fd1;
	char	*line;

	fd1 = open("balice.txt", O_RDONLY);
	int	n;

	n = 0;
	while (1)
	{
		line = get_next_line(fd1);
		if (!line)
			break;
		printf("%s", line);
		free(line);
		n++;
	}
	free(line);
	return (0);
}