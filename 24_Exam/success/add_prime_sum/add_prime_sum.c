#include <unistd.h>

int	ft_natoi(char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		num = num * 10 + (*str) - 48;
		str++;
	}
	return (num);
}

int	ft_isprime(int num)
{
	int	i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int num)
{
	char	digit;

	if (num > 9)
		ft_putnbr(num / 10);
	digit = num % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		num = ft_natoi(argv[1]);
		if (num > 0)
		{
			while (num)
			{
				if (ft_isprime(num))
					sum += num;
				num--;
			}
			ft_putnbr(sum);
		}
		else
			write(1, "0", 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

