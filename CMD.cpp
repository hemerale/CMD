/*
	Created By Hemerale Back - 2022
										*/

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
using namespace std;

char ferma, ol;
string cmd, b;
double stop=0, i, a, somma=0, c;
	
void help(){
	cout<<endl<<"Ecco tutti i comandi:"<<endl;
	cout<<"media : calcola la media dei numeri da te inseriti"<<endl;
	cout<<"angoli : calcola la tipologia dell'angolo"<<endl;
	cout<<"lorem : manda la copypasta di lorem impusm"<<endl;
	cout<<"software/start : fa aprire dei software"<<endl;
	cout<<"calculator : permette di eseguire calcoli"<<endl;
	cout<<"exit : spegne il programma"<<endl;
	cout<<endl;
}

void calculator(){
	
    cout<<"Inserisci quale operazione vuoi eseguire [+,-,*,/,^,r] "<<endl<<"-->";
	cin>>ol;

    while(ol != '+' && ol != '-' && ol != '/' && ol != '*' && ol != '^' && ol != 'r')
    {
    cout<<endl<<"L'operatore da te inserito non e' valido "<<endl<<"-->";
    cin>>ol;
    }
    

    if (ol != '^' && ol != 'r')
    {
        cout<<endl<<"Inserisci il primo numero"<<endl<<"-->";
        cin>>a;

        cout<<endl<<"Inserisci il secondo numero"<<endl<<"-->";
        cin>>c;
    }
    else if (ol == 'r')
	{
    	cout<<endl<<"Inserisci il numero di cui vuoi conoscerne la radice quadrata"<<endl<<"-->";
    	cin>>a;
	}
    else if (ol == '^')
    {
        cout<<endl<<"Inserisci il numero"<<endl<<"-->";
        cin>>a;

        cout<<endl<<"Inserisci l'esponente"<<endl<<"-->";
        cin>>c;
		
		i = 1;
        for(somma = a;i!=c;i++){
        
        somma *= a;
        }
    }

	cout<<endl;
	
    switch (ol)
    {
        case '+':cout<<a << " + " << c << " = " << (a+c)<<endl; break;
        case '-':cout<<a << " - " << c << " = " << (a-c)<<endl; break;
        case '*':cout<<a << " * " << c << " = " << (a*c)<<endl; break;
        case '/':cout<<a << " / " << c << " = " << (a/c)<<endl; break;
        case '^':cout<<a << "^" << c << " = " << somma <<endl; break;
        case 'r':cout<<"√"<<a<<" = "<<sqrt(a)<<endl; break;
    };
}

void software(){
	cout<<endl<<"Ecco una lista di Software! Scrivine il nome per avviarli"<<endl;
	cout<<"vscode, supremo"<<endl;
	while (stop == 0){
		cout<<"--> ";
		cin>>b;
		if (b == "exit"){
			exit(0);
		}
		else if(b == "vscode"){
			system("code");
			exit(0);
		}
		else{
			cout<<"Comando sbagliato, vuoi uscire?[y/n]: ";
			cin>>ferma;
			if (ferma == 'y'){
				break;
			}
		}
	}
}

void media(){
	cout<<endl<<"Inserisci il numero di numeri di cui vuoi farne la media: ";
	cin>>stop;
	cout<<endl;
			
		while (stop != i){
	
			cout<<"["<<i+1<<"/"<<stop<<"] Inserisci un numero: ";
			cin>>a;
					
			somma+= a;
			i++;
		}
		somma = somma/stop;
		cout<< "La media e' di: "<<somma<<endl<<endl;
					
		stop = 0;
		somma = 0;
		a = 0;
		i = 0;
}

void lorem(){
	cout<<endl<<"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin pellentesque ante turpis, vitae gravida massa bibendum vitae. Nam egestas gravida sem ac venenatis. Sed facilisis a magna non lobortis. In hac habitasse platea dictumst. Proin sed egestas lectus, ac aliquam diam. Nulla sed sapien porttitor, elementum erat nec, luctus lorem. Donec accumsan, ex sit amet aliquet aliquam, sem tellus ornare justo, vel tempor libero odio eu justo. Ut in nisi et nunc tincidunt consequat."<<endl;
}

void angoli(){
	
	while(stop == 0){
				
		stop = 1;
		cout<<endl<<"Inserisci la misura dell'angolo: ";
		cin>>somma;
			
		if(somma == 90){
			cout<<"L'angolo e' retto"<<endl<<endl;
		}
		else if(somma < 90 && somma > 0){
			cout <<"L'angolo e' acuto"<<endl<<endl;
		}
		else if(somma > 90 && somma < 361){
			cout<<"L'angolo e' ottuso"<<endl<<endl;
		}
		else if(somma == 0){
			cout<<"L'angolo e' nullo"<<endl<<endl;
		}
		else{
			cout<<"Le misure sono sbagliate"<<endl<<endl;
			stop = 0;
		};
	}
		stop = 0;	
	}

int main(){
	
	cout<<"Benvenuto nel sistema di CMD di Hemerale Back"<<endl;
	cout<<"Scrivi 'help' per ottenere una lista di comandi"<<endl<<endl;
	
	while (true){
		cout<<"Inserisci il comando: ";
		cin>>cmd;
		
		if(cmd == "help"){
			help();
		}
		else if (cmd == "media"){
			media();
		}
		else if(cmd == "angoli"){
			angoli();
		}
		else if(cmd == "exit"){
			exit(0);
		}
		else if(cmd == "lorem"){
			lorem();
		}
		else if(cmd == "software" ||  cmd == "start"){
			software();
		}
		else if(cmd == "start-vscode"){
			system("code");
			exit(0);
		}
		else if(cmd == "calculator"){
			calculator();
		}
		else{
			cout<<"Comando non riconosciuto"<<endl<<endl;
		}
	};
};
