#include <iostream>
using namespace std;

double add(double a,double b) // Sygnatura funkcji
{
    
    return a + b;
}
double min(double num1,double num2) // Sygnatura funkcji
{
    return num1 - num2;
}
double multiply(double num1,double num2) // Sygnatura funkcji
{
    return num1 * num2;
}
double divide(double num1,double num2) // Sygnatura funkcji
{
    return num1 / num2;
}
void printer(double a,double b,char op,double w) // Sygnatura funkcji
{
    std::cout << a << op << b << "  To jest kurwa wynik:" << w << std::endl;
}

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


                case '-': wynik = min(num1,num2); break;
                case '+': wynik = add(num1,num2); break;
                case '/': wynik = divide(num1,num2); break;
                case '*': wynik = multiply(num1,num2); break;

                default: cout << "Niewlasciwa komenda" << endl;
            }

            printer(num1,num2,operation,wynik);
cout <<num2; 


    return 0;
}

