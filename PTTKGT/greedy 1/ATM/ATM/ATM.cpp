#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    do
    {
        cout << "so tien: ";
        cin >> n;
    } while (n < 10000);

    if (n % 10000 != 0) 
    {
        cout << "so tien phai la boi cua 10\n";
        return 1;
    }

    int motTram = n / 100000;
    n = n % 100000;

    int namMuoi = n / 50000;
    n = n % 50000;

    int haiMuoi = n / 20000;
    n = n % 20000;

    int muoi = n / 10000;

    cout << "Ket qua: \n";

    cout << motTram << " to 100k + " << namMuoi << " to 50k + "
        << haiMuoi << " to 20k + " << muoi << " to 10k" << endl;
 
    return 0;
}