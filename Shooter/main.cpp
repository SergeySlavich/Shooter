#include<iostream>
//#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include"windows.h"
using namespace std;
using std::cout;

//#define SHOOTER

#ifdef SHOOTER
int gun0_magazin = 9;
int gun1_magazin = 30;
void fire(int gun)
{
	switch (gun)
	{
	case 0: gun0_magazin > 0 ? cout << "Пиф-паф\n" : cout << "Осечка, патроны кончились.\n"; gun0_magazin--; break;
	case 1: gun1_magazin > 0 ? cout << "Тра-та-та-та\n" : cout << "Осечка, патроны кончились.\n"; gun1_magazin--; break;
	}
}

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Управление:\n\t\"W\" - вперед\n\t\"S\" - назад\n\t\"A\" - влево\n\t\"D\" - вправо\n\t\"Пробел\" - прыжок\n";
	cout << "\t\"tab\" - смена оружия\n\t\"enter\" - выстрел\n\t\"esc\" - выход из игры\n\tИГРА НАЧИНАЕТСЯ\n";
	char key;
	int gun = 0;
	do
	{
		key = _getch();
		switch (key)
		{
			case -32: break; //исключение дублирования срабатывания при нажатии стрелок
			case -106:	//Ц
			case -26:	//ц
			case 119:	//w
			case 87:	//W
			case 72: cout << "Вперед\n"; break; //стрелка вперед/вверх
			case -101:	//Ы
			case -21:	//ы
			case 83:	//S
			case 115:	//s
			case 80: cout << "Назад\n"; break;	//стрелка назад/вниз
			case -108:	//Ф
			case -28:	//ф
			case 65:	//A (eng)
			case 97:	//a (eng)
			case 75: cout << "Влево\n"; break;	//стрелка влево
			case -126:	//В
			case -94:	//в
			case 68:	//D
			case 100:	//d
			case 77: cout << "Вправо\n"; break;	//стрелка вправо
			case 32: cout << "Прыжок\n"; break;	//пробел
			//case 13: (gun == 0) ? (cout << "Пиф-паф\n") : (cout << "Тра-та-та-та\n"); break;	//enter
			case 13: fire(gun); break;
			case 9: gun = (gun == 1) ? 0 : 1; cout << "Меняем оружие\n"; break; //смена оружия
			case 27: cout << "Выход из игры"; break;
			default: cout << "Нет такой команды.\n"; break;
		}
	} while (key != 27);
}
#endif

