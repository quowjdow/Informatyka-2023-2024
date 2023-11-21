#include <iostream>
using namespace std;

int main() {
    // Wprowadz wartosci bokow x i y
    int x, y;
    
    cout << "Podaj dlugosc boku x: ";
    cin >> x;
    
    cout << "Podaj dlugosc boku y: ";
    cin >> y;

    // Rysowanie prostokata
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            std::cout << "%";
        }
        std::cout << std::endl;
    }

    return 0;
}                                                                         