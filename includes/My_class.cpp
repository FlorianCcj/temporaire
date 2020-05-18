#include <iostream>
#include "My_class.h"
#include <string>

using namespace std;


additioner::additioner()
{}

void additioner::addition_de_deux_nombre(int n1 , int n2)
{
   cout << "chiffre 1" << endl;
   cin >> n1;
   cout << "chiffre 2" << endl;
   cin >> n2;
   resultat = n1 + n2;
   cout << resultat << endl;
}
