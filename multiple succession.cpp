#include "multiple succession.h"
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	orkestr* _orkestr[6] = { new balalaika(), new basgitara(), new skripka(), new sopilka(), new saxofon(), new truba() };
	int x = 0;//счётчик итераций цикла
	while (x < 60)
	{
		int y = rand() % 6;
		_orkestr[y]->play();
		x++;
	}
}