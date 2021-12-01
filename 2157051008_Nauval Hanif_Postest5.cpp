#include <ncurses.h>
using namespace std;

int main(){
	char nama[521];
	char alamat[520];
	char hobi[520];
	
	initscr();
	scanw("%520[^\n]", nama);
	scanw("%519[^\n]", alamat);
	scanw("%519[^\n]", hobi);
	
	printw("\n");
	
    printw("Nama :%s \n", nama);
    printw("Alamat :%s \n", alamat);
    printw("Hobi :%s \n", hobi);
	
	refresh();
	
	getch();
	
	endwin();	
}
