#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

float a,b,c;


float delta(float &a, float &b, float &c) //delta
{
    return ((pow(b, 2)) - 4*a*c);
}

float mojadelta = delta(a,b,c);


float pierwiastek1(float &a, float &b) //delta = 0
{
    return ((-b)/(2*a));
}

float pierwiastki1(float &a, float &b, float &c)
{
    return ((-b)-sqrt(mojadelta))/(2*a);
}

float pierwiastki2(float &a, float &b, float &c)
{
    return ((-b)+sqrt(mojadelta))/(2*a);
}

int main()
{
    cout << "Podaj 3 zmienne, odzielone spacjami " << endl;
    cin>>a>>b>>c;
    cout<<"Delta wynosi: "<<delta(a,b,c)<<endl;
    mojadelta = delta(a,b,c);

    if(mojadelta < 0)
        cout<<"Rownanie liniowe, brak pierwiastkow!"<<endl;
    else if(mojadelta == 0)
        cout <<"x =  "<<pierwiastek1(a,b)<<endl;
    else if(mojadelta > 0)
    {
        cout <<"x =  "<<pierwiastki1(a,b,c)<<endl;
        cout <<"x2 =  "<<pierwiastki2(a,b,c)<<endl;
    }

    getchar();
    cin.ignore();
    cout << fixed;
    cout.precision(2);
    return 0;
}
