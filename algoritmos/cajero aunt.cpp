#include<iostream> 
#include<conio.h>
using namespace std; 
class Cajero
{
	private: 
        double Saldo; 
		double Depositar; 
		double Retirar; 
		int Opcion;
	public: 
	    Cajero(double saldo=0,double depositar=0,double retirar=0,int opcion=0); 
		double saldo(double retiro,double deposito,double saldot); 
		double deposit(double saldot); 
		double retiro(double saldot); 
		double Option(int optionl,double saldot); 
		double saldot(void); double transferencia(double saldot); 
		double pagserv(double saldot); 
		double reccel(double saldot); 
		void Ejecutar (void); 
};//fin de La cLase 
Cajero::Cajero(double saldo,double depositar,double retirar,int opcion):Saldo(saldo),Depositar(depositar),Retirar(retirar),Opcion(opcion) 
{
 }//fin del. constructor 
double Cajero::saldo(double retiro,double deposito,double saldot)
{
	system("cls");
	saldot=saldot-deposito-retiro;
	return saldot;
}//fin de saldo
double Cajero::deposit(double saldot)
{
	double dep=0;
	char sn;
	do
	{
LDeposito:
	system("cls");
	cout<<"Ingrese cantidad a Depositar: "; 
	cin>>dep; 
	
	while(dep<=0) 
	{
		cout<<"Desea ingresar un valor valido s=si n=no: "; 
		cin>>sn;
		
	//	system("cls");
		
		if(sn=='S' || sn=='s') 
		    goto LDeposito;
		else 
		    exit(0);	
	}
	saldot=saldo(0,dep,saldot);
	cout<<"Desea realizar otro deposito s=si n=no: ";cin>>sn;
	}while(sn=='s'||sn=='S'); 
return saldot;//fin de deposit 	
}
double Cajero::retiro(double saldot) 
{
	double retir=0;
	    char sn;
		system("cls");
		 if (saldot==0)
		 {cout<<"Ud. no cuenta con saldo \n";
		     cout<<"Desea realizar otra operacion s/S n/N: ";cin>>sn;
		     if(sn=='S'||sn=='s')
		 	 {
			 system("cls");
			 Ejecutar();
			 }
		     else 
			 exit(0);
		}
		do
		{
			LRetir: 
			system("cls");
			cout<<"Ingrese cantidad a Retirar: ";
			cin>>retir;
			while(saldot<retir)
			{
				cout<<"Ud. no cuenta con saldo suficiente para hacer ese retiro\n"; 
				goto reintentar;
			}
			while(retir<=0) 
			{ 
			reintentar: 
			    cout<<"Desea ingresar un valor valido s=si n=no: "; 
				cin>>sn; 
				if(sn=='S'||sn=='s') 
				   goto LRetir; 
				   else  
				       exit(0); 
		    }
		    saldot=saldo(retir,0,saldot); 
			cout<<"Desea realizar otro retiro s=si n=no: : ";cin>>sn;
			}while(sn=='s'||sn=='S'); 
return saldot; 
} 
double Cajero::Option(int optionl,double saldot) 
{ 
switch(optionl) 
    {
	case 1:saldot=deposit(saldot);break; 
	case 2:saldot=retiro(saldot);break; 
	case 3:saldot=transferencia(saldot);break; 
	case 4:saldot=pagserv(saldot);break; 
	case 5:saldot=reccel(saldot);break; 
	case 6: { 
	        saldot=saldo(0,0,saldot); 
         	cout<<"Usted cuenta con :"<<saldot<<" pesos\n"; 
			 }break; 
	case 7:{system("cls");cout<<"Cerrando Sistema...¡GRACIAS POR UTILIZAR NUESTRO CAJERO ATM!";exit(0);}break; 
    } 
return saldot; 
} 
double Cajero::transferencia(double saldot) 
{
	double trans=0; 
	    char sn; 
		double usseles; 
		system("cls"); 
		if (saldot==0) 
		{cout<<"Ud. no cuenta con saldo \n"; 
		    cout<<"Desea realizar otra operacion s=si n=no: ";cin>>sn; 
			if(sn=='S' || sn=='s')
			{
				system("cls");
				Ejecutar();
			} 
			else
			exit (0);
        }
        do 
		{
			LTrans: 
			system("cls");
			cout<<"Ingrese el numero de cuenta a la que desea transferir: "; 
			cin>>usseles; //flussetes=inutit, el, programa soto te pide esto para simular que e. 
			cout<<"Ingrese cantidad a Transferir: "; 
			cin>>trans; 
			while(saldot<trans) 
			{
				cout<<"Ud. no cuenta con saldo suficiente D  ra hacer la transferencia\n"; 
				goto reintentar; 
			}
			while(trans<=0)
			{
			reintentar: 
			cout<<"Desea ingresar un valor valido? s=si n=no: "; 
			cin>>sn; 
			if(sn=='S'||sn=='s') 
			    goto LTrans; 
				else 
                   exit(0); 
		    } 
		    saldot=saldo(trans,0,saldot);
			cout<<"Desea realizar otra transferencia? s=si n=no: ";cin>>sn;
        }while(sn=='S' || sn=='s'); 
return saldot; //fin de transferencia 
}   
double Cajero::pagserv(double saldot) 
{ 
double pago=0; 
        char sn; 
		int q,ser; 
		double useles; 
        system("cls"); 
		do{ 
		seleccc: 
		cout<<"Que servicio requeire pagar?"<<endl<<endl; 
		cout<<"1. Recibo de luz"<<endl; 
		cout<<"2. Recibo de telefono"<<endl; 
		cin>>q; 
        if(q==1) 
		    { 
			system("cls"); 
			cout<<"COMISION FEDERAL DE ELECTRICIDAD\n"; 
            cout<<"Ingrese su numero de servicio: ";
			cin>>useles; 
			} 
        if(q==2) 
		    { 
            system("cls"); 
			Selec: 
			cout<<"Seleccione su proveedor\n"; 
			cout<<"1. Telmex"<<endl; 
			cout<<"2. TotalPlay"<<endl; 
			cout<<"3. izzi"<<endl; 
			cout<<"4. Axtel"<<endl<<endl; 
			cin>>ser; 
            if(ser==1) 
			{ 
                cout<<"\t\tRecibo Telmex\t\t"<<endl;
				cout<<"Ingrese su telefono: "; 
				cin>>useles; 
			}
            if(ser==2)
		    { 
                cout<<"\t\tMi cuenta TotalPlay"<<endl; 
				cout<<"Ingrese su numero de cuenta: "; 
				cin>>useles; 
			}     
            if(ser=3) 
            {
            	cout<<"\t\tizzi"<<endl; 
				cout<<"Ingrese su telefono: ";
				cin>>useles; 
			}
			if(ser=4) 
			    cout<<"\t\tAxtel"<<endl; 
		     	cout<<"Ingrese su numero de cuenta: "; 
		    	cin>>useles; 
	    	}

            if(ser>4 || ser<1) 
			{ 
                cout<<"Intentelo de nuevo"<<endl<<endl; 
			    goto Selec;
			}
	  //  }
	    
        if(q>2 || q<1) {
		    cout<<"Intentelo de nuevo"<<endl<<endl; 
			goto seleccc; 
            } 
        if (saldot=0) 
		{cout<<"Ud. no cuenta con saldo \n"; 
		    cout<<"Desea realizar otra operacion 5:si Tizno: ";cin>>sn; 
			if(sn=='S' || sn=='s')
		    {
			system("cls"); 
			Ejecutar();
		    } 
			else 
			exit(0); 
    } 
     LPago: 
            cout<<"Ingrese cantidad a pagar: "; 
			cin>>pago; 
            while(saldot<pago) 
			{ 
			    cout<<"Ud. no cuenta con saldo suficiente para hacer el pago\n"; 
				goto reintentar;
            } 
            while(pago<=0) 
			{ 
			reintentar: 
			cout<<"Desea ingresar un valor valido? s=si n=no: "; 
			cin>>sn; 
			if(sn=='S' || sn=='s') 
			    goto LPago; 
			else 
			    exit(0); 
			} 
			saldot=saldo(pago,0,saldot); 
			cout<<"Desea realizar otro pago? s=si n=no: ";cin>>sn; 
			}while(sn=='s' || sn=='s'); 
return saldot;
} //fin de transferencia
	
