#include <iostream>
using namespace std;

int main()
{
    // borys.kurtiak@student.put.poznan.pl
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
    /*int fahr, celsius;
    int start, limit, krok;

    cin >> limit >> krok;

    start = 0;

    fahr = start;
    for (; fahr <= limit; fahr += krok) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\t" << celsius << endl;
    }*/

    // Zadanie 7
    /*int n = 0;
    for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe: ";
        cin >> n;
        if (n > 0) {
            cout << n << endl;
        }
    }*/

    // Zadanie 8
    /*for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
			cout << i << endl;
        }
    }*/

    // Zadanie 9
    /*int n;
	cout << "Podaj liczbe n: ";
    cin >> n;
    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
			cout << i << endl;
        }
    }*/

    // Zadanie 10
    /*int sum = 0;
    int n;

	cout << "Podaj liczbe n: ";
    cin >> n;
    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            sum++;
        }
    }
	cout << "Suma liczb podzielnych przez " << n << " wynosi: " << sum << endl;*/

    // Zadanie 11
    /*int a, b;
    cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;

    if (a < b) {
        while (a < b) {
            if (a % 3 == 0) {
				cout << a << endl;
            }
            a++;
        }
    }
    else {
        while (b < a) {
            if (b % 3 == 0) {
                cout << b << endl;
            }
            b++;
        }
    }*/

    // Zadanie 12
    /*int n, sum = 0;
	cout << "Podaj liczbe n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
		sum += i;
    }
	cout << "Œrednia arytmetyczna od 1 do " << n << " wynosi: " << sum/n << endl;*/

    // Zadanie 13
    /*for (int i = 100; i >= 0; i--) {
		cout << i << endl;
    }*/

	// Zadanie 14
    /*int a, b, c;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
    cin >> b;
	cout << "Podaj liczbe c: ";
	cin >> c;

    if (a < b && a < c) {
		cout << "Najmniejsza liczba to: " << a << endl;
    }
    if (b < a && b < c) {
		cout << "Najmniejsza liczba to: " << b << endl;
    }

    if(c < a && c < b) {
		cout << "Najmniejsza liczba to: " << c << endl;
    }*/

    // Zadanie 15
    return 0;
}
