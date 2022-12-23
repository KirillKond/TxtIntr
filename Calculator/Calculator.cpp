#include <iostream>
#include <getopt.h>
#include <unistd.h>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{

    {
        if (argc==1) {
            cout<<"КАЛЬКУЛЯТОР"<< endl<< "Чтобы выбрать действие, нужно ввести один из параметров:" << endl<< "-s — возведение e в степень y (Пример ввода '-s y')" << endl << "-m — возведение x в степень y (Пример ввода '-m x y')"<< endl;
        }

        int opt,result,x,y;
        float d;
        while ((opt = getopt (argc, argv, "m:s:")) != -1) {
            switch (opt) {
            case 's':
                    x = strtol(argv[2], NULL, 10);
                    d=exp(x);
                cout<< "Результат: "<< d <<endl;
                break;

            case 'm':
                x = strtol(argv[2], NULL, 10);
                y = strtol(argv[3], NULL, 10);
                result = pow(x,y);
                cout<< "Результат: "<< result <<endl;
                break;
            }
        }
    }
}
