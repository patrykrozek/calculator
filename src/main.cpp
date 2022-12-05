#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    double wynik;
    std::cout << "** Zajebisty kalkulator **" << endl;
    std::cin >> num1 >> operation >> num2;


    /* To jest moja orginalna czesc programu
        switch (operation)
            {


                case '-': std::cout << num1 << operation << num2 << "-" << num1 - num2 << std::endl; break;
                case '+': std::cout << num1 << operation << num2 << "+" << num1 + num2 << std::endl; break;
                case '/': std::cout << num1 << operation << num2 << "/" << num1 / num2 << std::endl; break;
                case '*': std::cout << num1 << operation << num2 << "*" << num1 * num2 << std::endl; break;

                default: cout << "Niewlasciwa komenda" << endl;
            }
    */
    switch (operation)
            {


                case '-': wynik = num1 - num2; break;
                case '+': wynik = num1 + num2; break;
                case '/': wynik = num1 / num2; break;
                case '*': wynik = num1 * num2; break;

                default: cout << "Niewlasciwa komenda" << endl;
            }

            std::cout << num1 << operation << num2 << "  To jest kurwa wynik:" << wynik << std::endl; 



    return 0;
}

