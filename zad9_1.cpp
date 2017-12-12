#include <iostream> 
#include <string>
using namespace std;
int i;

int main() {
	string cza =  "\033[0;40m  \033[0m";
	string zol =  "\033[0;43m  \033[0m";
	string nie = "\033[0;44m  \033[0m";
	string jan = "\033[0;46m  \033[0m";
	string bia = "\033[0;47m  \033[0m";
	string spa = "  ";
	
	for (i = 0; i < 33; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 15; i++) 
		cout << bia;
	for (i = 0; i < 3; i++)
		cout << cza;
	for (i = 0; i < 15; i++) 
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 13; i++) 
		cout << bia;
	for (i = 0; i < 3; i++)
		cout << cza;
	for (i = 0; i < 2; i++)
		cout << jan;
	cout << cza;
	for (i = 0; i < 14; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 12; i++)
		cout << bia;
	cout << cza;
	for (i = 0; i < 3; i++)
		 cout << nie;
	cout << cza;
	cout << jan << jan;
	cout << cza;
	for (i = 0; i < 13; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << cza;
	for (i = 0; i < 5; i++)
		cout << nie;
	for (i = 0; i < 4; i++)
		cout << cza;
	for (i = 0; i < 12; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << cza;
	for (i = 0; i < 5; i++)
		cout << nie;
	cout << cza;
	cout << jan << jan << nie << cza;
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 10; i++)
		cout << bia;
	cout << cza << jan;
	for (i = 0; i < 6; i++)
		cout << nie;
	cout << cza << cza << nie << cza;
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 8; i++)
		cout << bia;
	for (i = 0; i < 3; i++)
		cout << cza;
	cout << jan << nie << nie << zol;
	for (i = 0; i < 3; i++)
		cout << spa;
	cout << nie << nie << spa << cza;
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 6; i++)
		cout << bia;
	cout << cza << cza << jan << jan << cza << jan << nie << zol << spa << spa << cza << cza << zol << cza << spa << cza;
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 5; i++)
		cout << bia;
	cout << cza;
	for (i = 0; i < 5; i++)
		cout << jan;
	cout << cza << nie << zol << spa << spa << cza << cza << zol << cza << spa << cza;
	for (i = 0; i < 3; i++)
		cout << bia;
	for (i = 0; i < 4; i++)
		cout << cza;
	for (i = 0; i < 4; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 4; i++)
		cout << bia;
	cout << cza << nie;
	for (i = 0; i < 5; i++)
		cout << jan; 
	cout << cza << nie << zol << zol << spa << spa << spa << zol << spa << zol;
	for (i = 0; i < 4; i++)
		cout << cza;
	cout << nie << nie << nie << cza << cza << cza << bia << bia << endl; 
	
	for (i = 0; i < 4; i++)
		cout << bia;
	cout << cza << nie << nie << nie <<jan << cza << jan << jan << cza << nie << zol;
	for (i = 0; i < 4; i++)
		cout << cza;
	cout << zol << cza << cza << jan << jan << cza << nie << jan << jan << jan << cza << jan << cza << bia << endl;
	
	for (i = 0; i < 4; i++)
		cout << bia;
	cout << cza << nie << nie << nie << cza << nie << cza << jan << jan << cza;
	for (i = 0; i < 5; i++)
		cout << zol;
	cout << cza;
	for (i = 0; i < 4; i++)
		cout << jan;
	cout << cza;
	for (i = 0; i < 4; i++)
		cout << nie;
	cout << cza << nie << cza << bia << endl;
	
	for (i = 0; i < 5; i++)
		cout << bia;
	cout << cza << nie << nie << cza << nie << nie << cza << jan << jan;
	for (i = 0; i < 5; i++)
		cout << cza;
	 for (i = 0; i < 5; i++)
		cout << jan;
	cout << cza << nie << nie << nie << cza << cza << cza << bia << bia<< endl;

	for (i = 0; i < 6; i++)
		cout << bia; 
	cout << cza;
	for (i = 0; i < 4; i++)
		cout << nie;
	cout << cza;
	for (i = 0; i < 7; i++)
		cout << jan;
	for (i = 0; i < 5; i++)
		cout << cza;
	cout << bia;
	for (i = 0; i < 4; i++)
		cout << cza;
	for (i = 0; i < 4; i++)
		cout << bia;
	cout << endl;

	for (i = 0; i < 7; i++)
		cout << bia;
	cout << cza << nie << nie << cza;
	for (i = 0; i < 7; i++) 
		cout << jan; 
	cout << cza;
	for (i = 0; i < 14; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 8; i++)
		cout << bia;
	cout << cza << cza << nie << nie;
	for (i = 0; i < 5; i++)
		cout << jan;
	cout << cza;
	for (i = 0; i < 15; i++)
		cout << bia;
	cout << endl;

	for (i = 0; i < 9; i++)
		cout << bia; 
	cout << cza;
	for (i = 0; i < 7; i++)
		cout << nie;
	cout << cza;
	for (i = 0; i < 15; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 8; i++)
		cout << bia; 
	cout << cza << jan;
	for (i = 0; i < 6; i++)
		cout << nie;
	cout << jan << cza;
	for (i = 0; i < 15; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 7; i++)
		cout << bia; 
	cout << cza << jan << jan << jan;
	for (i = 0; i < 4; i++)
		cout << nie;
	cout << jan << jan << jan << cza;
	for (i = 0; i < 14; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 6; i++)
		cout << bia;
	cout << cza << nie;
	for (i = 0; i < 4; i++)
		cout << jan;
	cout << cza << cza << jan << jan << jan << nie << nie << cza;
	for (i = 0; i < 13; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 4; i++)
		cout << bia;
	cout << cza <<  cza << nie << nie << nie << jan << jan << cza << bia << bia << cza;
	for (i = 0; i < 4; i++)
		cout << nie;
	cout << cza;
	for (i = 0; i < 13; i++)
		cout << bia;
	cout << endl;
	
	cout << bia << bia << cza << cza;
	for (i = 0; i < 6; i++)
		cout << nie;
	cout << cza << bia << bia << bia << cza << nie << nie << nie << cza << cza << cza;
	for (i = 0; i < 12; i++)
		cout << bia;
	cout << endl;
	
	cout << bia << cza;
	for (i = 0; i < 7; i++)
		cout << nie;
	cout << cza << bia << bia << bia << cza;
	for (i = 0; i < 7; i++)
		cout << nie;
	cout << cza;
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << endl;
	
	cout << bia;
	for (i = 0; i < 9; i++)
		cout << cza;
	cout << bia << bia << bia;
	for (i = 0; i < 9; i++)
		cout << cza;
	for (i = 0; i < 11; i++)
		cout << bia;
	cout << endl;
	
	for (i = 0; i < 33; i++)
		cout << bia;
	cout << endl;
}
