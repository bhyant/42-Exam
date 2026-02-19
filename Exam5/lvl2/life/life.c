#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void print_map(char *map, int w, int h)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			if (map[y * w + x])
				putchar('0');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}

int count_n(char *map, int w, int h, int x, int y)
{
	int nb = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (i == 0 && j == 0)
				continue;
			int ny = y + i;
			int nx = x + j;
			if (ny >= 0 && nx >= 0 && ny < h && nx < w)
			{
				if (map[ny * w + nx])
					nb++;
			}
		}
	}
	return nb;
}

void update_map(char *map, char *new_map, int w, int h)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			int n = count_n(map, w, h, x, y);
			if (map[y * w + x])
			{
				if (n == 2 || n == 3)
					new_map[y * w + x] = 1;
				else
					new_map[y * w + x] = 0;
			}
			else
			{
				if (n == 3)
					new_map[y * w + x] = 1;
				else
					new_map[y * w + x] = 0;
			}
		}
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	int w = atoi(av[1]);
	int h = atoi(av[2]);
	int iterator = atoi(av[3]);
	char *map = calloc(w* h, 1);
	char *new_map = calloc(w* h, 1);
	int y = 0;
	int x = 0;
	int pen = 0;
	char c;

	while (read(0, &c, 1) > 0)
	{
		if (c == 'x')
			pen = !pen;
		else if (c == 'w' && y > 0)
			y--;
		else if (c == 'a' && x > 0)
			x--;
		else if (c == 's' && x < h - 1)
			y++;
		else if (c == 'd' && x < w - 1)
			x++;
		if (pen)
			map[y * w + x] = 1;
	}

	while (iterator > 0)
	{
		update_map(map, new_map, w, h);
		char *tmp = map;
		map = new_map;
		new_map = tmp;
		iterator--;
	}
	print_map(map, w, h);
	free(map);
	free(new_map);
}
