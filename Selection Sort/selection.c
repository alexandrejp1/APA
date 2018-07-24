#include<stdio.h>
#include<stdlib.h>

#define MAX 10

void SelectionShort(int ar[MAX]){

	int min;
	int i,j,aux;


	for(i=0;i<MAX-1;i++){    //o primeiro  começa sendo o primero 
		min = i;

		for(j=i+1;j<MAX;j++){ // procura o minimo de fato
			if(ar[j] < ar[min]){
				min = j;
			}
		}
		if(i != min){ // encontrou o minimo menor que o atual
			aux = ar[i];
			ar[i] = ar[min];
			ar[min] = aux;
		}
	}

}



int main (){


	//testando
}
