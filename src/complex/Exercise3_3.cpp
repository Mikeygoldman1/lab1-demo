#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main(){
    auto a = 0.0f;
    auto b = 0.0f;
    auto c = 0.0f;
    auto x1 = complex<float>{0.0,0.0};
    auto x2 = complex<float>{0.0,0.0};
    auto realTemp = 0.0f;
    auto imagTemp = 0.0f;
    auto discriminant = 0.0f;
    auto decision = "yes"s;

    while (decision!="q"){
        cout << "Please enter values for a, b and c:"<<endl;
        cout << "a:";
        cin >> a;
        cout << endl;
        cout << "b:";
        cin >> b;
        cout << endl;
        cout << "c:";
        cin >> c;
        cout << endl;
        discriminant = pow(b,2) - 4*a*c;
        if (discriminant>=0){
            realTemp = (-b + discriminant)/(2*a);
            x1.real(realTemp);
            realTemp = (-b - discriminant)/(2*a);
            x2.real(realTemp);
            cout << "The first root is:" << endl;
            cout << "x = " << x1.real() << endl;
            cout << "The second root is:" << endl;
            cout << "x = " << x2.real() << endl;
        }
        else{
            realTemp = -b/(2*a);
            imagTemp = sqrt(abs(discriminant))/(2*a);
            x1.real(realTemp);
            x1.imag(imagTemp);
            realTemp = -b/(2*a);
            imagTemp = -sqrt(abs(discriminant))/(2*a);
            x2.real(realTemp);
            x2.imag(imagTemp);
            if (imagTemp<0){
                cout << "The first root is:" << endl;
                cout << "x = " << x1.real() << " + " << x1.imag() << "j" << endl;
                cout << "The second root is:" << endl;
                cout << "x = " << x2.real() << " - " << abs(x2.imag()) << "j"  << endl;
            }
            else{
                cout << "The first root is:" << endl;
                cout << "x = " << x1.real() << " - " << abs(x1.imag()) << "j" << endl;
                cout << "The second root is:" << endl;
                cout << "x = " << x2.real() << " + " << x2.imag() << "j"  << endl;
            }
        }

        cout << "Type \'q\' if you want to quit. If you want to continue, type anything else" << endl;
        cin >> decision;
        cout<<endl;
    }


    return 0;
}
