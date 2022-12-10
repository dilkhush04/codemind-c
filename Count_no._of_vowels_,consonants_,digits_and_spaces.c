

//this code easy to by doing c++ program

#include <bits/stdc++.h>
using namespace std;
void countCharacterType(string str)
{
    int vowels = 0, consonant = 0, whitespace = 0, 
        digit = 0;
    for (int i = 0; i < str.length(); i++) {
           
        char ch = str[i];
  
        if ( (ch >= 'a' && ch <= 'z') || 
              (ch >= 'A' && ch <= 'Z') ) {
            ch = tolower(ch);
  
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonant++;
        }
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            whitespace++;
    }
  //  printf("Vowels: %s"vowels);
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Digits: " << digit << endl;
    cout << "White spaces: " << whitespace << endl;
}
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    countCharacterType(str);
    return 0;
}