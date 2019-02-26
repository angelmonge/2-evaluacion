#include<iostream>
#include<cstdlib>
#include<ctime>
/*Este programa sirve para generar 5 numeros al azar*/
int main(){
    float lista[5];//Aqui guardamos los numeros
    int i;
    int rellenos;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(i=0;i<5;i++){
                     lista[i]=rand()%6+1;
                     std::cout<<lista[i]<<"\n";
                     }
    std::cout<<"\nToca culquier tecla para salir";
    std::cin>>salir;
    return 0;
    }
