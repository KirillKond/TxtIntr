#include <iostream>
#include <unistd.h>
#include <cmath>



using namespace std;
int main(int argc, char *argv[])
{
if(argc == 1){
    cout << "\nСправка\n"<< "Функции калькулятора\n" << endl << "./calculator - Для вызова справки" << endl << "./calculator -o первое число второе число - Для возведения первого числа в степень второго числа" << endl;
    cout << "Примечани: если указать только первое число то е будет возведено в степень первого числа\n" << endl;
    exit(0);
}


int nmbr = 3;

int opt;
while((opt = getopt(argc, argv, "a:")) != -1)
{
    string a = optarg;
     
     
     
     if(a == "stepenE"){
    cout<< exp(atoi(argv[nmbr])) <<endl;
    }
     
     
     
    
    if(a == "stepenXY"){
    cout<< pow(atoi(argv[3]),atoi(argv[4])) <<endl;
    }

    cout<<endl;
}
return 0;
}
