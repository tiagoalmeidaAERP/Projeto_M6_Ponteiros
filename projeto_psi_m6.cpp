#include <iostream>
#include <cstring>
#include <locale>
#include <cstdio>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

char res;

int main()
{
    do
    {
        
    
    int op;

    cout << "Programa a inicializar........." << endl;
    system("pause");
    system("cls");

    cout << "Selecione a opção que pretende: " << endl;
    cout << "[1] -> Letra mais usada numa frase" << endl;
    cout << "[2] -> Inverter frases" << endl;
    cout << "[3] -> Frases minusculas para maiusculas" << endl;
    cout << "[4] -> Palavra aleatoria" << endl;

    cin >> op;

     switch(op)
    { 
        case 1:
        {
            char* str = new char[100];  
            cout << "Digite uma string: ";
            cin.ignore();  
            cin.getline(str, 100);

            char* ptr = str;  
            while (*ptr != '\0') { 
                char* temp = ptr + 1;  
                while (*temp != '\0') {  
                    if (*ptr == *temp) {  
                        cout << "O primeiro caractere que aparece mais de uma vez e: " << *ptr << endl;
                        delete[] str;  
                        return 0;
                    }
                    temp++;  
                }
                ptr++;  
            }
            cout << "Nao a caracteres que aparecem mais de uma vez na string." << endl;
            delete[] str;     
            break;
        }
        
        case 2:
        {
            char frase[100];
            char *p1 = frase;
            cout << "Digite uma frase: ";
            cin.ignore();  
            cin.getline(frase, 100);
            cout << "A frase: " << p1 << endl;
            cout << "O ponteiro esta no fim da frase..." << endl;
            cout << "\n\n";
            while(*p1)
                p1++;
            p1--;
            cout << "Frase Invertida: ";
            while (p1>= frase)
                cout << *p1--;
            break;
        }
        
        case 3:
        {
            char frase_LM[100];
            char frase_lp[100];
            cout << "Digite uma frase em minusculas: ";
            cin.ignore();
            cin.getline(frase_lp, 100);
            for (int i = 0; i < strlen(frase_lp); i++) 
            {
                frase_LM[i] = toupper(frase_lp[i]);
            }
            cout << "A frase em maiusculas e: " << frase_LM << endl;
            break;
        }

        case 4:
        {
            string palavras[] = {"sa", "barcelos", "porto", "futebois", "recibos", "corruptos"};
            int num_palavras = 6;
            srand(time(nullptr));
            int indice = rand() % num_palavras;
            string palavra = palavras[indice];
            cout << "Palavra aleatoria: " << palavra << endl;
            break;
        }
        
        default:
        {
            cout << "Opcao invalida, volte a introduzir a opcao: " << endl;
            cin >> op;
            break;
        }
    }
    cout << "Deseja continuar a usar o programa? (s/n)" << endl;
    cin >> res;
    }while(res == 's'|| res == 'S');
}