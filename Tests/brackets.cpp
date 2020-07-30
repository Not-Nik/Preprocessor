// Preprocessor (c) Nikolas Wipper 2020

#import <cstdio>
#import <cstring>
#import <fstream>

#define IWANTBRACKETS
// Include PP after C++ stuff
// All the code is in the headers, including if statements n shit which break bc their not designed for PP
#import <Preprocessor/Preprocessor.h>

func myFunc()
{
    return 0;
}

i32 myOldFunc()
{
    return 1;
}

func main() -> i32
{
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
    for (int i = 0; i < 5; i++)
        printf(" %i", i);

    int i = 0;
    puts("\nWhile loop:");
    while (i < 5)
    {
        printf(" %i", i);
        i++;
    }

    forever {
        puts("\nInfinite loop");
        break;
    };

    std::ifstream myFile("unexist.txt");
    // We don't have the overwritten try but we can still check for errors
    checkError()
    return (myFunc() && myOldFunc());
}
