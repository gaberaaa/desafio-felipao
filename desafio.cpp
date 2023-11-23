#include <iostream>
using namespace std;
string nick;
float  xp;
char op;

int main (){


    cout<<"VERIFIQUE SEU RANKING\n";
    
    do{
        cout<<"\nDigite seu nick: ";
        cin>>nick;
        cout<<"\nDigite sua quantidade de XP: ";
        cin>>xp;

        if(xp<1000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking FERRO e sua xp e "<<xp <<" ,ferro por opçao.";
        }else if (xp>=1001 and xp<=2000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking BRONZE e sua xp e "<<xp <<" ,bronze com coraçao de RADIANTE.";
        }else if (xp>=2001 and xp<=5000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking PRATA e sua xp e "<<xp << " , grazadeus conseguimos conquistar os 3 pontos.";
        }else if (xp>=6001 and xp<=7000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking OURO e sua xp e "<<xp <<" , graças a deus pai RECEBAAAAAA.";
        }else if (xp>=7001 and xp<=8000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking PLATINA e sua xp e "<<xp <<" ,um monstro em ascensao.";
        }else if (xp>=8001 and xp<=9000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking ASCENDENTE e sua xp e "<<xp <<" ,seu poder e de mais de 8000. ";
        }else if (xp>=9001 and xp<=10000){
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking IMORTAL e sua xp e "<<xp <<" ,ta saindo da jaula o monstro.";
        }else{
            cout<<"\nO Heroi de nome "<<nick <<" esta no ranking RADIANTE e sua xp e "<<xp <<" ,e uma fera , uma besta indomavellllllll. ";
        }

        do{
            cout<<"\n\nDeseja realizar a verificacao de ranking novamente S/N : ";
            cin>>op;

        }while(op !='s' && op !='S' && op !='n' && op !='N');



    }while(op=='s' or op=='S');
    
    
    
    
    
    return 0;

}