//>>>PROG2 GUIDE<<<

//This is a console application program for resolving the coding exercises from prog2.
//The prototypes and functions are grouped in categories for a better understanding and "easier
//go through" the code.

//The index of prototypes and dev of every function is as follows:
//>INCLUDES AND NAMESPACES
//>PROTOTYPES
//|-SUBMENUES
//|-MAIN MENU
//|-VECTOR RELATED FUNCTIONS
//|-INITIALIZATIONS AND DATA LOADING
//|--Vector related inits and loads
//|--Matrix related inits and loads
//|-NO USAGE YET
//>DISPLAY
//|--Vector/Matrix related screen printing.
//|--Menu and submenues screen printings.
//>INTERACTIONS
//|--Asks the users for info/actions.
//>INTERFACES
//--User interaction between function executions and screen printings.
//>MAIN
//>FUNCTIONS DEVELOPMENT
//|-EXERCISE RESOLUTIONS

//INCLUDES AND NAMESPACES
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

//PROTOTYPES
//SUBMENUES
void interface_subMenuVectores();
void display_subMenuVectores();
void interface_subMenuMatrixes();
void display_subMenuMatrixes();
//MAIN MENU
void display_mainMenu();
void interface_mainMenu();
//VECTOR RELATED OPTIONS DECLARATION
void interface_optionA();
void interface_optionB();
void interface_optionC();
void interface_optionD();
void interface_optionE();
void interface_optionF();
void interface_optionG();
//INITS AND LOADINGS
//--Vectors inits and loads
int func_vectorCreation();
void func_chargeVector(int *v, int tam);
//--Matrices inits and loads
int func_matrixCreation();
void func_chargeMatrix(int **m, int f, int c);
//EXECUTION OF OPTIONS AND RESOLUTIONS
//--Vector related
int func_exerciseOne(int *v, int tam);
int func_exerciseTwo(int *v, int tam);
int func_exerciseThree(int *v, int tam);
int func_exerciseFour(int *v, int tam);
bool func_exerciseFive(int *v, int tam, int find);
int func_exerciseSix(int *v, int tam, int find);
int func_exerciseSeven(int *v, int tam, int find);
//--Matrix related
int func_matrixExerciseOne(int **m, int r, int c, int maxinfile);

//NO USAGE YET

//--Display SUB MENU VECTORES
void display_subMenuVectores(){
	system("clear");
	cout<<"MAIN MENU"<<endl;
	cout<<"OPCION A "<<endl;
	cout<<"OPCION B"<<endl;
	cout<<"OPCION C"<<endl;
	cout<<"OPCION D"<<endl;
	cout<<"OPCION E"<<endl;
	cout<<"OPCION F"<<endl;
	cout<<"OPCION G"<<endl;	
	cout<<"OPCION S - Salir"<<endl;
	cout<<"Ingrese una opcion:"<<endl;
}

//--Display SUB MENU MATRICES
void display_subMenuMatrixes(){
	system("clear");
	cout<<"MAIN MENU"<<endl;
	cout<<"OPCION A "<<endl;
	cout<<"OPCION B"<<endl;
	cout<<"OPCION C"<<endl;
	cout<<"OPCION D"<<endl;
	cout<<"OPCION E"<<endl;
	cout<<"OPCION S - Salir"<<endl;
	cout<<"Ingrese una opcion:"<<endl;
}



//--Display MAIN MENU
void display_mainMenu(){
	system("clear");
	cout<<"MAIN MENU"<<endl;
	cout<<"OPCION A - Vectores"<<endl;
	cout<<"OPCION B - Matrices"<<endl;
	cout<<"OPCION S - Salir"<<endl;
	cout<<"Ingrese una opcion:"<<endl;
}

//--Interactions
void interaction_pressEnter(){
	cout<<"Presione ENTER para continuar"<<endl;
	cin.ignore();
	cin.get();
	system("clear");
}

