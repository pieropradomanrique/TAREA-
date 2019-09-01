#include <iostream>

using namespace std;

int main()

   /*implenmente un programa que reciba un numero e indique si es primo o no
    int a;
    cout <<" inserte el primer valor:";
    cin >> a;
    int x=2;
    while(true){
        if (a%x!=0){
            cout << a <<" es primo" << endl;
        return false;}
        else
            {cout << a <<" no es primo" << endl;
        return false;

        }

    }
    return 0;

}
*/
   /*implemente un programa que imprima los numeros primos menores de 100


{
  int divisores=0;
  int a=100;

  for(int i=1; a>=i;i++)
  {
    for(int j=1; i>=j;j++)
    {
      if(i%j==0)
      {
        divisores++;
      }
    }
    if(divisores==2)
    {
      cout<<i<<" ";
    }
    else
        divisores=0;
  }



  return 0;}*/

    /*implemente un programa que reciba un numero e indique si este es perfecto*/

    { int c;
     int a = 0;
     int b;

    cout<<"inserte su valor ";
    cin>>c;
    int d=1;

   for(d=1;b<c; d++)
  {
    if(c%d==0)
    {
      cout<<d<<" ";
      a+=d;
    }
  }
  if(a==c)
  {
    cout<<"el numero es perfecto ";
  }
  else
  {
    cout<<"el numero no es perfecto ";
  }
  return 0;
}

   /*implemente un programa que imprima los numeros primos menores de 100


{
  int divisores=0;
  int a=100;

  for(int i=1; a>=i;i++)
  {
    for(int j=1; i>=j;j++)
    {
      if(i%j==0)
      {
        divisores++;
      }
    }
    if(divisores==2)
    {
      cout<<i<<" ";
    }
    else
        divisores=0;
  }



  return 0;}*/
#TAREA-
