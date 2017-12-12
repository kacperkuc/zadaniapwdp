#include <iostream> 
#include <cstdlib>
#include <string>

using namespace std;
char znacznikGracza = 'X';
char znacznikKomputera = 'O';
char arrPola[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int punktyX = 0;
int punktyO = 0;


void ekranPowitalny() {
	string zol =  "\033[0;43m  \033[0m";
	string nie = "\033[0;44m  \033[0m";

	int i;
	for (i = 0; i <  240; i++)
		cout << nie;
	cout << endl;
	for (i = 0; i < 5; i++)
		cout << nie; 
	for (i = 0; i < 5; i++)
		cout << zol; 
	cout << nie << zol << nie << nie << zol << zol;
	for (i = 0; i < 4; i++)
		cout << nie;
	for (i = 0; i < 5; i++)
		cout << zol; 
	cout << nie << zol << zol;
	for (i = 0; i < 4; i++)
		cout << nie;
	cout << zol << zol;
	for (i = 0; i < 6; i++)
		cout << nie;
	
	for (i = 0; i < 7;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << zol << nie << nie << zol;
	for (i = 0; i < 5;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << zol << nie << nie << zol << nie << nie << zol;
	for (i = 0; i < 5;  i++)
		cout << nie;
		
	for (i = 0; i < 7;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << zol;
	for (i = 0; i < 5;  i++)
		cout << nie;
	cout << zol << nie << nie << zol << nie << nie << nie << zol << nie << nie << zol << nie << zol;
	for (i = 0; i < 8;  i++)
		cout << nie;
		
	for (i = 0; i < 7;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << zol << nie << nie << zol;
	for (i = 0; i < 5;  i++)
		cout << nie; 
	cout << zol << nie << nie << nie << zol << zol << zol << zol << nie << zol << nie << nie << zol;
	for (i = 0; i < 5;  i++)
		cout << nie;
		
	for (i = 0; i < 7;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << nie << zol << zol;
	for (i = 0; i < 6;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << nie << zol << nie << nie << zol << zol;
	for (i = 0; i < 6;  i++)
		cout << nie;
		
	for (i = 0; i < 80;  i++)
		cout << nie;
		
	for (i = 0; i < 12;  i++)
		cout << nie;
	for (i = 0; i < 5;  i++)
		cout << zol;
	cout << nie << nie << zol << zol << nie << nie << zol << zol << zol << zol;
	for (i = 0; i < 13;  i++)
		cout << nie;
		
	for (i = 0; i < 14;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << nie << zol << nie << zol;
	for (i = 0; i < 16;  i++)
		cout << nie;
		
	for (i = 0; i < 10;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << nie << nie << zol << nie << nie << zol << nie << zol << zol << zol << nie << nie << zol;
	for (i = 0; i < 11;  i++)
		cout << nie;
		
	for (i = 0; i < 14;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << zol << nie << nie << zol <<nie << zol;
	for (i = 0; i < 16;  i++)
		cout << nie;
		
	for (i = 0; i < 14;  i++)
		cout << nie;
	cout << zol << nie << nie << nie << nie << zol << zol << nie << nie << zol << zol << zol << zol;
	for (i = 0; i < 13;  i++)
		cout << nie;
		
	for (i = 0; i < 200;  i++)
		cout << nie;
	cout << endl;
	int a;
	cin >> a;
}

void plansza() {
	int i = 0;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " o_________________o" << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |     |     |     |" << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |  ";
	cout <<  arrPola[0];
	cout << "  |" ;
	cout << "  ";
	cout <<  arrPola[1];
	cout << "  |" ;
	cout << "  ";
	cout <<  arrPola[2];
	cout << "  |"  << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |_____|_____|_____|" << endl;
	
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |     |     |     |" << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |  ";
	cout <<  arrPola[3];
	cout << "  |" ;
	cout << "  ";
	cout <<  arrPola[4];
	cout << "  |" ;
	cout << "  ";
	cout <<  arrPola[5];
	cout << "  |"  << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |_____|_____|_____|" << endl;
	
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |     |     |     |" << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " |  ";
	cout <<  arrPola[6];
	cout << "  |" ;
	cout << "  ";
	cout <<  arrPola[7];
	cout << "  |" ;
	cout << "  ";
	cout <<  arrPola[8];
	cout << "  |"  << endl;
	for (i = 0; i < 30; i++)
		cout << " ";
	cout << " o_____|_____|_____o" << endl;
	cout << endl;
}

void ruchGracza(char znacznikGracza) { 
	int numerPola;
	cout << "Wybierz pole : " << endl;
	cin >> numerPola;
	switch( numerPola ) {
		case 1: 
		arrPola[0] = znacznikGracza;
		break;
		case 2: 
		arrPola[1] = znacznikGracza;
		break;
		case 3: 
		arrPola[2] = znacznikGracza;
		break;
		case 4: 
		arrPola[3] = znacznikGracza;
		break;
		case 5: 
		arrPola[4] = znacznikGracza;
		break;
		case 6: 
		arrPola[5] = znacznikGracza;
		break;
		case 7: 
		arrPola[6] = znacznikGracza;
		break;
		case 8: 
		arrPola[7] = znacznikGracza;
		break;
		case 9: 
		arrPola[8] = znacznikGracza;
		break;	
	}
	system("clear");
}

char sprawdzWygrana() {
	if (arrPola[0] == znacznikGracza && arrPola[1] == znacznikGracza && arrPola[2] == znacznikGracza)
		return znacznikGracza;
	else if (arrPola[3] == znacznikGracza && arrPola[4] == znacznikGracza && arrPola[5] == znacznikGracza)
		return znacznikGracza;
	else if (arrPola[6] == znacznikGracza && arrPola[7] == znacznikGracza && arrPola[8] == znacznikGracza)
		return znacznikGracza;
	
	else if (arrPola[0] == znacznikGracza && arrPola[3] == znacznikGracza && arrPola[6] == znacznikGracza)
		return znacznikGracza;
	else if (arrPola[1] == znacznikGracza && arrPola[4] == znacznikGracza && arrPola[7] == znacznikGracza)
		return znacznikGracza;
	else if (arrPola[2] == znacznikGracza && arrPola[5] == znacznikGracza && arrPola[8] == znacznikGracza)
		return znacznikGracza;
	
	else if (arrPola[0] == znacznikGracza && arrPola[4] == znacznikGracza && arrPola[8] == znacznikGracza)
		return znacznikGracza;
	else if (arrPola[6] == znacznikGracza && arrPola[4] == znacznikGracza && arrPola[2] == znacznikGracza)
		return znacznikGracza;
		
	if (arrPola[0] == znacznikKomputera && arrPola[1] == znacznikKomputera && arrPola[2] == znacznikKomputera)
		return znacznikKomputera;
	else if (arrPola[3] == znacznikKomputera && arrPola[4] == znacznikKomputera && arrPola[5] == znacznikKomputera)
		return znacznikKomputera;
	else if (arrPola[6] == znacznikKomputera && arrPola[7] == znacznikKomputera && arrPola[8] == znacznikKomputera)
		return znacznikKomputera;

	else if (arrPola[0] == znacznikKomputera && arrPola[3] == znacznikKomputera && arrPola[6] == znacznikKomputera)
		return znacznikKomputera;
	else if (arrPola[1] == znacznikKomputera && arrPola[4] == znacznikKomputera && arrPola[7] == znacznikKomputera)
		return znacznikKomputera;
	else if (arrPola[2] == znacznikKomputera && arrPola[5] == znacznikKomputera && arrPola[8] == znacznikKomputera)
		return znacznikKomputera;
	
	else if (arrPola[0] == znacznikKomputera && arrPola[4] == znacznikKomputera && arrPola[8] == znacznikKomputera)
		return znacznikKomputera;
	else if (arrPola[6] == znacznikKomputera && arrPola[4] == znacznikKomputera && arrPola[2] == znacznikKomputera)
		return znacznikKomputera;
}

int ruchKomputera() {
	do {
		srand(time(NULL));
		int randWybor = rand() % 9; 
		while (1) {
			if (arrPola[randWybor]  != znacznikGracza && arrPola[randWybor]  != znacznikKomputera) {
				arrPola[randWybor] = znacznikKomputera;	
				return 1;
				continue;
			} 
			else if (arrPola[randWybor]  == znacznikGracza || arrPola[randWybor]  == znacznikKomputera) {
				return 0;	
			} 
		} break;
	} while (ruchKomputera() == 1);
}

int main() {
	int decyzja;
	ekranPowitalny();
	while (decyzja != 2) {
		system("clear");
		arrPola[0] = '1';
		arrPola[1] = '2';
		arrPola[2] = '3';
		arrPola[3] = '4';
		arrPola[4] = '5';
		arrPola[5] = '6';
		arrPola[6] = '7';
		arrPola[7] = '8';
		arrPola[8] = '9';
				do {
				plansza();
				ruchGracza(znacznikGracza);
				sprawdzWygrana();
				if (sprawdzWygrana() == 'X') {
					punktyX += 1;
					cout << "Wygrał gracz X!" << endl;
					cout << "Wynik: X - " << punktyX << " O - " << punktyO << "." << endl;
					cout << "Chcesz spróbować ponownie?" << endl;
					cin >> decyzja;
					if (decyzja == 1) {
						break;
					}
					else if (decyzja == 2)
						exit(0);
				} 
				else if (sprawdzWygrana() == 'O') {
					punktyO += 1;
					cout << "Wygrał komputer!" << endl;
					cout << "Wynik: X - " << punktyX << " O - " << punktyO << "." << endl;
					cout << "Chcesz spróbować ponownie?" << endl;
					cin >> decyzja;
					if (decyzja == 1) 
						break;
					else if (decyzja == 2)
						exit(0); 
				} 
				ruchKomputera();
			} while (sprawdzWygrana() != 'O' || sprawdzWygrana() != 'X');

	}
}