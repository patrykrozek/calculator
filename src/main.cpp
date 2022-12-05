#include <iostream>
using namespace std;

int main ()
{
    float num1, num2;
    char operation;
    std::cout << "** Zajebisty kalkulator **" << endl;
    std::cin >> num1 >> operation >>num2;

        switch (operation)
            {
                case '-': std::cout << num1 << operation << num2 << "-" << num1 - num2 << std::endl; break;
                case '+': std::cout << num1 << operation << num2 << "+" << num1 + num2 << std::endl; break;
                case '/': std::cout << num1 << operation << num2 << "/" << num1 / num2 << std::endl; break;
                case '*': std::cout << num1 << operation << num2 << "*" << num1 * num2 << std::endl; break;
                
                default: cout << "Niewlasciwa komenda" << endl;
            }


    return 0;   

}
