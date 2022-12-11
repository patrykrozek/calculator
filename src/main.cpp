#include <iostream>
using namespace std;

bool miniority(double a, double b, double epsilon = 0.0000001f){
    if((a-b) < epsilon) {
        return 1;
    }
    else {
        return 0;
    }
}
bool majority(double a, double b, double epsilon = 0.0000001f){
    if((a-b) > epsilon) {
        return 1;
    }
    else {
        return 0;
    }
}
bool equality(double a, double b, double epsilon = 0.0000001f){
    if((a-b) < epsilon) {
        return 1;
    }
    else {
        return 0;
    }
}

void colector(double & num1, char & operation, double & num2) {
    std::cin >> num1 >> operation >> num2;
    

}
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
    double num1, num2;
    
    char operation;
    double wynik;
    std::cout << "** Zajebisty kalkulator **" << endl <<"Wypisz dzialanie, ktore chcesz wykonac" << endl;
    
    colector(num1, operation, num2);
    

    /*std::cin >> num1 >> operation >> num2;*/


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
                case '<': wynik = miniority(num1,num2, 0.0000001f); break;
                case '>': wynik = majority(num1,num2, 0.0000001f); break;
                case '=': wynik = equality(num1,num2, 0.0000001f); break;
                default: cout << "Niewlasciwa komenda" << endl;
            }

            
            
    printer(num1, num2, operation, wynik);

    return 0;
}

