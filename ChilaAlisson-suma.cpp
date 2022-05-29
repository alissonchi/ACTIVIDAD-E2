i//==================================================
//==>Nombre del programa: suma de varios números
//==>Autor: CHILA QUIÑONEZ ALISSON ELENA
//==> Archivo: ChilaAlisson-sumadevariosnúmeros.cpp
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-17
//==================================================
#include <iostream>

using namespace std;
using namespace std;

int main()
{
    int QE_c=0, QE_n;
    float QE_s=0, QE_x;
    cout<<"Ingrese la cantidad de números a sumar:";
    cin>>QE_n;
    do{
  
    cout<<"Ingrese un número:";
    cin>>QE_x;
    QE_c=QE_c+1;
 QE_s=QE_s+QE_x;
       } while(QE_c<QE_n);
cout<<endl<<"//====================================================================="<<endl;
        cout<<"//=====Nombre del programa: suma de varios números "<<endl;
        cout<<"//=====Archivo: ChilaAlisson-sumadevariosnumeros.cpp"<<endl;
        cout<<"//=====Autor: CHICHANDE MARQUEZ EVELYN "<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"//=====Fecha de ultima actualización: 17-05-2022"<<endl;
cout<<"//====================================================================="<<endl;
cout<<"Ingrese un número para sumarlo: "<< QE_s<<endl;
        
        return(0);
}
