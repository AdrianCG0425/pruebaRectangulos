#include <iostream>

using namespace std;

int main()
{
    int x,y,a,h;
    int rec1[4],rec2[4];
    bool t=0;

    do{
        if(t)cout<<"ingresaste una longitud incorrecta, vuelve a intentarlo"<<endl<<endl;
        cout << "ingrese las coordenadas del origen en x" << endl;
        cin>>x;
        cout << "ingrese las coordenadas del origen en y" << endl;
        cin>>y;
        cout << "ingrese la medida del ancho del rectangulo" << endl;
        cin>>a;
        cout << "ingrese la medida del alto del rectangulo" << endl;
        cin>>h;
        if(a<=0||h<=0)t=1;
    }while(a<=0||h<=0);
    rec1[0]=x;
    rec1[1]=y;
    rec1[2]=a;
    rec1[3]=h;
    t=0;
    do{
        if(t)cout<<"ingresaste una longitud incorrecta, vuelve a intentarlo"<<endl<<endl;
        cout << "ingrese las coordenadas del origen del segundo en x" << endl;
        cin>>x;
        cout << "ingrese las coordenadas del origen del segundo en y" << endl;
        cin>>y;
        cout << "ingrese la medida del ancho del rectangulo" << endl;
        cin>>a;

        cout << "ingrese la medida del alto del rectangulo" << endl;
        cin>>h;
        if(a<=0||h<=0)t=1;
    }while(a<=0||h<=0);
    rec2[0]=x;
    rec2[1]=y;
    rec2[2]=a;
    rec2[3]=h;
    if(rec2[0]==rec1[0]){        // si x1 y x2 son iguales
        if(rec1[1]==rec2[1]){    // x1=x2.... y1=y2

        }
        else if(rec1[1]<rec2[1]){    // x1=x2....  y1 menor que y2

        }
        else{                         // x1=x2....  y2

        }
    }
    else if (rec1[0]<rec2[0]) {
        if(rec1[1]==rec2[1]){    // x1=x2.... y1=y2

        }
        else if(rec1[1]<rec2[1]){    // x1=x2....  y1 menor que y2

        }
        else{                         // x1=x2....  y2
            if(rec1[1]==rec2[1]){    // x1=x2.... y1=y2

            }
            else if(rec1[1]<rec2[1]){    // x1=x2....  y1 menor que y2

            }
            else{                         // x1=x2....  y2

            }
        }
    }
    else{

    }
    return 0;
}
