#include<iostream>
#include "header.h"
using namespace std;
int main(){
    cout<<"Namaste"<<endl;
    display();
}

/*
To run it use these commands 
g++ main.cpp display.cpp -o main
if ($?) { .\main }

main is the name of the output file generated here could be given any name as your choice

VS Code mein "Run Code" button ka default behavior typically sirf ek file ko compile aur run karna hota hai, jaise ki currently visible file ya active file. Agar tum chahte ho ki "Run Code" button multiple files ko compile aur run kare, toh tumhein VS Code ke settings mein changes karna hoga.

Iske liye:

1. **Settings Open karo:**
   - VS Code ko open karo.
   - `Ctrl + ,` (Windows) ya `Cmd + ,` (Mac) press karo, jo settings ko open karega.

2. **Run Code settings dhoondho:**
   - Search bar mein `code-runner.executorMap` type karo.

3. **ExecutorMap mein changes karo:**
   - Is setting mein, tumhein `cpp` language ke liye executor map karna hoga.
   - `cpp` language ke liye, `executorMap` mein ek command define karo jo saare `.cpp` files ko compile kare aur run kare.

   Example:
   ```json
   "code-runner.executorMap": {
       "cpp": "g++ -o $fileNameWithoutExt $fullFileName && ./a.out"
   }
   ```
   Yahan, `$fileNameWithoutExt` current file ka naam bina extension ke represent karta hai aur `$fullFileName` pura file path.

   Is tarah ke settings se, jab bhi "Run Code" button press kiya jayega `.cpp` file par, woh saare `.cpp` files ko compile karke run honge.

Settings ko customize karne ke baad, "Run Code" button se code ko run karne se pehle ek baar VS Code ko restart karna pad sakta hai, taki naye settings apply ho sakein.

Fun Fact: Did you know the Golden Temple, also known as Sri Harmandir Sahib, in Amritsar, Punjab, welcomes people from all walks of life and serves free meals (langar) to thousands of visitors every day?
*/