#include <iostream>
using namespace std;

int main()
{
    // Zadanie 1
    /*for (int i = 5; i <= 7; i++) {
		cout << i << endl;
    }
    cout << "pkt.2" << endl;
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }
    cout << "pkt.3" << endl;
    for (int i = 0; i <= 10; i += 2) {
        cout << i << endl;
    }
    cout << "pkt.4" << endl;
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }*/

    // Zadanie 2
    /*int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start;
    while (fahr <= limit) { 
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\t" << celsius << endl; 
        fahr = fahr + krok;
    }*/

    //Zadanie 3
    /*int fahr, celsius; 
    int start, limit, krok;

    start = 0; 
    limit = 200;
    krok = 20;

    fahr = start;
    for (; fahr <= limit; fahr += krok) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\t" << celsius << endl;
    }*/

    // Zadanie 5
	/*int limit, krok;

    limit = 200;
    krok = 20;

    for (float fahr = 0.0; fahr <= limit; fahr = fahr + krok)
    {
        float celsius = (5 / 9) * (fahr - 32.0);
        printf("%3.0f \t %6.1f \n", fahr, celsius);
    }*/

    // Zadanie 6
    int fahr, celsius;
    int start, limit, krok;

    cin >> limit >> krok;

    start = 0;

    fahr = start;
    for (; fahr <= limit; fahr += krok) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\t" << celsius << endl;
    }
    return 0;
}
