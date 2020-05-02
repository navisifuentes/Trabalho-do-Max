#include "ana.h"
#include "math.h"
#include "string.h"
void menu()
{
    cout<<"\n                              FUNCOES DA NAVI\n";
    cout<<"\n[01] DESENHA RETANGULO                                     [11] ORDENAR TRES NUMEROS\n";
    cout<<"[02] VOLUME ESFERA                                         [12] TAMANHO STRING\n";
    cout<<"[03] FATORIAL                                              [13] COMPARA STRING - nao consegui :(\n";
    cout<<"[04] FIBONACCI                                             [14] CONVERTE STRING PRA INT\n";
    cout<<"[05] NUMERO REGULAR                                        [15] REMOVE ESPACOS BRANCOS - nao consegui :(\n";
    cout<<"[06] COMBINACOES                                           [16] QUEBRAR STRING - nao consegui 0% :(\n";
    cout<<"[07] PALINDROMO                                            [17] BUSCAR NA STRING - nao consegui :(\n";
    cout<<"[08] CONVERTE PARA MINUSCULAS                              [18] SOMA NUMEROS GIGANTES - nao consegui 0% :(\n";
    cout<<"[09] CONVERTE PARA MAIUSCULAS                              [19] MAIOR E MENOR NO VETOR\n";
    cout<<"[10] CENTRALIZAR TEXTO - nao consegui :(                   [20] SOMA MATRIZ\n";
}

void desenha_retangulo (int l, int c, char car, char car2)//01
{
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if((i==0 or i==l-1) or (j==0 or j==c-1))
            {
            cout<<car;
        }else{
            cout<<car2;
        }
        }
            cout<<endl;
    }
}

double volume_esfera(double raio,double &volume)//02
{
    volume=4*M_PI*pow(raio,3)/3;
    return volume;
}

int fatorial(int n)//03
{
    int fato;
    if(n==0)
    {
        fato=0;
    }
    else
    {     
          fato=1;
          for(int i=1;i<=n;i++)
          {
		    fato*=i;
          }
    }
    return fato;
}

int fibonacci(int num, int &f)//04
{
    int ant=0,atual=1;
    if(num==1)
    {
        f=ant;
    }
    else
    {
        if(num==2)
        {
            f=atual;
        }
        else
        {
            for(int i=3;i<=num;i++)
            {
                f=ant+atual;
                ant=atual;
                atual=f;
            }
        }
    }
    return f;
}

void numero_regular(int n)//05
{
    while(n%2==0)
    {
        n/=2;
    }
    while(n%3==0)
    {
        n/=3;
    }
    while(n%5==0)
    {
        n/=5;
    }

    if(n==1)
    {
        cout<<"1-EH REGULAR\n";
    }else{
        cout<<"0-NAO EH REGULAR\n";
    }

}

int combinacoes (int n, int p, int &c)//06
{
    int i,fat1=1,fat2=1,fat3=1;
    for(i=2;i<=n;i++)
    {
        fat1*=i;
    }
    for(i=2;i<=p;i++)
    {
        fat2*=i;
    }
    for(i=2;i<=n-p;i++)
    {
        fat3*=i;
    }

    c=(fat1)/(fat2*fat3);
    return c;
}

string inverso(string a)//07
{
    string b;
    for(int i=0;i<a.size();i++)
    {
        b+=a[a.size()-i-1];
    }
    return b;
}

bool palindromo(string a, string b)//07
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

string to_lower_case(string p, int tam)//08
{
    for(int i=0;i<tam;i++)
    {
        if(p[i]>='A' and p[i]<='Z')
        {
            p[i]+=32;
        }
    }
    return p;
}

string to_upper_case(string p)//09
{
    for(int i=0;i<p.size();i++)
    {
        if(p[i]>='a' and p[i]<='z')
        {
            p[i]-=32;
        }
    }
    return p;
}

void caixa_com_texto_centralizado(string x, int y, char z)//10
{
    int tam=x.size();
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<y;j++)
        {
            if((i==0 or i==2) or (j==0 or j==y-1))
            {
                cout<<z;
            }else{
            	
				cout<<" ";
            }

        }
        cout<<endl;
    }
    cout<<"EU NAO SEI COMO CENTRALIZAR O TEXTO '"<<x<<"' NA CAIXA"<<endl;
}


