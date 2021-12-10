#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	
	initscr();
	
	const char *nama[11]={"Nauval hanif","nAuval hanif","naUval hanif","nauVal hanif","nauvAl hanif","nauvaL hanif","nauval Hanif","nauval hAnif","nauval haNif","nauval hanIf","nauval haniF"};
	char nn[15];
	
	printw("Masukan Nama untuk dianimasikan: ");
	scanw("%s",&nn);
	clear();
	for (int i=3; i>0; i--){
		printw("Loading...");
		Sleep(1000);
		refresh();
		clear();
		printw("Loading..");
		Sleep(1000);
		refresh();
		clear();
		printw("Loading.");
		Sleep(1000);
		refresh();
		clear();
	} 
	refresh();
	for (int j=0; j<10; j++){
		printw("%s",nama[j]);
		refresh();
		Sleep(1000);
		clear();
	}
	
	refresh();
	getch();
	endwin();	
	
}
