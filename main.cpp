#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    //NELEMENTS -> N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  //'' -> "" + ;
    for (int i = 0;)        //(int i = 0;) -> (int i = 1; i <= N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)     //(int i = 0; i; i++) -> (int i = 0; i < N_ELEMENTS ; i++)
    {
        std::cout << "Ertek:"   //<< b[i] << std::cout;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;      //int atlag; -> double atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++)    //(int i = 0; i < N_ELEMENTS, i++) -> (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]   //;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
