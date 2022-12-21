#include <iostream>
#include <string>
#include "../include/declarationfile.hpp"
#include "../include/classfactory.hpp"


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
    std::cout << a << op << b << " =" << w << std::endl;
}

void calculator() {
    double num1; 
    char operation;
    double num2;
    double wynik;
    std::cout << "Wypisz dzialanie, ktore chcesz wykonac" << std::endl;
    std::cin >> num1 >> operation >> num2;
    switch (operation)
            {
                case '-': wynik = min(num1,num2); break;
                case '+': wynik = add(num1,num2); break;
                case '/': wynik = divide(num1,num2); break;
                case '*': wynik = multiply(num1,num2); break;
                default: std::cout << "Niewlasciwa komenda" << std::endl; return;
            }
    printer(num1, num2, operation, wynik);
} 

void printer(double a,double b,std::string kasza){
    std::cout << "Liczba " << a << " jest " << kasza << b << std::endl;
}

void porownanie() {
    std::cout << "Wypisz liczby, ktore chcesz porownac" << std::endl;
    double num1, num2;
    std::cin >> num1 >> num2;
    if(num1>num2){
        printer(num1,num2,"wieksza od ");
        return;
    }
    if(num1<num2){
        printer(num1,num2,"mniejsza od ");
        return;
    }
    printer(num1,num2,"rowna ");
    return;
}

int main()
{
    std::cout << std::endl;
    std::cout << "** Pojebany kalkulator **" << std::endl <<"Wybierz tryb, w ktorym chcesz pracowac" << std::endl;
    std::cout << "1. Tyb kalkulator - wybierz 1" << std::endl;
    std::cout << "2. Porownanie liczb - wybierz 2" << std::endl;
    std::cout << "3. Odwrocenie stringa - wybierz 3" << std::endl;
    std::cout << "4. Odwrocenie stringa, druga metoda - wybierz 4" << std::endl;
    std::cout << "5. Fabryka misi - wybierz 5" << std::endl;
    int program;
    std::cin >> program;

    switch (program) {
        case 1: 
            calculator();
            break;
        case 2:
            porownanie();
            break;
        case 3:
            reverse_function();
        break;

        case 4:
            reverse_function2();
        break;
          case 5:
            bear_factory();
        break;

        default: 
            std::cout << "Niewlasciwa komenda" << std::endl;
            break;
    }
return 0;
}




/*
    colector(num1, operation, num2);
    
 switch (operation)
            {


                case '-': wynik = min(num1,num2); break;
                case '+': wynik = add(num1,num2); break;
                case '/': wynik = divide(num1,num2); break;
                case '*': wynik = multiply(num1,num2); break;
                case 'porownanie': wynik = porownanie(num1,num2, 0.0000001f); break;
                default: std::cout << "Niewlasciwa komenda" << std::endl;
            }

   printer(num1, num2, operation, wynik);

    */



/*
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
*/


/*
string porownanie(double a, double b, double epsilon = 0.0000001f) {
    string c;
    if((a-b) < epsilon && (a-b)>= 0) {
       c = "These two variables are equal" ;
    }
    return c;
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
    std::cout << a << op << b << "  To jest wynik:" << w << std::endl;
}

*/









    /*std::cin >> num1 >> operation >> num2;*/


    /* To jest moja orginalna czesc programu
        switch (operation)
            {


                case '-': std::cout << num1 << operation << num2 << "-" << num1 - num2 << std::endl; break;
                case '+': std::cout << num1 << operation << num2 << "+" << num1 + num2 << std::endl; break;
                case '/': std::cout << num1 << operation << num2 << "/" << num1 / num2 << std::endl; break;
                case '*': std::cout << num1 << operation << num2 << "*" << num1 * num2 << std::endl; break;

                default: std::cout << "Niewlasciwa komenda" << std::endl;
            }
    */
   

            
            
 
