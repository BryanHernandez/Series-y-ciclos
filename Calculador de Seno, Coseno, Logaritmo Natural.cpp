//Calculadora de Fracciones a factorial

#include <iostream>
 #include <cstdlib>
 #include <stdio.h>
 #include <math.h>
using namespace std;
int main()
{
	int seleccion; 
	//Seno
	long long int i,j,a=3,n,fact=1; 
    long double seno;
    long double x;
    //coseno
    long double coseno = 1;
    //Logaritmo natural
    double count = 1, valorTotal = 0, it, l, z=1, powe = 1, y;

	
	do {
		
	cout<<("  Calculadora:  Seno,  Coseno  y  Logaritmo Natural ....")<<endl<<endl; 
	cout<<("Selecciona una opcion : ")<<endl<<endl;
	cout<<("1.-- Seno   :")<<endl;
	cout<<("2.-- Coseno :")<<endl;
	cout<<("3.-- Logaritmo Natural :")<<endl;
	cout<<("0.-- Salir del Programa :")<<endl<<endl;
	cout<<("____ Selecciona ______ :: ");
	cin>>seleccion;


	switch(seleccion) /* Usamos switch para diferentes casos */
 	{				
	case 1: //Seno
	cout<<("Escribe un numero :::::  ");
	cin>>x;
	cout<<"Escribe cantidad de terminos: ";
	cin>>n;
    
    seno=x;
	for ( i=1; i<=n ; i++){
        fact=1;
        //Factorial
            for (j=1 ; j<=a ; j++){ 
            fact=fact*j;   
       }
        if (i%2==0){
            seno=seno + (pow(x,a))/fact;
        }
		 else{
            seno=seno - pow(x,a)/fact;      
        }
		a=a+2;
        cout<<("El angulo del seno es : ")<<seno<<endl;
        return 0;
 	}
	break;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
	case 2://Coseno
	a = 2;
	cout<<(" Escribe un numero base :  ");
	cin>>x;
	cout<<" Escribe cantidad de terminos: ";
	cin>>n;
    //coseno = 1;
	for ( i=1; i<=n ; i++){
        fact=1;
        //Factorial
            for (j=1 ; j<=a ; j++){ 
            fact=fact*j;   
       }
        if (i%2==0){
            coseno = coseno + pow(x,a)/fact;
        }
		 else{
            coseno = coseno - pow(x,a)/fact;      
        }
		a=a+2;
        cout<<(" El angulo del Coseno es :::: ")<< coseno <<endl;
        return 0;
 	}
	break;
	
////////////////////////////////////////////////////////////////////////////////////////////
	
	case 3: //Logaritmo Natural
	cout << " Inserte numero base ::::: ";
    cin >> it;
    cout << "X = ";
    cin >> l;
    
    while (count <= it)
    {
        for (int i = 0; i < powe; i++) {
            z *= (l - 1) / (l + 1);
        }
        y = (1 / powe)*z;

        valorTotal = valorTotal + y;
        powe = powe + 2;
        count++;
    }
    cout << " El numero factorial es  :::" << 2*valorTotal << endl;
	}	
		break;
	}while(seleccion != 0);
  }
 

	