///*
// Задача 4 "Shooter"
int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Задача 4 \"Shooter\"\n";
	char x;
	int stop = 1;
	while (stop != 0) {
		x = _getch();
		switch (_getch()) {
		case 0: cout << "0\n";					break;
		case 30: cout << "30\n";				break;
		case 31: cout << "31\n";				break;
		case 140: cout << "140\n";				break;
		case 141: cout << "141\n";				break;
		case 142: cout << "142\n";				break;
		case 143: cout << "143\n";				break;
		case 144: cout << "144\n";				break;
		case 145: cout << "145\n";				break;
		case 156: cout << "146\n";				break;
		case 127: cout << "127\n";				break;
		case 128: cout << "128\n";				break;
		case 129: cout << "129\n";				break;
		case 130: cout << "130\n";				break;
		case 131: cout << "131\n";				break;
		case 132: cout << "132\n";				break;
		case 135: cout << "135\n";				break;
		case 136: cout << "136\n";				break;
		case 137: cout << "137\n";				break;
		case 138: cout << "138\n";				break;
		case 139: cout << "139\n";				break;

		case 1: cout << "2 x ctrl+a\n";						break;
		case 2: cout << "2 x ctrl+b\n";						break;
		case 3: cout << "ctrl+2 = 2 x ctrl+c\n";			break;
		case 4: cout << "2 x ctrl+d\n";						break;
		case 5: cout << "2 x ctrl+e\n";						break;
		case 6: cout << "2 x ctrl+f\n";						break;
		case 7: cout << "2 x ctrl+g\n";						break;
		case 8: cout << "2 x backspace = 2 x ctrl+h\n";		break;
		case 9: cout << "2 x tab = 2 x ctrl+i\n";			break;

		case 10: cout << "2 x ctrl+j = 2 x ctrl+Enter\n";	break;
		case 11: cout << "2 x ctrl+k\n";					break;
		case 12: cout << "2 x ctrl+l\n";					break;
		case 13: cout << "2 x Enter = 2 x ctrl+m\n";		break;
		case 14: cout << "2 x ctrl+n\n";					break;
		case 15: cout << "2 x ctrl+o\n";					break;
		case 16: cout << "2 x ctrl+p\n";					break;
		case 17: cout << "2 x ctrl+q\n";					break;
		case 18: cout << "2 x ctrl+r\n";					break;
		case 19: cout << "2 x ctrl+s\n";					break;

		case 20: cout << "2 x ctrl+t\n";					break;
		case 21: cout << "2 x ctrl+u\n";					break;
		case 22: cout << "2 x ctrl+v\n";					break;
		case 23: cout << "2 x ctrl+w\n";					break;
		case 24: cout << "2 x ctrl+x\n";					break;
		case 25: cout << "2 x ctrl+y\n";					break;
		case 26: cout << "2 x ctrl+z\n";					break;
		case 27: cout << "2 x ctrl+[ = Esc\n";				break;
		case 28: cout << "2 x ctrl+\\\n";					break;
		case 29: cout << "2 x ctrl+]\n";					break;

		case 32: cout << "2 x space\n";						break;
		case 33: cout << "2 x shift+1 = !!\n";				break;
		case 34: cout << "2 x shift+' = \"\"\n";			break;
		case 35: cout << "2 x shift+3 = ##\n";				break;
		case 36: cout << "2 x shift+4 = $$\n";				break;
		case 37: cout << "2 x shift+5 = %%\n";				break;
		case 38: cout << "2 x shift+7 = &&\n";				break;
		case 39: cout << "2 x \'\n";						break;

		case 40: cout << "2 x shift+99 = ((\n";				break;
		case 41: cout << "2 x shift+00 = ))\n";				break;
		case 42: cout << "2 x shift+8 = **\n";				break;
		case 43: cout << "2 x shift+== = ++\n";				break;
		case 44: cout << "2 x ,\n";							break;
		case 45: cout << "2 x -\n";							break;
		case 46: cout << "2 x .\n";							break;
		case 47: cout << "2 x /\n";							break;
		case 48: cout << "2 x 0 = 2 x alt+0\n";				break;
		case 49: cout << "2 x 1 = 2 x alt+1\n";				break;

		case 50: cout << "2 x 2 = 2 x alt+2\n";				break;
		case 51: cout << "2 x 3 = 2 x alt+3\n";				break;
		case 52: cout << "2 x 4 = 2 x alt+4\n";				break;
		case 53: cout << "2 x 5 = 2 x alt+5\n";				break;
		case 54: cout << "2 x 6 = 2 x alt+6\n";				break;
		case 55: cout << "2 x 7 = 2 x alt+7\n";				break;
		case 56: cout << "2 x 8 = 2 x alt+8\n";				break;
		case 57: cout << "2 x 9 = 2 x alt+9\n";				break;
		case 58: cout << "2 x shift+;; = ::\n";				break;
		case 59: cout << "2 x ; = F1\n";					break;

		case 60: cout << "2 x shift+,, = << = F2\n";		break;
		case 61: cout << "2 x = = F3\n";					break;
		case 62: cout << "2 x shift+.. = >> = F4\n";		break;
		case 63: cout << "2 x shift+// = ?? = F5\n";		break;
		case 64: cout << "2 x shift+22 = @@ = F6\n";			break;
		case 65: cout << "2 x shift+aa = AA =F7\n";			break;
		case 66: cout << "2 x shift+bb = BB = F8\n";		break;
		case 67: cout << "2 x shift+cc = CC = F9\n";		break;
		case 68: cout << "2 x shift+dd = DD = F10\n";		break;
		case 69: cout << "2 x shift+ee = EE\n";				break;

		case 70: cout << "2 x shift+ff = FF\n";				break;
		case 71: cout << "2 x shift+gg = GG\n";				break;
		case 72: cout << "2 x shift+hh = HH = up\n";		break;
		case 73: cout << "2 x shift+ii = II\n";				break;
		case 74: cout << "2 x shift+jj = JJ\n";				break;
		case 75: cout << "2 x shift+kk = KK = left\n";		break;
		case 76: cout << "2 x shift+ll = LL\n";				break;
		case 77: cout << "2 X shift+mm = MM = right\n";		break;
		case 78: cout << "2 x shift+nn = NN\n";				break;
		case 79: cout << "2 x shift+oo = OO\n";				break;

		case 80: cout << "2 x shift+pp = PP = down\n";		break;
		case 81: cout << "2 x shift+qq = QQ\n";				break;
		case 82: cout << "2 x shift+rr = RR = shift+F12\n";	break;
		case 83: cout << "2 x shift+ss = SS = Del\n";		break;
		case 84: cout << "2 x shift+tt = TT = shift+F1\n";	break;
		case 85: cout << "2 x shift+uu = UU = shift+F2\n";	break;
		case 86: cout << "2 x shift+vv = VV = shift+F3\n";	break;
		case 87: cout << "2 x shift+ww = WW = shift+F4\n";	break;
		case 88: cout << "2 x shift+xx = XX = shift+F5\n";	break;
		case 89: cout << "2 x shift+yy = YY = shift+F6\n";	break;

		case 90: cout << "2 x shift+zz = ZZ = shift+F7\n";	break;
		case 91: cout << "[ = shift+F8\n";					break;
		case 92: cout << "\\ = shift+F9\n";					break;
		case 93: cout << "] = shift+F10\n";					break;
		case 94: cout << "2 x shift+66 = ^^\n";				break;
		case 95: cout << "2 x shift+-- = __\n";				break;
		case 96: cout << "2 x `\n";							break;
		case 97: cout << "2 x a\n";							break;
		case 98: cout << "2 x b\n";							break;
		case 99: cout << "2 x c\n";							break;

		case 100: cout << "2 x d\n";						break;
		case 101: cout << "2 x e\n";						break;
		case 102: cout << "2 x f\n";						break;
		case 103: cout << "2 x g\n";						break;
		case 104: cout << "2 x h\n";						break;
		case 105: cout << "2 x i\n";						break;
		case 106: cout << "2 x j\n";						break;
		case 107: cout << "2 x k\n";						break;
		case 108: cout << "2 x l\n";						break;
		case 109: cout << "2 x m\n";						break;

		case 110: cout << "2 x n\n";						break;
		case 111: cout << "2 x o\n";						break;
		case 112: cout << "2 x p\n";						break;
		case 113: cout << "2 x q\n";						break;
		case 114: cout << "2 x r\n";						break;
		case 115: cout << "2 x s\n";						break;
		case 116: cout << "2 x t\n";						break;
		case 117: cout << "2 x u\n";						break;
		case 118: cout << "2 x v\n";						break;
		case 119: cout << "2 x w\n";						break;

		case 120: cout << "2 x x\n";						break;
		case 121: cout << "2 x y\n";						break;
		case 122: cout << "2 x z\n";						break;
		case 123: cout << "2 x shift+[х = {{\n";			break;
		case 124: cout << "2 x shift+\\\\ = ||\n";			break;
		case 125: cout << "2 x shift+]] = }}\n";			break;
		case 126: cout << "2 x shift+`` = ~~\n";			break;

		case 133: cout << "F11\n";							break;
		case 134: cout << "F12\n";							break;

		case 146: cout << "ctrl+F12\n";						break;
		}
	}
	
	return 0;

	/*
	char input = 0;
	while (input != 0) {
		cin >> input;
		switch (input) {
		case 'w': cout << "вперед ^\n";
			continue;
		case 's': cout << "назад v\n";
			continue;
		case 'a': cout << "влево <\n";
			continue;
		case 'd': cout << "вправо >\n";
			continue;
		case 1: cout << "прыжок\n";
			continue;
		}
	}
	*/

