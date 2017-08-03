#include "Test.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



//Desrefencia ptr (dado) y devuelve su valor

int obtenerValor(int *ptr)

{
    *ptr;

    return *ptr;
}



//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos

int sumar(int* a, int* b)

{
    *a;
    *b;

    return *a + *b;

}



//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria

bool compararApuntadores(string *a, string *b) {

    if (a == b) {

        return true;
    } else {

        return false;

    }
}


//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false

bool comparar(string *a, string *b)

{
    *a;
    *b;

    if(*a == *b) {
        return true;

    }
    return false;
}



//Desreferencia a (dado) y devuelve su primera letra

char getPrimeraLetra(string* a) {

	string word =  *a;
    char x = word[0];
    return x;

}


//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false

//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo

//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos

bool esPalindromo(string* a) {

    string word = *a;
    string alreves = "";

    for(int i = 0; i< word.length(); i--){

        alreves += word[i];
    }
    return word == alreves;

    }



//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente

int getExponente(int* base, int* exponente)

{
    *base;
    *exponente;

    return pow(*base,*exponente);

}



int main ()

{

    //Funcion evaluadora

    evaluar();

    return 0;

}