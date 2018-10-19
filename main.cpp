#include <iostream>
int foo () {
    std::cout << "Функция вызвана" << std::endl;
}
int poo ()  {
    std::cout << foo()<< std::endl;
    std::cout << foo()<< std::endl;
    std::cout << foo()<< std::endl;
}
int main() {

        int a= poo();
    return 0;
}