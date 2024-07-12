#include <iostream>
using namespace std;

// Validating a string
int validate(char *name)
{
    cout<<name;
    int i;
    for(i=0;name[i]!='\0';i++){
    if (!(name[i]==' ')&&!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
    {
        return (0);
    }
         return (1); 
    }
   
}

int main()
{
    char a[] = "How are you?";
    char name[]="hariDhaker";
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            count = count + 1;
        }
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            cout << a[i] << ' ';
        }
    }
    cout << "The total number of words are " << count + 1<<'\n';

        if(validate(a)){
            cout<<"valid";
        }
        else{
            cout<<"invalid";
        }

    return 0;
}