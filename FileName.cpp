#include <iostream>
//start of the code
int main() {
    std::string name;                // there is name
    std::cout << "Enter your name: "; //asking for the name
    std::cin >> name;                  //reading the name
    std::cout << "Hello world from " << name << std::endl; //printing the name
    return 0;
}//end
