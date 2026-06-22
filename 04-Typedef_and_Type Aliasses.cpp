#include <iostream>
#include <vector>

//typedef sirve para renombrar tipos de datos muy largos y asi ahorrar tiempo de escritura y errores de tipografia
typedef std::vector<std::pair<std::string, int>> pair_list_t; //Existe una convención que dice que todos los datos modificados con typedef deben llevar una t al final
//typedef std::string text_t;
//typedef int numero_t;

//typedef ya fue remplazada por using que es mas popular porque es mejor para plantillas por lo que se recomienda usar using
 using text_t = std::string;
 using numero_t = int;

int main() {

    //Este es un dato muy complejo que mucho mas adelante entendere
    //std::vector<std::pair<std::string, int>> pair_list; sin el typedef
    pair_list_t pair_list; //Con typedef, claramente es muchomenos lo que se tiene que escribir
    text_t nombre = "Emiliano";
    numero_t edad = 21;

    std::cout<<nombre<<"\t"<<edad;

return 0;
}