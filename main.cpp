#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
int main(int argc, char argv)
{
    ifstream plik;
    plik.open("plik.txt");

    char licz = 0;

    for (int i = 2; i < argc; i++) {
        plik >> argv;
    }
	
while(!(cin>>licz))
{
    if (argc == 4) 
    {
    	for (int i = 0; i < 4; i++) 
	{
            if(licz > argv) 
	    {
                licz = argv;
            }
        }
    }
    cerr<<"bląd ilość parametrów";
    exit(1);
}

    cout << "Najwieksza liczba to: "<<licz <<endl;
    plik.close();
    return 0;
}