double Cajero::reccel(double saldot) 
{ 
    double recarga=0; 
	    char sn; 
		int q,ser; 
		double useles; 
        system("cls"); 
		do{ 
		    Selec:
		    cout<<"Seleccione su compañia\n"; 
			cout<<"1. Telcel"<<endl; 
			cout<<"2. Movistar"<<endl; 
			cout<<"3. Unefon"<<endl; 
			cout<<"4. Nextel"<<endl<<endl; 
			cin>>ser; 
            if(ser==1) 
			{ 
                cout<<"\t\tTELCEL\t\t"<<endl;
				cout<<"Ingrese su numero de telefono: ";
				cin>>useles; 
				} 				
            if(ser==2) 
			{ 
                cout<<"\t\tMOVISTAR"<<endl; 
				cout<<"Ingrese su numero de telefono: ";
				cin>>useles; 
            } 
            if(ser==3) 
			{ 
                cout<<"\t\tUNEFON"<<endl; 
				cout<<"Ingrese su numero de telefono: ";
				cin>>useles; 
            } 
            if(ser==4) 
            {
                cout<<"\t NEXTEL "<<endl; 
				cout<<"Ingrese su numero de telefono: ";
				cin>>useles; 
            } 
            if(ser>4 || ser<1) 
			{  
			    cout<<"Intentelo de nuevo"<<endl<<endl; 
				goto Selec; 
            } 
        if (saldot==0) 
    	{cout<<"Ud. no cuenta con saldo \n"; 
		    cout<<"Desea realizar otra operacion s=si n=no: ";cin>>sn;
			if(sn=='S' || sn=='s') 
			{ 
			system("cls"); 
            Ejecutar();
			} 
			else 
			exit(0); 
	   	}
            LPago: 
            cout<<"Ingrese cantidad a abonar: "; 
			cin>>recarga; 
            while(saldot<recarga) 
			{ 
                cout<<"Ud. no cuenta con saldo suficiente para la recarga\n"; 
				goto reintentar; 
            } 
            while(recarga<=0){
            reintentar: 
			        cout<<"Desea ingresar un valor valido? s=si n=no: "; 
					cin>>sn; 
					if(sn=='S' || sn=='s') 
					    goto LPago; else exit(0); 
			}
            saldot=saldo(recarga,0,saldot); 
			cout<<"Desea realizar otra recarga? s=si n=no: ";cin>>sn; 
			}while(sn=='s' || sn=='S'); 
return saldot; 
} 
void Cajero::Ejecutar(void) 
{ 
    int opt; 
	char sn; 
	double saldot=0;
    do 
	{ 
	system("cls"); 
	cout<<"\t\t\tOperaciones Bancarias\n"; 
	cout<<"1. Deposito\n"; 
	cout<<"2. Retiro\n"; 
	cout<<"3. Transferencia\n"; 
	cout<<"4. Pago de servicios\n"; 
	cout<<"5. recarga a celular\n"; 
	cout<<"6. Saldo\n"; 
	cout<<"7. Salir\n\n"; 
    cout<<"Elija el numero de la opcion: "; 
	cin>>opt; 
	saldot=Option(opt,saldot); 
	cout<<"Desea continuar con otra operacion stsi nono: "; 
	cin>>sn; 
	}while(sn=='s' || sn=='S'); 
	system("cls"); 
	cout<<"Cerrando Sistema...¡GRACIAS POR UTILIZAR NUESTRO CAJERO ATM\n";exit(0); 
} 
int main(void) 
{ 
    Cajero C; 
	C.Ejecutar(); 
    return 0; 		
}
	
		
		
 
  

