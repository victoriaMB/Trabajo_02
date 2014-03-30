//#include <cstdlib>
#include <iostream>
#include <fstream>
//#include <cstring>

using namespace std;

void integrantes(){
     cout<<"\n\n - Integramtes :\nVICTORIA MUÑOZ.\nDANIEL LEIVA.\nFABIAN CORDOVEZ\n\n";
}

int main(int argc, char *argv[])
{
    int valida_case;
    char *captura_arg;
    char *escrito;
    //ifstream fe(captura_arg);
    
    captura_arg=argv[3];
    
    //strcpy(escrito,fe);
    //fe >> escrito;
    //fe.close();
    //cout<<"asd"<<escrito<<endl;
    
    if(argc!=1){
    
      if((argv[1][0]!='-')){
          return EXIT_SUCCESS;
      };
    
      switch (argv[1][1]){
             
         case 's':     cout<<"ok"<<endl;
                       system("PAUSE");
                       //strcpy(captura_arg,argv[3]);
                       //captura_arg = new char(argv[3]);
                       
                       cout<<"ok"<<captura_arg<<endl;
                       break;
                       
         case 'a':     cout<<"asd";
                       break;
              
         case 'v':     integrantes();
                       break;
      }
    }else{    
          cout<<"\nSeleccione alternativa :\n 1.- Consultar datos de fecha especifica (YYYY-MM-DD).";
          cout<<"\n 2.- Consultar Integrantes.\n\nIngrese opcion y 'ENTER' : ";
          cin>>valida_case;
      
          switch(valida_case){
               case 1:     cout<<"\n\n****************************************************************";
                           break;
                            
               case 2:     integrantes();
                           break;
              
               default :   cout<<"\nError al ingresar opcion en menu, Adios.\n\n";  
                           break;                     
          };
    };
    //fe.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}