//#define SHOOTER		// Задача 4 "Shooter" (не удалось реализовать работу в русской раскладке в верхнем регистре)

#ifdef SHOOTER // Задача 4 "Shooter"
void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задача 4 \"Shooter\"\n";
	while (true) {
		char x = _getch();
		switch (x)
		{
		case 13: cout << "fire - огонь\n"; break;	// key:			Enter
		case ' ': cout << "jump - прыжок\n"; break;	// key:			Space
		case 'W':					// CapsLock ENG key:	W
		case 'w':					// eng key:		w
		case 'ж':					// рус key:		ц
		case 72: cout << "up - вверх, вперед\n"; break; // key:			Up ^
		case 'A':					// CapsLock ENG key:	A
		case 'a':					// eng key:		a
		case 'д':					// рус key:		ф
		case 75: cout << "left - влево\n"; break;	// key:			Left <
		case 'S':					// CapsLock ENG key:	S
		case 's':					// eng key:		s
		case 'л':					// рус key:		ы
		case 80: cout << "down - вниз, назад\n"; break;	// key:			Down v
		case 'D':					// CapsLock ENG key:	D
		case 'd':					// eng key:		d
		case 'ў':					// рус key:		в
		case 77: cout << "right - вправо\n"; break;	// key:			Right >

		}
	}
}
#endif

