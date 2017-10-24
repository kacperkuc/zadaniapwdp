#include <iostream>
using namespace std;
int main()
{
    int x=1;
        do {
        cout << "\033[1;"<<x<< "mERROR\033[0m" << endl;
        x++;
    } while (x<48);
}