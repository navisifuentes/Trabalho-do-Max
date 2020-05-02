#ifndef ANA_H
#define ANA_H

#include <iomanip>
#include <iostream>

using namespace std;

void desenha_retangulo (int l, int c, char car, char car2);//05-1A

double volume_esfera(double raio,double &volume);//02-1B

int fatorial(int n);//06-1B

int fibonacci(int num, int &f);//08-1B

void numero_regular(int n);//09-1B

int combinacoes (int n, int p, int &c);//10-1B

string inverso(string a);//03-1C

bool palindromo(string a, string b);//03-1C

string to_lower_case(string p, int tam);//05-1C

string to_upper_case(string p);//06-1C

void caixa_com_texto_centralizado(string x, int y, char z);//07-1C

void ordem(int &c,int &b, int &a);//01-2A

int contar_caracteres(char *x);//03-2A

void compara_strings (char *a, char *b);// 04-2A

int string_para_int (string x);//01-2B

string espaco_branco(string a);//03-2B

int busca(string x, string y);//05-2B

int maior_e_menor(int* p, int valor, int &ma, int &me);//05-2C
int* novo_vetor(int valor);
void ler_vetor(int* p, int q);

int** cria_matriz(int l, int c);//06-2D
void ler_matriz(int **m, int l, int c);
void escreve_matriz(int **m, int l, int c);
int** soma_matriz(int **m1, int **m2, int l, int c);


void inicio();

void menu();

#endif // ANA_H
