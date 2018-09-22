#include <iostream>

void draw_rectangle(const char printableCharacter, const int w, const int h)
{
	for(auto i = 0; i < h; i++)
	{
		for(auto j = 0; j < w; j++)
		{
			std::cout << printableCharacter;
		}
		std::cout << std::endl;
 	}
}

void draw_triangle_rectangle(const char printableCharacter, const int h)
{
	for(auto i = 0; i < h ; i++)
	{
		for(auto j = 0; j <= i; j++)
		{
			std::cout << printableCharacter;
		}
		std::cout << std::endl;
	}
}

void draw_triangle_rectangle_reverse(const char printableCharacter, const int h)
{

	for(auto i = 0; i < h; i++)
	{
		for(auto j = 0; j < (h - i); j++)
		{
			std::cout << printableCharacter;
		}
		std::cout << std::endl;
	}
}

void draw_triangle_rectangle_symetricA(const char printableCharacter, const int h)
{
	for(auto i = 0; i < h; i++)
	{
		for(auto j = 0; j < (h-i); j++)
		{
			std::cout << " ";
		}

		for(auto j = 0; j < i; j++)
		{
			std::cout << printableCharacter;
		}
		std::cout << std::endl;
	}
}

 

int main()
{
	draw_rectangle('*', 50, 10);
	draw_triangle_rectangle('#', 6);
	draw_triangle_rectangle_reverse('%', 6);
	draw_triangle_rectangle_symetricA('#', 10);
 	return 0;
}