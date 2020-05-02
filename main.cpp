#include "ana.h"

using namespace std;

int main()
{
	int k=1;
    inicio();
    cout<<"DIGITE SEU PRIMEIRO NOME\n";
    string nome;
    cin>>nome;
    system("cls");
    cout<<" \n ENTAO, "<<nome<<". VAMOS COMECAR!\n ";
    menu();
    cout<<" \n"<<nome<<" ESCOLHA UMA FUNCAO\n";
    int x;
    cin>>x;
    system("cls");

    while(x!=0)
        {
        	if(x>20)
        	{
        		cout<<"\nOPCAO INVALIDA\nESCOLHA UMA OPCAO DE 1 A 20\n";
			}
        
            switch(x)
            {
                case 1:
               	while(k!=0)
               	{
                	int linhas,colunas;
                    char caractere,caractere2;
                    printf("\nVAMOS DESENHAR UM RETANGULO COM OS CARACTERES DIGITADOS\n");
                    printf("QUAL O NUMERO DE LINHAS? \n");
                    cin>>linhas;
                    printf("\nQUAL O NUMERO DE COLUNAS? \n");
                    cin>>colunas;
                    printf("\nDIGITE O PRIMEIRO CARACTERE \n");
                    cin>>caractere;
                    printf("\nDIGITE O SEGUNDO CARACTERE \n");
                    cin>>caractere2;
                    desenha_retangulo(linhas,colunas,caractere,caractere2);
                    cout<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
				}                    
                    break;

                case 2:
                while(k!=0)	
                {
                	printf("\nVAMOS CALCULAR O VALOR DO VOLUME DE UMA ESFERA\n");
                    double v,r;
                    printf("DIGITE O VALOR DO RAIO DA ESFERA\n");
                    cin>>r;
                    volume_esfera(r,v);
                    printf("\nO VALOR DO VOLUME EH %f\n",v);
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                    
                }
                    break;

                case 3:
                while(k!=0)	
                {
                	cout<<"\nVAMOS CALCULAR O FATORIAL DE UM NUMERO\n";
                    int num,fato;
                    cout<<"DIGITE UM NUMERO\n";
                    cin>>num;
                    fato = fatorial(num);
                    cout<<"\nO FATORIAL DE "<<num<<" EH "<<fato<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;

                case 4:
                while(k!=0)	
                {
                	cout<<"\nVAMOS ENCONTRAR UM NUMERO NA SEQUENCIA DE FIBONACCI\n";
                    int n,fi;
                    cout<<"DIGITE UM NUMERO\n";
                    cin>>n;
                    fibonacci(n,fi);
                    cout<<"\nO NUMERO NA POSICAO "<<n<<" NA SEQUENCIA DE FIBONACCI EH "<<fi<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;

                case 5:
                while(k!=0)	    	
                {
                   	cout<<"\nVAMOS DESCOBRIR SE UM NUMERO EH REGULAR OU NAO\n";
                    int numero;
                    string regular;
                    cout<<"DIGITE UM NUMERO\n";
                    cin>>numero;
                    cout<<endl;
                    numero_regular(numero);
                    cout<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
               	   break;
               	   
                case 6:
                while(k!=0)	    	
                {
                	cout<<"\nVAMOS DESCOBRIR O NUMERO DE COMBINACOES ENTRE N E P, SENDO N MAIOR QUE P\n";
                    int numn,nump,combi;
                    cout<<"DIGITE UM NUMERO N E UM NUMERO P\n";
                    cin>>numn>>nump;
                    combinacoes(numn,nump,combi);
                    cout<<"\n"<<combi<<" COMBINACOES\n";
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;
                    
                case 7:
                while(k!=0)	    	
                {
                	cout<<"\nVAMOS DESCOBRIR SE UMA STRING EH PALINDROMO OU NAO, SENDO 1=VERDADEIRO E 0=FALSO\n";
                    string x,y;
                    cout<<"DIGITE A STRING\n";
                    cin>>x;
                    y=inverso(x);
                    cout<<endl;
                    bool resultado = palindromo(x,y);
                    cout<<resultado<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;

                case 8:
                cin.ignore();	
                while(k!=0)	    	
                {
                	cout<<"\nVAMOS CONVERTER STRINGS MAIUSCULAS PARA MINUSCULAS\n";
                    string x1;
                    cout<<"DIGITE A STRING MAIUSCULA\n";
                    getline(cin,x1);
                    int t = x1.size();
                    string y1 = to_lower_case(x1,t);
                    cout<<"\nA NOVA STRING SERA\n"<<y1<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;

                case 9:
                cin.ignore();	
                while(k!=0)	    	
                {
                	cout<<"\nVAMOS CONVERTER STRINGS MINUSCULAS PARA MAIUSCULAS\n";
                    string x2;
                    cout<<"DIGITE A STRING\n";
                    getline(cin,x2);
                    string y2 = to_upper_case(x2);
                    cout<<"\nA NOVA STRING SERA\n"<<y2<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;

                case 10:
				cin.ignore();	
                while(k!=0)	    	
                {
                	cout<<"EU DISSE QUE NAO CONSEGUI O 10. MAS JA QUE VOCE INSISTE.\n";
                	cout<<"\nVAMOS ESCREVER UM TEXTO CENTRALIZADO EM UMA CAIXA (VAI DAR ERRADO, HEIN. TO AVISANDO)\n";
                    string a;
                    int b;
                    char c;
                    cout<<"DIGITE UMA FRASE\n";
                    getline(cin,a);
                    cout<<"DIGITE UM NUMERO\n";
                    cin>>b;
                    cout<<"DIGITE UM CARACTERE\n";
                    cin>>c;
                    cout<<"CAIXA COM TEXTO CENTRALIZADO:\n";
                    caixa_com_texto_centralizado(a,b,c);
                    cout<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;
                    
                case 11:
                while(k!=0)	    	
                {
                	cout<<"\nVAMOS COLOCAR TRES NUMEROS EM ORDEM CRESCENTE\n";
                    int n1,n2,n3;
                    cout<<"DIGITE TRES NUMEROS\n";
                    cin>>n1>>n2>>n3;
                    ordem(n1,n2,n3);
                    cout<<"\nEM ORDEM CRESCENTE FICA: \n"<<n1<<" - "<<n2<<" - "<<n3<<endl;
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                }
                    break;

                case 12:
                cin.ignore();	
                while(k!=0)	    	
                {	
                	cout<<"\nVAMOS DESCOBRIR A QUANTIDADE DE CARACTERES DE UMA STRING\n";
                    int tam;
                    char  a1[100];
                    cout<<"DIGITE A STRING\n";
                    cin.getline(a1,100);
                    tam = contar_caracteres(a1);
                    cout<<"\nA STRING TEM "<<tam<<" CARACTERES\n";
                    cout<<"DIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
                 }
				    break;

                case 13: 
                cin.ignore();
			    while(k!=0)		              
				{				
					cout<<"EU DISSE QUE NAO CONSEGUI O 13. MAS JA QUE VOCE INSISTE.\n";	
                	cout<<"\nVAMOS VER SE UMA STRING EH LEXICOGRAFICAMENTE ANTERIOR OU POSTERIOR A OUTRA\n";
                    char x[100];
					char y[100];
					cout<<"DIGITE A PRIMEIRA STRING\n";
					cin.getline(x,100);		
					cout<<"\nDIGITE A SEGUNDA STRING\n";
					cin.getline(y,100);	
					cout<<endl;
					compara_strings(x,y);
					cout<<"\nDIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
				}
					break;
					
					
					
					
					
					
                case 14:
                cin.ignore();	
                while(k!=0)	    	
                {               	
					string a3;
                    cout<<"DIGITE A STRING, COM CARACTERES DE '1 A 9'\n";
                    getline(cin,a3);
                    int num=string_para_int (a3);
                    cout<<num;
                    cout<<"\nDIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
			    }
			    	break;
		
		
		
		
		
		
            	case 15:
            	cin.ignore();	
                while(k!=0)			
            	{
            		cout<<"EU DISSE QUE NAO CONSEGUI O 15. MAS JA QUE VOCE INSISTE.\n";
                	cout<<"\nVAMOS RETIRAR OS ESPACOS EM BRANCO DO COMECO E FINAL DA STRING\n (VAI DAR ERRADO, HEIN. TO AVISANDO)\n";
            		string x,y;
					cout<<"DIGITE A STRING\n";
					getline(cin,x);
					cout<<endl;
					y= espaco_branco(x);
					cout<<"\n A NOVA STRING SERA: '"<<y<<"'"<<endl;	
					cout<<"\nDIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");							
				}
                    break;

            	case 16:
                while(k!=0)
				{
					cout<<"EU DISSE QUE NAO CONSEGUI ESSA. VAMOS VOLTAR PARA O MENU.\n DIGITE 0 PARA VOLTAR AO MENU\n";;
					cin>>k;	
				 	system("cls");	
				}
                    
                case 17:
                cin.ignore();
                while(k!=0)
                {               
					cout<<"EU DISSE QUE NAO CONSEGUI O 17. MAS JA QUE VOCE INSISTE.\n";	
                	cout<<"VAMOS ENCONTRAR A OCORRENCIA DA SEGUNDA STRING NA PRIMEIRA\n";
                	string s1;
					cout<<"DIGITE A PRIMEIRA STRING\n";
					getline(cin,s1);					
					string s2;
					cout<<"DIGITE A SEGUNDA STRING\n";
					getline(cin,s2);					
					int i=busca(s1,s2);
					cout<<"\nO INDICE EH: "<<i<<endl;
					cout<<endl<<"\nDIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");
				}
					break;
                    
                case 18:
                while(k!=0)
				{
					cout<<"EU DISSE QUE NAO CONSEGUI ESSA. VAMOS VOLTAR PARA O MENU.\n DIGITE 0 PARA VOLTAR AO MENU";;
					cin>>k;
					system("cls");	
				}
					break;
					
                case 19:
                while(k!=0)
				{
					cout<<"VAMOS VERIFICAR EM QUAL POSICAO DO VETOR ESTA O MAIOR E O MENOR NUMERO\n";
					int t,m,n;
					cout<<"DIGITE O TAMANHO DO VETOR\n";
					cin>>t;
					int* vetor=novo_vetor(t);
					ler_vetor(vetor,t);
					maior_e_menor(vetor,t,m,n);
					cout<<"O INDICE QUE POSSUI O MAIOR VALOR EH O = "<<m<<endl<<"O INDICE QUE POSSUI O MENOR VALOR EH O = "<<n;
					cout<<endl<<"\nDIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");	
				}	
					break;
                    
                    
                case 20:                						
                while(k!=0)
				{
					cout<<"VAMOS FAZER A SOMA DE DUAS MATRIZES\n";
					int linha;
					int coluna;
					cout<<"DIGITE O TANTO DE LINHAS E COLUNAS, RESPECTIVAMENTE\n";
					cin>>linha>>coluna;
					int **matriz1=cria_matriz(linha,coluna);
					int **matriz2=cria_matriz(linha,coluna);
					
					cout<<"DIGITE OS VALORES DA MATRIZ 1\n";
					ler_matriz(matriz1,linha,coluna);
					
					cout<<"\nDIGITE OS VALORES DA MATRIZ 2\n";
					ler_matriz(matriz2,linha,coluna);
					
					cout<<"\nMATRIZ 1:\n";
					escreve_matriz(matriz1,linha,coluna);
					
					cout<<"\nMATRIZ 2:\n";
					escreve_matriz(matriz2,linha,coluna);
					
					cout<<"\nA SOMA DAS MATRIZES RESULTARA NA SEGUINTE MATRIZ:\n";
					int **matriz3=soma_matriz(matriz1,matriz2,linha,coluna);
					escreve_matriz(matriz3,linha,coluna);
					
					cout<<endl<<"\nDIGITE 1 CASO QUEIRA TESTAR A FUNCAO NOVAMENTE\nDIGITE 0 CASO QUEIRA VOLTAR AO MENU\n";
                    cin>>k;
                    system("cls");	
				}
					break;
            }
	            menu();
	            k=1;
			    cout<<" \n"<<nome<<" ESCOLHA UMA FUNCAO\n";
			    cin>>x;
			    system("cls");
        }
        
}
