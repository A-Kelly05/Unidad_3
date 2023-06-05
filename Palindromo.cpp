#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

typedef struct
{
    char idpalabrita[5];
    string palabrita;
} Palabra;

Palabra word[MAX];
int a = 0, palindromo = 0, ultimaPalabra=0;

void guardarTexto(Palabra words);
bool comprobar();
int buscarPalabra(char palabras[10]);


void guardartexto(Palabra words)
{
    string texto;
    cout << "Ingrese un Id para la palabra";
    cin >> words.idpalabrita;
    cout << "Ingrese un texto a evaluar: ";
    getline(cin >> ws, texto);
    words.palabrita = texto;
    word[ultimaPalabra] = words;
    ultimaPalabra++;
}

int buscarPalabra(char palabras[10])
{
    int posicion = 0;
    for (int i = 0; i < ultimaPalabra; i++)
    {
        if (strcmp(palabras, word[i].idpalabrita) == 0)
        {
            posicion = i;
            break;
        }
    }
    return posicion;
}



int main()
{
    Palabra words;
    char palabras[10];
    cout << "Bienvenido al buscador de palindromo"<< endl;
    guardartexto(words);
    string texto;
    int pos;
    char idPalabra[5];
    cout << "Dame el id de la palabra: ";
    cin >> idPalabra[5];
    pos = buscarPalabra(idPalabra);
    texto = word[pos].palabrita;
    
    for (int i = texto.length() - 1; i >= 0; i--)
    {
        if (texto[i] == texto[a])
        {
            palindromo++;
        }
        a++;
    }

    if (texto.length() == palindromo)
    {
        cout << "El texto ingresada es palindromo" << endl;
    }
    else
    {
        cout << "El texto ingresada no es palindromo" << endl;
    }

    return 0;
}
