#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    char matriz[3][3];
    int fil,col;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semilita);
    for(fil=0;fil<3;fil++){
                           for(col=0;col<3;col++){
                                                  matriz[fil][col]=rand()%25+65;
                                                  std::cout<<matriz[fil][col];
                                                  }
                                                  std::cout<<"\n"
                           }
                           std::cout<<"\nToca cualquier tecla"
    }
