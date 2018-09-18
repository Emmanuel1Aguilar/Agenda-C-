#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    int que;
    string quem;
    ofstream escritura;
    escritura.open("Copia.txt");
    do{
    cout<<" Que desea hacer? "<<endl;
    cout<<"1- Ingresar nuevo... "<<endl;
    cout<<"2- Mostrar todo... "<<endl;
    cout<<"3- Mostrar uno... "<<endl;
    cin>>que;
    system("cls");
    if(que==1){
    string n[10], total;
    ofstream escritura;
    string s7(1,'\n');
    string s8(1,' ');
    escritura.open("Agenda.txt",ios::app);
                              cout<<"Ingresa su nombre "<<endl;
                              cin>>n[0];
                              cout<<"Ingresa su apellido paterno "<<endl;
                              cin>>n[1];
                              cout<<"Ingresa su apellido materno "<<endl;
                              cin>>n[2];
                              cout<<"Ingresa su colonia"<<endl;
                              cin>>n[3];
                              cout<<"Ingresa su email "<<endl;
                              cin>>n[5];
                              cout<<"Ingresa su numero telefonico "<<endl;
                              cin>>n[6];
                              cout<<"Ingresa su fecha de nacimiento separada por un /"<<endl;
                              cin>>n[7];
                              total=s7+n[0]+s8+n[1]+s8+n[2]+s8+s8+s8+n[7]+s8+n[6]+s8+n[5]+s8+n[3];
                              escritura<<total;
                              cout<<"Se a agregado a la siguiente persona "<<endl;
                              cout<<": "<<total<<endl;
         }
         else if(que==2){
     string palabra[100];
     int m=0;
     ifstream lectura;
     lectura.open("Agenda.txt");
               while(!lectura.eof()){
                      getline(lectura,palabra[m]);
                      escritura<<palabra[m]<<endl;
                      m++;
               }
               cout<<"Se guardo la informacion buscada en Copia.txt "<<endl;
               }
     else{
     string palabra2[1000], busco;
     int z=0, q=0;
     ifstream lectura2;
     lectura2.open("Agenda.txt");
               while(!lectura2.eof()){
               lectura2>>palabra2[z];
               z++;
               }
               cout<<"Como se llama? "<<endl;
               cin>>busco;
               int k=0;
               for(int g=0;g<=z;g++){
               q=q+1;
               if(busco==palabra2[g]){
               k=k+1;
               cout<<k<<"...";
               escritura<<k<<endl;
               for(int a=0;a<8;a++){
               cout<<palabra2[g+a]<<" "<<endl;
               escritura<<palabra2[g+a]<<endl;
               }
               cout<<"Se guardo la informacion buscada en Copia.txt "<<endl;
                    }
               }   
               z=z+1;
               q=q-k;
                              if(q==z){
                              cout<<"No encontrado"<<endl;
                              }       
                              }
               cout<<"Quieres hacer algo mas? "<<endl;
               cin>>quem;
               system("cls"); 
               }while(quem=="si");
    getch();
    return 0;
} 
