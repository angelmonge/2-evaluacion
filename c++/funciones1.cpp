#include<iostream>

int respuesta;
int num1;
int num2;
int num3;
char salir;

float media(float num1, float num2, float num3,float num4){
    float respuesta;
    respuetsa=(num1+num2+num3+num4)/4:
    }

int mayor(int num1, int num2, int num3){
    int respuesta;
    if(num1>num2 && num1>num3){
       respuesta=num1;        
    }
    if(num2>num3 && num2>num1){
       respuesta=num2;          
    }
    if(num3>num1 && num3>num2){
       respuesta=num3;
    }
    return respuesta;
}
int main(){
    int num1,num2,num3;
    std::cout<<"Introduce un numero: ";
    std::cin>>num1;
    std::cout<<"Introduce otro numero: ";
    std::cin>>num2;
    std::cout<<"Introduce otro numero: ";
    std::cin>>num3;
    std::cout<<"El mayor es: "<<mayor(num1,num2,num3);
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
    }
