// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: ceaser cipher.cpb
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: Mohamed Magdy 20170251
// Teaching Assistant: Eng.Omar
// Purpose:encryption & decryption
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char message[100],ch;
    int i,shift;
    cout << "enter a message u want to encrypt!:";
    cin.getline(message , 100);
    cout << "how many letters u want to shift?:";
    cin >> shift;
    for(i = 0 ; message[i] != '\0' ; ++i){ // the '\0' means the end of the string(terminate the string)
        ch = message[i];

        if(ch >= 'a' && ch <= 'z'){
            ch = ch + shift;
            if(ch > 'z' ){ // in ASCII
                    ch = ch -'z' + 'a' - 1;// to take just letters
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + shift;
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    cout << "your encrypted message is : " << message << endl;
    return 0;
}
