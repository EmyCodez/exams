#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	w_start;
	int	w_end;
	int	str_end;

	if (argc > 1 && argv[1][0])
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		w_start = i;
		str_end = w_start;
		while (argv[1][str_end])
			str_end++;
		--str_end;
		while (argv[1][str_end] == '\t' || argv[1][str_end] == ' ')
			str_end--;
		while (i <= str_end && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		w_end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (i <= str_end)
		{
			while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ')
				|| (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
				i++;
			if (argv[1][i] != ' ' || argv[1][i] != '\t')
				write(1, &argv[1][i], 1);
			if (i == str_end)
				write(1, " ", 1);
			i++;
		}
		while (w_start < w_end)
			write(1, &argv[1][w_start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