void ordem(int &c,int &b, int &a)//11
{
    int aux;
    if(a>b and a>c and b<c)
    {
        aux=b;
        b=c;
        c=aux;
    }
    if(b>a and b>c)
    {
        if(a>c)
        {
            aux=a;
            a=b;
            b=aux;
        }else{
            if(c>a)//b-c-a
            {
                aux=b;
                b=c;
                c=a;
                a=aux;

            }
        }
    }
    if(c>a and c>b)
    {
        if(b>a)
        {
            aux=a;
            a=c;
            c=aux;
        }
        else{
            aux=a;
            a=c;
            c=b;
            b=aux;

        }
    }
}

int contar_caracteres(char *x)//12
{
    int quant =0;
    for(int i=0;x[i]!=0;i++)
    {
        quant++;
 }
    return quant;
}


void compara_strings (char *a, char *b)//13
{
	int l;
	
	for(int i=0;i<strlen(a) or i<strlen(b);i++)
	{
			if(a[i]==b[i])
			{
				 l=0;
			}
			if(a[i]>b[i])
			{
				 l=1;
			}
			else{
				if(a[i]<b[i])
				{
					l=-1;
				}
				
			
			}
	}
	cout<<l;
}


int string_para_int (string x)//14
{
    int mult=1;
    int numero=0;
    for(int i=0; i<x.size();i++)
    {
        numero+=(x[x.size()-1-i]-48)*mult;
        mult*=10;
    }
    return numero;
}

string espaco_branco(string a)//15
{
	int i;
	string b;
	for(i=0;i==' ';i++);
	for(int j=i; j<a.size();j++)
	{
		b+=a[j];
	}	
	return b;
}

int busca(string x, string y)//17
{
	int indice;
	int cont=0;
	for(int i=0;i<x.size()and cont!=y.size();i++)
	{
		for(int j=0;j<y.size();j++)
		{
			if(x[i+cont]==y[j])
			{
				cont++;
			}
			if(cont==y.size())
			{
				indice = i;
			}
		}
	}
	return indice;
}

int maior_e_menor(int* p, int valor, int &ma, int &me)//19
{//encontrando o menor e o maior
	int maior=0,menor=1000;
	for(int i=0;i<valor;i++)
	{
		if(p[i]>maior)
		{
			maior=p[i];
			ma=i;	
		}
		
		if(p[i]<menor)
		{
			menor=p[i];
			me=i;	
		}
		
				
	}
}
int* novo_vetor(int valor)//19
{//criando o vetor
	int* vet= new int[valor];
	for(int i=0;i<valor;i++)
	{
		vet[i]=0;
	}
	return vet;
}
void ler_vetor(int* p, int q)//19
{//lendo o vetor
	cout<<"Digite os valores do vetor\n";
	
	for(int i=0;i<q;i++)
	{
		cin>>p[i];
	}
}

int** cria_matriz(int l, int c)//20
{
	int** m= new int*[l];
	for(int i=0;i<l;i++)
	{
		m[i]=new int[c];
	}
	return m;
}





void ler_matriz(int **m, int l, int c)//20
{
	for (int i=0; i<l;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"["<<i<<"]["<<j<<"] = ";
			cin>>m[i][j];
		}
		cout<<endl;
	}
}








void escreve_matriz(int **m, int l, int c)//20
{
	for (int i=0; i<l;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}







int** soma_matriz(int **m1, int **m2, int l, int c)//20
{
	int** m3=cria_matriz(l,c);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<c;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	return m3;
}







void inicio()
{
cout<<"\n                                                                   \n";
cout<<"              *           *         *       *           *   *        \n";
cout<<"              * *         *        * *       *         *    *        \n";
cout<<"              *   *       *       *   *       *       *     *        \n";
cout<<"              *     *     *      * * * *       *     *      *        \n";
cout<<"              *       *   *     *       *       *   *       *        \n";
cout<<"              *         * *    *         *       * *        *        \n";
cout<<"              *           *   *           *       *         *        \n";
cout<<"                                                                     \n";
cout<<"                                                                     \n";
cout<<"                              *  *        *  *                       \n";
cout<<"                            *       *   *       *                    \n";
cout<<"                           *          *          *                   \n";
cout<<"                           *                     *                   \n";
cout<<"                            *                   *                    \n";
cout<<"                              *               *                      \n";
cout<<"                                *           *                        \n";
cout<<"                                   *     *                           \n";
cout<<"                                      *                              \n";
}

