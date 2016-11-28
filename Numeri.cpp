#include <iostream>
using namespace std;

int Input(){
cout << "Dammi un numero";
int n;
cin >> n;
return n; 



}
int Scorpora(int N){
	int S=N/10;
	
	return S;
	
	
}
void Unita(int N){
	switch(N){
		
		case 100:
		break;
		
		case 200:
		break;
	}
	
}
void Controlla(int N){
switch(N){

case 1:
cout << "uno";
break;

case 2:
cout << "due";
break;

case 3:
cout << "tre";
break;

case 4:
cout << "quattro";
break;

case 5:
cout << "cinque";
break;

case 6:
cout << "sei";
break;

case 7:
cout << "sette";
break;

case 8:
cout << "otto";
break;

case 9:
cout << "nove";
break;

case 10:
cout << "dieci";
break;

case 11:
cout << "undici";
break;

case 12:
cout << "dodici";
break;

case 13:
cout << "tredici";
break;

case 14:
cout << "quattordici";
break;

case 15:
cout << "quindici";
break;

case 16:

break;

case 17:

break;

case 18:

break;

case 19:

break;

case 20:
cout << "venti";
break;

}
}
void Elabora(){





}



int main(){
int N= Input();


while(N!=0){
	if(N<=20){
     Controlla(N);
		break;
		
	}
	
	
	
	
	
	
	
}






}




