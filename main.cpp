#include <iostream>

using namespace std;

int main()
{
    int cont = 1, cont2 = 7;
    while (cont <= 9){
        cont2 = 7;
        while (cont2 >= 5){
            cout << "I=" << cont << " J=" << cont2 <<endl;
            cont2--;
        }
        cont = cont + 2;
    }
    return 0;
}
