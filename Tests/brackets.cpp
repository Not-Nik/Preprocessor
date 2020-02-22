// Preprocessor (c) Nikolas Wipper 2020

#import <cstdio>
#import <cstring>
#import <fstream>

#define IWANTBRACKETS
// Include PP after C++ stuff
// All the code is in the headers, including if statements n shit which break bc their not designed for PP
#import <Preprocessor/Preprocessor.h>

// If its not main, C++ can guess the return type since C++14
func myFunc()
{
    return 0;
}

// You'll have to use this if using C++98 or C++03
i32 myOldFunc()
{
    return 1;
}

// When it's main our you want some special return type you can do '-> <type>' before 'does'
// You can do this since C++11
func main() -> i32
{
    // Default c strings
    string test = "KaK";
    string lol = "YXX";

    // We have cleaner code, but have to use parentheses
    if (strcmp(test, "KaK") is 0 and strcmp(test, "AAA") isnt 0)
        puts("Heureka");
    elif (strcmp(lol, "YXX"))
        puts("Shit");
    else
        puts("F*ck no!");

    puts("For loop:");
    // No brackets for for
    for (int i = 0; i < 5; i++)
        printf(" %i", i);

    int i = 0;
    puts("\nWhile loop:");
    while (i < 5)
    {
        printf(" %i", i);
        i++;
    }

    std::ifstream myFile("unexist.txt");
    // We don't have the overwritten try but we can still check for errors
    checkError()
    return (myFunc() && myOldFunc());
}
