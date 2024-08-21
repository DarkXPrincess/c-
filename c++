#include <iostream>
#include <string>

using namespace std;


int main()
{
   int num1,num2;
   string  aux;

   cout<<"Los numeros a digitar deben ser naturales\nDigite el primer numero: ";
   getline(cin,aux);
   num1=stoi(aux);

   cout<<"Digite el segundo numero: ";
   getline(cin,aux);
   num2=stoi(aux);

   if (num1>0)
      if((num1%num2)==0 and num1>num2)

         cout<<"El primero número es multiplo del segundo"<<endl;
      else
         {
            cout<<"El primero número no es multiplo del segundo"<<endl;
          }
   if(num1<=0)
      cout<<"El numero no es natural"<<endl;
   return 0;
}
