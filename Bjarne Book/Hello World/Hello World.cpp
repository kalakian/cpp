#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool boolVal{ true };
  char charVal{ 'A' };
  int intVal{ 42 };
  double doubleVal{ 3.141 };
  string stringVal{ "Hello World" };

  cout << "Initial Values" << endl << endl;
  cout << "Bool: " << boolVal << endl;
  cout << "Char: " << charVal << endl;
  cout << "Int: " << intVal << endl;
  cout << "Double: " << doubleVal << endl;
  cout << "String: " << stringVal << endl;

  cout << endl << "Get some new values" << endl << endl;
  cout << "Enter a bool...";  cin >> boolVal;
  cout << "Enter a char...";  cin >> charVal;
  cout << "Enter an int...";  cin >> intVal;
  cout << "Enter a double...";  cin >> doubleVal;
  cout << "Enter a string..."; cin >> stringVal;

  cout << endl << "Updated Values" << endl << endl;
  cout << "Bool: " << boolVal << endl;
  cout << "Char: " << charVal << endl;
  cout << "Int: " << intVal << endl;
  cout << "Double: " << doubleVal << endl;
  cout << "String: " << stringVal << endl;
}

