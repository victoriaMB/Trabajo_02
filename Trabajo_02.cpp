#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    if(argc!=1){
      aux2=argv[3];
    
      if((argv[1][0]!='-')/*||(sizeof(*aux2!=10))*/){
          return EXIT_SUCCESS;
      };
    
      switch (argv[1][1]){
             
         case 's':     
                       break;
                       
         case 'a':     
                       break;
              
         case 'v':     integrantes();
                       break;
      }
    }else{    
          cout<<"\nSeleccione alternativa :\n 1.- Consultar datos de fecha especifica (YYYY-MM-DD).";
          cout<<"\n 2.- Consultar Integrantes.\n\nIngrese opcion y 'ENTER' : ";
          cin>>aux[0];
      
          switch(aux[0]){
               case 1:     cout<<"\n\n****************************************************************";
                           
                             break;
                            
               case 2:     integrantes();
                             break;
              
               default :     cout<<"\nError al ingresar opcion en menu, Adios.\n\n";  
                            break;                     
               };
    };
    system("PAUSE");
    return EXIT_SUCCESS;
}