//#define SHOOTER		// Задача 4 "Shooter" (не удалось реализовать работу в русской раскладке в верхнем регистре)

#ifdef SHOOTER // Задача 4 "Shooter"
void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задача 4 \"Shooter\"\n";
	while (true) {
		char x = _getch();
		switch (x)
		{
		case 13: cout << "fire - огонь\n"; break;	// key:			Enter
		case ' ': cout << "jump - прыжок\n"; break;	// key:			Space
		case 'W':					// CapsLock ENG key:	W
		case 'w':					// eng key:		w
		case 'ж':					// рус key:		ц
		case 72: cout << "up - вверх, вперед\n"; break; // key:			Up ^
		case 'A':					// CapsLock ENG key:	A
		case 'a':					// eng key:		a
		case 'д':					// рус key:		ф
		case 75: cout << "left - влево\n"; break;	// key:			Left <
		case 'S':					// CapsLock ENG key:	S
		case 's':					// eng key:		s
		case 'л':					// рус key:		ы
		case 80: cout << "down - вниз, назад\n"; break;	// key:			Down v
		case 'D':					// CapsLock ENG key:	D
		case 'd':					// eng key:		d
		case 'ў':					// рус key:		в
		case 77: cout << "right - вправо\n"; break;	// key:			Right >

		}
	}
}
#endif

#define SHOOTER				// Задача 4 "Shooter" (не удалось реализовать работу в русской раскладке в верхнем регистре)

#ifdef SHOOTER // Задача 4 "Shooter"
void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Задача 4 \"Shooter\"\n";
	while (true) {
		char x = _getch();
		switch (x)
		{
		case 13: cout << "fire - огонь\n"; break;	// key:			Enter
		case ' ': cout << "jump - прыжок\n"; break;	// key:			Space
		case 'W':					// CapsLock ENG key:	W
		case 'w':					// eng key:		w
		case 'ж':					// рус key:		ц
		case 72: cout << "up - вверх, вперед\n"; break; // key:			Up ^
		case 'A':					// CapsLock ENG key:	A
		case 'a':					// eng key:		a
		case 'д':					// рус key:		ф
		case 75: cout << "left - влево\n"; break;	// key:			Left <
		case 'S':					// CapsLock ENG key:	S
		case 's':					// eng key:		s
		case 'л':					// рус key:		ы
		case 80: cout << "down - вниз, назад\n"; break;	// key:			Down v
		case 'D':					// CapsLock ENG key:	D
		case 'd':					// eng key:		d
		case 'ў':					// рус key:		в
		case 77: cout << "right - вправо\n"; break;	// key:			Right >

		}
	}
}
#endif
