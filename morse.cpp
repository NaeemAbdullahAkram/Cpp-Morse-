#include <iostream>
using namespace std;
#include <cstring>  
#include <string>
#include <sstream>

string charToMorse(char letter) {
    letter = toupper(letter); // Convert to uppercase for simplicity

    string morseCode;

    switch (letter) {
        case 'A': morseCode = ".-"; break;
        case 'B': morseCode = "-..."; break;
        case 'C': morseCode = "-.-."; break;
        case 'D': morseCode = "-.."; break;
        case 'E': morseCode = "."; break;
        case 'F': morseCode = "..-."; break;
        case 'G': morseCode = "--."; break;
        case 'H': morseCode = "...."; break;
        case 'I': morseCode = ".."; break;
        case 'J': morseCode = ".---"; break;
        case 'K': morseCode = "-.-"; break;
        case 'L': morseCode = ".-.."; break;
        case 'M': morseCode = "--"; break;
        case 'N': morseCode = "-."; break;
        case 'O': morseCode = "---"; break;
        case 'P': morseCode = ".--."; break;
        case 'Q': morseCode = "--.-"; break;
        case 'R': morseCode = ".-."; break;
        case 'S': morseCode = "..."; break;
        case 'T': morseCode = "-"; break;
        case 'U': morseCode = "..-"; break;
        case 'V': morseCode = "...-"; break;
        case 'W': morseCode = ".--"; break;
        case 'X': morseCode = "-..-"; break;
        case 'Y': morseCode = "-.--"; break;
        case 'Z': morseCode = "--.."; break;
        case '1': morseCode = ".----"; break;
        case '2': morseCode = "..---"; break;
        case '3': morseCode = "...--"; break;
        case '4': morseCode = "....-"; break;
        case '5': morseCode = "....."; break;
        case '6': morseCode = "-...."; break;
        case '7': morseCode = "--..."; break;
        case '8': morseCode = "---.."; break;
        case '9': morseCode = "----."; break;
        case '0': morseCode = "-----"; break;
        default: morseCode = ""; // Return an empty string for non-alphanumeric characters
    }

    return morseCode;
}


string toMorseCode(string alp){
    int l=alp.length();
    string ans="";
    for (int i = 0; i < l ; i++)
    {
        string mor=charToMorse(alp[i]);
        ans+=" "+mor;
        
    }
    
    return ans;
}


string morseToChar(string morseCode) {
    if (morseCode == ".-") return "A";
    if (morseCode == "-...") return "B";
    if (morseCode == "-.-.") return "C";
    if (morseCode == "-..") return "D";
    if (morseCode == ".") return "E";
    if (morseCode == "..-.") return "F";
    if (morseCode == "--.") return "G";
    if (morseCode == "....") return "H";
    if (morseCode == "..") return "I";
    if (morseCode == ".---") return "J";
    if (morseCode == "-.-") return "K";
    if (morseCode == ".-..") return "L";
    if (morseCode == "--") return "M";
    if (morseCode == "-.") return "N";
    if (morseCode == "---") return "O";
    if (morseCode == ".--.") return "P";
    if (morseCode == "--.-") return "Q";
    if (morseCode == ".-.") return "R";
    if (morseCode == "...") return "S";
    if (morseCode == "-") return "T";
    if (morseCode == "..-") return "U";
    if (morseCode == "...-") return "V";
    if (morseCode == ".--") return "W";
    if (morseCode == "-..-") return "X";
    if (morseCode == "-.--") return "Y";
    if (morseCode == "--..") return "Z";
    if (morseCode == ".----") return "1";
    if (morseCode == "..---") return "2";
    if (morseCode == "...--") return "3";
    if (morseCode == "....-") return "4";
    if (morseCode == ".....") return "5";
    if (morseCode == "-....") return "6";
    if (morseCode == "--...") return "7";
    if (morseCode == "---..") return "8";
    if (morseCode == "----.") return "9";
    if (morseCode == "-----") return "0";
    return ""; // Return an empty string for unrecognized Morse code
}




string toAlp(string ms){
    int length=ms.length();
    string ans=" ";

    istringstream iss(ms);
    string word;
      while (iss >> word) {
        ans+=morseToChar(word);
    }

    
    return ans;
    
}







int main(){
    int op;
    bool loop=true;
    
    while (loop==true)
    {
        string alp;
        int check;
         cout<<"Choose: \n\n";
    cout<<"1.To Morse Code\n2.To Alphabets\n\n";
    cin>>op;
    cin.ignore();
    if (op==1)
    {
        cout<<"Enter:";
        getline(cin, alp);
        cout<<"Your Input:"<<alp<<endl;
        cout<<"Generated:"<<toMorseCode(alp)<<endl;
        cout<<"More Inputs?, Press 1 to recall"<<endl;
        cin>>check;
        if(check!=1){
            loop=false;
        }
    }
    
    else if(op==2){
        cout<<"Enter:";
        getline(cin,alp);
        cout<<"\nYour Input:"<<alp;
        cout<<"\nGenerated:"<<toAlp(alp);

        cout<<"\n\nMore Inputs?, Press 1 to recall";
        cin>>check;
        if(check!=1){
            loop=false;
        }
    }
    else{
        cout<<"Wrong input";
    }
    }
    
    
   
    
    return 0;
}