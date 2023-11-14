#include <iostream>
using namespace std;

int main() {
    // Wprowadz wartosci bokow x i y
    int x, y;
    
    std::cout << "Podaj dlugosc boku x: ";
    std::cin >> x;
    
    std::cout << "Podaj dlugosc boku y: ";
    std::cin >> y;

    // Rysowanie prostokata
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            std::cout << "%";
        }
        std::cout << std::endl;
    }

    return 0;
}