//--Interfaces
//---Interface-Option A execution
void interface_optionA(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int min=func_exerciseOne(v, sizeof(v)/sizeof(*v));
	cout<<"El minimo numero ingresado fue el: "<<min<<endl;
	interaction_pressEnter();
}

//---Interface-Option B execution
void interface_optionB(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int max=func_exerciseTwo(v, sizeof(v)/sizeof(*v));
	cout<<"El maximo numero ingresado fue el: "<<max<<endl;
	interaction_pressEnter();
}

//---Interface-Option C execution
void interface_optionC(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int pos=func_exerciseThree(v, sizeof(v)/sizeof(*v));
	cout<<"El minimo numero ingresado esta en la posicion: "<<pos<<" del vector"<<endl;
	interaction_pressEnter();
}

//---Interface-Option D execution
void interface_optionD(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int pos=func_exerciseFour(v, sizeof(v)/sizeof(*v));
	cout<<"El maximo numero ingresado esta en la posicion: "<<pos<<" del vector"<<endl;
	interaction_pressEnter();
}

//---Interface-Option E execution
void interface_optionE(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int find=-1;
	cout<<"Ingrese el numero a encontrar en el vector:"<<endl;
	cin>>find;
	bool found=func_exerciseFive(v, sizeof(v)/sizeof(*v), find);
	cout<<"El numero "<<find;
	if(found){
		cout<<" no ";
	}
	cout<<" se encuentra en el vector"<<endl;
	interaction_pressEnter();
}

//---Interface-Option F execution
void interface_optionF(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int find=-1;
	cout<<"Ingrese el numero a encontrar en el vector:"<<endl;
	cin>>find;
	int found=func_exerciseSix(v, sizeof(v)/sizeof(*v), find);
	cout<<"El numero "<<find;
	if(found==-1){
		cout<<" no se encuentra en el vector.";
	}
	else{
		cout<<" se encuentra en la posicion "<<found<<" del vector."<<endl;
	}
	interaction_pressEnter();
}

//---Interface-Option G execution
void interface_optionG(){
	int tam=0;
	cout<<"Ingrese tamano:"<<endl;
	cin>>tam;
	int v[tam];
	func_chargeVector(v, tam);
	int find=-1;
	cout<<"Ingrese el numero a encontrar en el vector:"<<endl;
	cin>>find;
	int timesfound=func_exerciseSeven(v, sizeof(v)/sizeof(*v), find);
	cout<<"El numero "<<find;
	if(timesfound==-1){
		cout<<" no se encuentra en el vector.";
	}
	else{
		cout<<" se repite "<<timesfound+1<<" veces en el vector."<<endl;
	}
	interaction_pressEnter();
}

//---Interface Matrix related
//---Interface-option A - Execution
void interface_matrixOptionA(){
	int r,c =0;
	cout<<"Ingrese la cantidad de filas de la matriz:"<<endl;
	cin>>r;
	cout<<"Ingrese la cantidad de columnas de la matriz:"<<endl;
	cin>>c;
	int m[r][c];
	func_chargeMatrix(m, r, c);
}

//--Sub Menu ARRAYS
void interface_subMenuVectores(){
	bool exit=false;
	char opc='a';
	while(!exit){
	display_subMenuVectores();
	cin>>opc;
	switch(opc){
		case'a':
		case'A':
			interface_optionA();
		break;
		case'b':
		case'B':
			interface_optionB();
		break;
		case'c':
		case'C':
			interface_optionC();
		break;
		case'd':
		case'D':
			interface_optionD();
		break;
		case'e':
		case'E':
			interface_optionE();
		break;
		case'f':
		case'F':
			interface_optionF();
		break;
		case'g':
		case'G':
			interface_optionG();
		break;
		case's':
		case'S':
			cout<<"Regresar al menu anterior"<<endl;
			exit=true;
		break;
		default:
			cout<<"La opcion seleccionada no es valida"<<endl;
			interaction_pressEnter();
		break;
		}
	}
}

