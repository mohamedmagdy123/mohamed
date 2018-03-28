#include <iostream>

using namespace std;

int main()
{
    char message[100],ch;
    int i,shift;
    cout << "enter a message u want to decrypt!:";
    cin.getline(message , 100);
    cout << "how many letters u want to shift?:";
    cin >> shift;
    for(i = 0 ; message[i] != '\0' ; ++i){
        ch = message[i];

        if(ch >= 'a' && ch <= 'z'){
            ch = ch - shift;
            if(ch > 'z' ){
                    ch = ch +'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - shift;
            if(ch > 'Z'){
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }
    cout << "your decrypted message is: " << message << endl;
    return 0;
}

