#include<iostream>
int main(){
    //Este programa cuenta hasta 10
    int i;
    char salir;
    //Los for son un poco distintos
    //i++ es lo mismo que i=i+1
    for(i=10;i>0;i--){
    std::cout<<i;
    std::cout<<"\n"; 
    }                     
    std::cout<<"Pulsa una tecla para salir";
    std::cin>>salir;
    return 0;
}
