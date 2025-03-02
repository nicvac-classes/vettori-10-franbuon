#include <iostream>
using namespace std;

int main() {
    int N, i;
    float sommaV;
    cout<<"Quanti sono gli studenti?"<<endl;
    cin>>N;
    float voti[N];
    int crediti[N];
    string nomi[N];
    i=0;
    sommaV=0;
    while(i<N)
    {
        cout<<"Come ti chiami?"<<endl;
        cin>>nomi[i];
        cout<<"Quanto hai preso all'esame?"<<endl;
        cin>>voti[i];
        cout<<"Quanti crediti hai avuto?"<<endl;
        cin>>crediti[i];
        sommaV=sommaV+voti[i];
        i=i+1;
    }
    float media;
    media=sommaV/N;
    i=0;
    while(i<N)
    {
        if(voti[i]>media)
        {
            if(crediti[i]>=6)
            {
                cout<<"Lo studente di nome "<<nomi[i]<<" ha ottenuto un voto superiore alla media ("<<voti[i]<<") e ha totalizzato "<<crediti[i]<<" crediti";
            }
        }
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
