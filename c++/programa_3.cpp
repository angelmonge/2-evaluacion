#include<iostream>
/*Este programa sirve para saber leer 10 numeros*/
main(){
       float num[10];
       int i;
       char salir;
       float suma=0;//inicializamos a 0 la variable acumuladora
       float n_numeros;
       float media;
       std::cout<<"Cuantos numreos quieres introducir: ";
       std::cin>>n_numeros;
       for(i=0;i<n_numeros;i++){
                          std::cout<<"Dime un numero: ";
                          std::cin>>num[i];
                          }
                          //Ahora voy a enseñar mis numeros
                          std::cout<<"LISTA DE NUMEROS:\n";
                          for(i=0;i<n_numeros;i++){
                                            std::cout<<num[i];
                          }
                          //Calculamos la media de los numeros ARRAY
                          for(i=0;i<n_numeros;i++){
                                             //¿como se suman los numeros?
                                             suma=suma+num[i];
                                }
       media=suma/n_numeros;
       std::cout<<"\nMEDIA: "<<media;
       std::cout<<"\nToca cualquier tecla para salir";
       std::cin>>salir;
       return 0;       
}
