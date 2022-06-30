#include <unistd.h>
#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {
  string cmd;
  string file1;
  
  string gaem;
  string file;
  char* user = getenv("cred1");
  char* pass = getenv("cred2");
  string enter;
  char* accept = getenv("accept");
  string file2;
  char randomchr;
  string key;
  string acceptedusers[4] = {"camry2010", "skrrtskrrt", "imbored", "Hey! What the hell are you doing in my code? And I just realised that the variables are at the top of the code so if im correct you would've seen it anyways."};
  string file3;
  int bc_option;
  int num1;
  int num2;
  int sum;
  char o;
  cout << "Type help for commands.\n";
  for(;;) {
    cout << ">>";
    cin >> cmd;
    if (cmd == "cls") {
      system("CLS");
    }
    else if (cmd == "help") {
      cout << "Command list - subject to change\n";
      cout << "PadNote - Text Editor.\n";
      cout << "file1-3 - PadNote files. 3 slots are available\n";
    } else if (cmd == "E") {
      cout << "OH NO E\n";
    } else if (cmd == "PadNote") {
      cout << "Please be aware that spaces wont work. Use _ instead. I know, its stupid.\n";
      cout << "Select File (1/2/3)";
      cin >> file;
      if (file == "1") {
        cin >> file1;
        cout << "Accesable by typing the file slot at prompt\n";
      } if (file == "2") {
        cin >> file2;
        cout << "Accesable by typing the file slot at prompt\n";
      } else if (file == "3") {
        cin >> file3;
        cout << "Accesable by typing the file slot at prompt\n";
      }
    }else if (cmd == "file1") {
      cout << file1 << "\n";
    } else if (cmd == "file2") {
      cout << file2 << "\n";
    } else if (cmd == "file3") {
      cout << file3 << "\n";
    } else if (cmd == "epic") {
      cout << "from epic games\n";
    } else if (cmd == "system32") {
      cout << "system32";
    } else if (cmd == "yeehaw") {
      cout << "Wow. Wow.\n";
    } else if (cmd == "bad") {
      cout << "Bad command or file name.\n";
    } else if (cmd == "addcalc") {
      cout << "Enter number 1\n";
      cin >> num1;
      cout << "Enter Number 2\n";
      cin >> num2;
      sum = num1 + num2;
      cout << sum << " is the answer.\n";
    } else if (cmd == "HelloWorld") {
      cout << "Babies first C line.\n";
    } else if (cmd == "Megalovania") {
      cout << "Sans\n";
    } else if (cmd == "Apple") {
      cout << "APPLE SMASH\n";  
    } else if (cmd == "notepad") {
      cout << "Wh- You dont know the PadNote command?\n";
      cout << "Well, type PadNote at the prompt. Its case sensitive\n";
    } else if (cmd == "bananacomputers"){
      cout << "Banana Computers incorporated\n";
      cout << "Select what product\n";
      cout << "1. Banana Laptop \n2. Banana Desktop\n3. Banana Package\n";
      cin >> bc_option;
      if (bc_option == 1) {
        cout << "Thank you for ordering the laptop.\n";
        cout << "Copyright Banana PCs 1765 - 2077\n";
      }else if (bc_option == 2) {
        cout << "Thank you for ordering the Desktop.\n";
        cout << "Copyright Banana PCs 1765 - 2077\n";
      }else if (bc_option == 3) {
        cout << "Thank you for ordering all of the things\n";
        cout << "Copyright Banana PCs 1765 - 2077\n";
      }
    } else if (cmd == "win32") {
      cout << "Windows 3.1\n";
      cout << ".";
      cout << ".";
      cout << ".\n";
      cout << "Could not load Windows\nC:/Windows/System31/Knowledgeof3.1\nFile 'knowledgeof3.1 failed. Error note:\ni haven't used 3.1 in too long\nContinuing in DOS mode\n";
    } else if (cmd == "givemeyourmoney") {
      cout << "It's at WALMART.\n";
    } else if (cmd == "pogbillyiscool") {
      cout << "No idea what you just said! So I will opt into not answering\n";
      cout << "Nevermind! I will instead answer with my own nonsense.\n";
      cout << "If pog billy is cool then what about zacharviea? Isn't he cool?\n";
    } else if (cmd == "wowzerslikesosuperduperwowimjustwowedbythewowingness") {
      cout << "I've had enough of this.\n";
      cout << "SYSTEM: Shutting down.\n";
      sleep(5);
      return 0;
    } else if (cmd == "aot") {
      cout << "Noah, ask yourself if I would sacrifice my antiweeb ways for you to try out a program.\n";
    } else if (cmd == "MyHeroAcadamia") {
      cout << "Reuben, read line 102 of my code.\n";
    } else if (cmd == "pizz") {
      cout << "Cohncawlolsraksfj\n";
    } else if (cmd == "DooM") {
      cout << "The demons are back again?\n";
      cout << "Oh no.\n";
      sleep(5);
      return 0;
    } else if (cmd == "anime") {
      cout << "Get out.";
      sleep(5);
      return 0;
    } else if (cmd == "calc") {
      cout << "Select operation. t/a/s/d\n";
      cin >> o;
      cout << "Select number 1.\n";
      cin >> num1;
      cout << "Select number 2\n";
      cin >> num2;
      if (o == 't') {
        sum = num1 * num2;
        cout << sum << "\n";
      } else if (o == 'a') {
        sum = num1 + num2;
        cout << sum << "\n";
      } else if (o == 's') {
        sum = num1 - num2;
        cout << sum << "\n";
      } else if (o == 'd') {
        sum = num1 / num2;
        cout << sum << "\n";
      }
    }else if (cmd == "scappitybapbap") {
      cout << "scappitybapbapnappitywapwap\n";
      return(0);
    }
    else {
      cout << "Command unknown.\n";
    }
  }
}
