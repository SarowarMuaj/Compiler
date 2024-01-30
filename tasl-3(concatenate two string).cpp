#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
string FirstN, LastN, FullN;
int i;
cout <<"  Enter your first name: ";
cin >> FirstN;
cout << "  Enter your second name: ";
cin >> LastN;
for ( i = 0; i < FirstN.size(); i++)
{
FullN = FullN + FirstN[i];
}

    char ch = ' ';

    FullN.push_back(ch);

for ( i = 0; i <LastN.size(); i++)
{
FullN = FullN + LastN[i];
}
cout << " Your full name is " <<FullN<<endl;
return 0;
}
