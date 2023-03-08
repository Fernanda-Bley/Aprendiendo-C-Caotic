#include <iostream>
//Basado en los porcentajes retorne cuanto gano sin taxes, cuanto debe para taxes del
//estado y cuantas gano para los taxes del gobierno
// y cuanto gano al final
using namespace std;
int main(){
    double sales = 95000;
    double state_tax = .04;
    double country_tax = .02;
    cout << "Ganacias totales:" << sales << endl
    << "Taxes del estado: " << sales*state_tax << endl
    << "Taxes del pais: " << sales*country_tax << endl
    << "Ganancias finales: " << sales -  sales*state_tax - sales*country_tax;
    return 0;
}