#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {                        //credit gauthier boaglio i literally made none of this
        str.replace(start_pos, from.length(), to);    
        start_pos += to.length();
    }
    return str;
}

std::string translate(std::string input)
{

    system("cls");
    std::string a,b,c,d,e,f,g;
    a = ReplaceAll(std::string(input), std::string("l"), std::string("w"));
    b = ReplaceAll(std::string(a), std::string("r"), std::string("w"));
    c = ReplaceAll(std::string(b), std::string("what"), std::string("wat"));
    d = ReplaceAll(std::string(c), std::string("?"), std::string("??"));           //This is a stupid idea. Too bad!
    e = ReplaceAll(std::string(d), std::string("!"), std::string("!!"));          
    f = ReplaceAll(std::string(e), std::string("idiot"), std::string("baka"));

    srand(time(NULL));
    int randNum = rand() % 3;

    std::string faceDictionary[8] = { ":3", "uwu", "owo","uwU","OwO","UwU","(uwu)","cX" };
    f = f + " " + faceDictionary[randNum];
    return(f);
}

void loop()
{
     std::string userInput;
     getline(std::cin, userInput);
     std::cout << "" << translate(userInput) << "\n\n";
     loop();
}




int main()
{
    SetConsoleTitle(TEXT("uwu twanswator"));
    loop();
}