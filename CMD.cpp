/*
	Created By Hemerale Back - 2022
						*/

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
using namespace std;

char ferma, ol;
string cmd, b;
double stop=0, i, a, somma=0, c;

// ========== < COMANDI > ========== 
void help(){

	system("cls");

	cout<<"Ecco tutti i comandi:"<<endl;
	cout<<"media : calcola la media dei numeri da te inseriti"<<endl;
	cout<<"angoli : calcola la tipologia dell'angolo"<<endl;
	cout<<"lorem : manda la copypasta di lorem impusm"<<endl;
	cout<<"software/start : fa aprire dei software"<<endl;
	cout<<"calculator : permette di eseguire calcoli"<<endl;
	cout<<"exit : spegne il programma"<<endl;
	cout<<endl;
}

void calculator(){

	system("cls");
	
    cout<<"Inserisci quale operazione vuoi eseguire [+,-,*,/,^,r] "<<endl<<"-->";
	cin>>ol;

    while(ol != '+' && ol != '-' && ol != '/' && ol != '*' && ol != '^' && ol != 'r'){
    cout<<endl<<"L'operatore da te inserito non e' valido "<<endl<<"-->";
    cin>>ol;
    }
    
    if (ol != '^' && ol != 'r'){ //input normale
        cout<<endl<<"Inserisci il primo numero"<<endl<<"-->";
        cin>>a;

        cout<<endl<<"Inserisci il secondo numero"<<endl<<"-->";
        cin>>c;
    }
    else if (ol == 'r'){ //input radice quadrata
    	cout<<endl<<"Inserisci il numero di cui vuoi conoscerne la radice quadrata"<<endl<<"-->";
    	cin>>a;
	}
    else if (ol == '^'){ //input potenza
        cout<<endl<<"Inserisci il numero"<<endl<<"-->";
        cin>>a;

        cout<<endl<<"Inserisci l'esponente"<<endl<<"-->";
        cin>>c;
		
        for(somma = a, i = 1;i!=c;i++)
        	somma *= a;

    }

	cout<<endl;
	
    switch (ol){ //output risultati
        case '+':cout<<a << " + " << c << " = " << (a+c)<<endl; break;
        case '-':cout<<a << " - " << c << " = " << (a-c)<<endl; break;
        case '*':cout<<a << " * " << c << " = " << (a*c)<<endl; break;
        case '/':cout<<a << " / " << c << " = " << (a/c)<<endl; break;
        case '^':cout<<a << "^" << c << " = " << somma <<endl; break;
        case 'r':cout<<"v"<<a<<" = "<<sqrt(a)<<endl; break;
    };
}

void software(){

	system("cls");

	cout<<"Ecco una lista di Software! Scrivine il nome per avviarli"<<endl;
	cout<<"vscode"<<endl;

	while (stop == 0){

		cout<<"-->";
		cin>>b;

		if (b == "exit") //spegne la CMD
			exit(0);
		else if(b == "vscode"){ //apre VS Code
			system("code");
			exit(0);
		}
		else{
			cout<<"Comando sbagliato, vuoi uscire?[y/n]: ";
			cin>>ferma;

			if (ferma == 'y')
				break;
		}
	}
}

void media(){ //Media Aritmetica

	system("cls");

	cout<<"Inserisci il numero di numeri di cui vuoi farne la media"<<endl<<"-->";
	cin>>stop;
	cout<<endl;
			
		for(i = 0; i < stop; somma+=a, i++){
			cout<<"["<<i+1<<"/"<<stop<<"] Inserisci un numero: ";
			cin>>a;
		}

		cout<< "La media e' di: "<<somma/stop<<endl<<endl;
					
		stop = 0;
		somma = 0;
		a = 0;
		i = 0;

}

void lorem(){

	system("cls");

	cout<<"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin pellentesque ante turpis, vitae gravida massa bibendum vitae. Nam egestas gravida sem ac venenatis. Sed facilisis a magna non lobortis. In hac habitasse platea dictumst. Proin sed egestas lectus, ac aliquam diam. Nulla sed sapien porttitor, elementum erat nec, luctus lorem. Donec accumsan, ex sit amet aliquet aliquam, sem tellus ornare justo, vel tempor libero odio eu justo. Ut in nisi et nunc tincidunt consequat."<<endl<<endl;
}

void angoli(){

	system("cls");
	
	while(stop == 0){
				
		stop = 1;
		cout<<"Inserisci la misura dell'angolo: ";
		cin>>somma;
			
		if(somma == 90)
			cout<<"L'angolo e' retto"<<endl<<endl;
		else if(somma < 90 && somma > 0)
			cout <<"L'angolo e' acuto"<<endl<<endl;
		else if(somma > 90 && somma < 361)
			cout<<"L'angolo e' ottuso"<<endl<<endl;
		else if(somma == 0)
			cout<<"L'angolo e' nullo"<<endl<<endl;
		else{
			cout<<"Le misure sono sbagliate"<<endl<<endl;
			stop = 0;
		};
	}
		stop = 0;	
	}

// ========== < MAIN > ========== 

int main(){

	//Ottiene l'orario
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	cout<<"Benvenuto ";
    system("echo %username%"); 
    
    if(ltm->tm_min < 10)
        cout<<"Attualmente sono le "<< ltm->tm_hour <<":0"<< ltm->tm_min <<endl;
    else
        cout<<"Attualmente sono le "<< ltm->tm_hour <<":"<< ltm->tm_min <<endl;
    
	cout<<"Scrivi 'help' per ottenere una lista di comandi"<<endl<<endl;
	
	while (true){
		cout<<"Inserisci il comando"<<endl<<"-->";
		cin>>cmd;
		
		if(cmd == "help")
			help();
		else if (cmd == "media")
			media();
		else if(cmd == "angoli")
			angoli();
		else if(cmd == "exit")
			exit(0);
		else if(cmd == "lorem")
			lorem();
		else if(cmd == "software" ||  cmd == "start")
			software();
		else if(cmd == "start-vscode"){
			system("code");
			exit(0);
		}
		else if(cmd == "calculator")
			calculator();
		else
			cout<<"Comando non riconosciuto"<<endl<<endl;
	};
};
