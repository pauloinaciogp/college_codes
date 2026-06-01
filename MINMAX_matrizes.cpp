#include <iostream>
using namespace std;
int main(){
    int linha_max, coluna_max;
    float maior, menor;
    //maior e menor vão guardar o MIMAX e menor numero da linha respectivamente;
    bool num=true;
    float a[4][7];

    cout<<"Adicione os valores do seu veor: "<<endl;
    for (int l=0; l<4; l++){
        for (int c=0; c<7; c++){
            cout<<"L: "<<l+1<<" C: "<<c+1<<" = ";
            cin>>a[l][c];
        }
    }
    //preeche a matriz

    menor=a[0][0]; 
    maior= a[0][0];
    //adicionando valores em menor e maior pra quando comparar não der problema caso o lixo de memeoria estiver com algum valor que prejudique as comparações 
    
    for(int l=0; l<4; l++){
        for(int c=0; c<7; c++){
            if (menor > a[l][c])
            menor = a[l][c];
        }
    }
    //verificando o menor termo da matriz

    for(int l=0; l<4; l++){
        for (int c=0; c<7; c++){
            if(menor == a[l][c] && num){
                c=0;
                num=false;
                /* c=0  serve pra verificar se ha o valor igual e força reiniciar o loop na linha, contudo pra não fazer isso infinitamente o bool, restringe pra que 
                isso acontece apenas uma vez atracez do E lógico */

            }
            if (maior < a[l][c] && !num){
                maior=a[l][c];
                linha_max=l+1;
                coluna_max=c+1;
                /* Segue a mesma ideai de verificação, se caso a primeira premissa for verdade o num deixa passar pra segunda, se não, ela so ignora, 
                tambem verifica se ha um numero menor igual e considera a linha que tiver a maior*/
            }
            
        }
        num=true;
        //serve pra reiniciar a condição na proxima linha 
    }

    cout<<"Seu MIMMAX é: "<<maior<<" Posição: Linha" << linha_max<<" e coluna: "<<coluna_max<<" "<<endl;
    //mostra resultado 
    return 0;
}