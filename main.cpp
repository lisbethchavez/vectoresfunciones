#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;

//lectura del vector
void leervector(int num[],int tamanio)
{
    for(int i=0;i<tamanio;i++)
    {
        cout<<"Ingrese el elemento # "<<(i+1)<<" : ";
        cin>>num[i];
    }
}

// Impresion del vector
void imprime_vector(int vector[], int tamanio)
{
    cout<<endl<<endl<<"Elementos del vector";
    for(int i=0; i<tamanio;i++)
    {
        cout<<endl<<"Elemento # "<<(i+1)<<" : "<<vector[i];
    }
}
//Realizar la sumatoria de los elementos del vector
double sumatoriavector(int vector[],int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio;i++)
        suma+=vector[i];

    return suma;
}

//Realizar el promedio de los elementos del vector
double promediovector(int vector[], int tamanio)
{
    double prom=0;
    prom= sumatoriavector(vector,tamanio)/tamanio;

    return prom;
}
//Ejercicios
//1. Funcion que devuelve el elemento maximo del vector
int maximo (int vector[], int tamanio)
{
    int may=vector[0];
    for(int i=0; i<tamanio; i++)
    {
        if(vector[i]>may)
            may=vector[i];
    }
    return  may;
}

//2. Funcion que devuelve el elemento menor del vector.

int minimo(int vector[], int tamanio)
{
    int min=vector[0];
    for(int i=0;i<tamanio;i++)
    {
        if(vector[i]>min)
            min=vector[i];
    }
    return min;
}
//3. Funcion que devuelve por referencia el elemento minimo y maximo del vector

void mayor_menor(int vector[],int tamanio, int mayor, int menor)
{
    mayor= maximo(vector,tamanio);
    menor= minimo(vector,tamanio);

}
//4. Funcion que llene el vector con valores aletorios
void vectoraleatorio(int num[], int tamanio)
{
    srand(time(NULL));
    for(int i=0; i<tamanio; i++)
    {
        num[i]= 1 + rand() % 1000;

    }
}
//ordenar vector
void ordenacion_secuencia(int vector[],int tamanio)
{
    for(int i=0; i<tamanio;i++)
    {
        for(int j=0; i<tamanio;j++)
        {
            if(vector[i]>vector[j])
            {
                int aux;
                aux=vector[i];
                vector[j]=vector[j];
                vector[j]=aux;
        }

    }
}
    }

//1. Diseñe la funcion que busque un numero entero en el vector.
// La funcion debe devolver verdadero si el elemento existe en el vector
//o falso en caso contrario

bool contienelemento(int vector[],int elemento)
{
    bool resultado= false;
    for(auto & x : vector[])
    {
        if(x==elemento)
        {
            resultado=true;
            break;
        }
    }
    return resultado;
}

//2. Diseñe la funcion que busque un numero entero en el vector.
//la funcion debe devolver la posicion donde el elemento fue encontrado
//Devuelve -1 si no existe


int posicionelemento(int vector[],int tamanio,int buscar);
{
    for(int i=0;i<tamanio;i++)
    {
        int elemento=vector[i];
        if(elemento==buscar)
            return i;
    }
    return -1;
}


int main() {
    const int MAX=20;
    int num[MAX];


    vectoraleatorio(num,MAX);
    cout<<endl<<"VECTOR ORIGINAL";
    imprime_vector(num,MAX);

    cout<<endl<<endl<<"VECTOR ORDENADO";
    ordenacion_secuencia(num,MAX);
    imprime_vector(num,MAX);


    int suma= sumatoriavector(num,MAX);

    cout<<endl<<"LA SUMATORIA DEL VECTOR ES: "<<suma;
    cout<<"EL PROMEDIO ES: "<<promediovector(num,MAX);
    cout<<endl<<"EL ELEMENTO MAYOR ES: "<<maximo(num,MAX);
    cout<<endl<<"EL ELEMENTO MINIMO ES: "<<minimo(num,MAX);

    int may,men;
    mayor_menor(num,MAX,may,men);
    cout<<endl<<"MAYOR ENCONTRADO: "<<may;
    cout<<endl<<"MENOR ENCONTRADO: "<<men;

    int números{11,33,45,65,89,90,123};
    int elemento=46;

    if(contienelemento(números,elemento))
    {
        cout<<"ELEMENTO EXISTENTE EN EL VECTOR"<<endl;
    }
    else
    {
        cout<<"ELEMENTO NO EXISTENTE EN EL VECTOR"<<endl;
    }


    cout<<"POSICION: "<<posicionelemento<<endl;


    return 0;
}
