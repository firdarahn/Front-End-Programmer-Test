#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int variabel;
    cout << "Masukan variabel :"; cin>>variabel;
    
    if ((variabel%3)==1)
    {
      cout <<"False" <<endl;
    }
    else if (((variabel%2)==0)&&((variabel%5)==0)) 
    {
      cout <<"true" <<endl;
    }
}