//--Sub Menu Matrixes
void interface_subMenuMatrixes(){
	bool exit=false;
	char opc='a';
	while(!exit){
	display_subMenuMatrixes();
	cin>>opc;
		switch(opc){
		case'a':
		case'A':
		break;
		case'b':
		case'B':
		break;
		case's':
		case'S':
			cout<<"Regresal al menu anterior"<<endl;
			exit=true;
		break;
		default:
			cout<<"La opcion seleccionada no es valida"<<endl;
			interaction_pressEnter();
		break;
		}
}
}

//--Main menu option usage and user execution of the options
void interface_mainMenu(){
	bool exit=false;
	char opc='a';
	while(!exit){
	display_mainMenu();
	cin>>opc;
		switch(opc){
		case'a':
		case'A':
			interface_subMenuVectores();
		break;
		case'b':
		case'B':
			interface_subMenuMatrixes();
		break;
		case's':
		case'S':
			cout<<"ByeBye"<<endl;
			exit=true;
		break;
		default:
			cout<<"La opcion seleccionada no es valida"<<endl;
			interaction_pressEnter();
		break;
		}
	}
}

//DEF FUNCTIONS
//--CHARGE VECTOR - Asks for vector and it's size and loads it with user inputs
void func_chargeVector(int *v, int tam){
	for(int i=0; i<tam; i++){
		cout<<"Ingrese un número para la posición "<<i<<" del vector:"<<endl;
		int n;
		cin>>n;
			*(v+i)=n;
	}
}

//--CHARGE MATRIX - Asks for matrix and it's size and loads it with user inputs
void func_chargeMatrix(int **m, int r, int c){
	for(int i=0; i<r; i++){
		for(int x=0; i<c; x++){
			cout<<"Ingrese un número para la fila"<<i<<", columna "<<c<<" del vector:"<<endl;
			int n;
			cin>>n;
				*(*(m+i)+x)=n;
		}
	}
}

//--Resolutions
//--Resolutions->Vector related
//--Resolution->ExerciseOne
int func_exerciseOne(int *v, int tam){
	int min=99999999;
	for(int i=0; i<tam; i++){
		if(*(v+i)<min){
			min=*(v+i);	
		}
	}
return min;
}

//--Resolution->ExerciseTwo
int func_exerciseTwo(int *v, int tam){
	int max=-999999;
	for(int i=0; i<tam; i++){
		if(*(v+i)>max){
			max=*(v+i);	
		}
	}
return max;
}

//--Resolution->ExerciseThree
int func_exerciseThree(int *v, int tam){
	int min=999999;
	int pos=-1;
	for(int i=0; i<tam; i++){
		if(*(v+i)<min){
			min=*(v+i);
			pos=i;
		}
	}
return pos;
}

//--Resolution->ExerciseFour
int func_exerciseFour(int *v, int tam){
	int max=-999999;
	int pos=-1;
	for(int i=0; i<tam; i++){
		if(*(v+i)>max){
			max=*(v+i);
			pos=i;
		}
	}
return pos;
}

//--Resolution->ExerciseFive
bool func_exerciseFive(int *v, int tam, int wanted){
	bool found=false;
	for(int i=0; i<tam; i++){
		if(*(v+i)==wanted)
			found=true;
			break;
	}
return found;
}

//--Resolution->ExerciseSix
int func_exerciseSix(int *v, int tam, int wanted){
	int pos=-1;
	for(int i=0; i<tam; i++){
		if(*(v+i)==wanted){
			pos=i;
			break;
		}
	}
return pos;
}

//--Resolution->ExerciseSeven
int func_exerciseSeven(int *v, int tam, int wanted){
	int counter=-1;
	for(int i=0; i<tam; i++){
		if(*(v+i)==wanted){
			counter++;
		}
	}
return counter;
}

//--Resolution--Matrix related
//--Resolution->ExerciseOne
int func_matrixExerciseOne(int **m, int r, int c, int desiredrow){
	int max=-999999;
		for(int i=0; i<c; i++){
			if(*(*(m+desiredrow)+i)>max){max=*(*(m+desiredrow)+c);}
		}
return max;
}

int main(){
	interface_mainMenu();
return 0;
}
