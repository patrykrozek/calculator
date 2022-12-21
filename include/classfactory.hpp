#include <string>
#include <iostream>

class Bear_project //Definicja klasy, definicja nowego typu, cos podobnego do int, na koncu konieczne; W klasie funkcje widza wszystkie parametry
{ 
    public:
    std::string color;
    std::string name;
    void choose_color(std::string col){
        color = col;
    }

    Bear_project(std::string kupa)
    {
        name = kupa;
    } //

    void speak_my_name(){
        std::cout << "My name is " << name << std::endl;
    }
};

void bear_factory()

{ 
    Bear_project polarny1("Abradek"); //Bear jest przepisem/typem, polarny jest obiektem juz stworzonym  
    Bear_project polarny2("Jas");
    Bear_project polarny3("Wiola");
    Bear_project polarny4("Andrzej");
    
    polarny1.speak_my_name();
    polarny2.speak_my_name();
    polarny3.speak_my_name();
    polarny4.speak_my_name();


    polarny1.choose_color("black");
    polarny2.choose_color("pink");
    polarny3.choose_color("orange");
    polarny4.choose_color("yellow");


    std::cout << "Bear has a color " << polarny1.color.size() << std::endl;
    std::cout << "Bear has a color " << polarny2.color << std::endl;
    std::cout << "Bear has a color " << polarny3.color << std::endl;
    std::cout << "Bear has a color " << polarny4.color << std::endl;
}

