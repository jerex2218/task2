#include <iostream>
//начало кода
int main() {
    std::string name;                // тут имя
    std::cout << "Enter your name: "; //тут спрашиваем это имя
    std::cin >> name;                  //узнаём имя
    std::cout << "Hello world from " << name << std::endl; //пишем имя
    return 0;
}//конец кода
