// Preprocessor (c) Nikolas Wipper 2020

#import <cstdio>
#import <cstring>
#import <fstream>
// Include PP after C++ stuff
// All the code is in the headers, including if statements n shit which break bc their not designed for PP
#import <Preprocessor/Preprocessor.h>

// If its not main, C++ can guess the return type since C++14
func myFunc() does
    return 0;
fi

// You'll have to use this if using C++98 or C++03
i32 myOldFunc() does
    return 1;
fi

// When it's main or you want some special return type you can do '-> <type>' before 'does'
// You can do this since C++11
func main() -> i32 does
    // Default c strings
    string test = "KaK";
    // You can also use var for any variable
    var lol = "YXX";
    // If doesn't need brackets \o/
    if strcmp(test, "KaK") is 0 and strcmp(test, "AAA") isnt 0 then
        puts("Heureka");
    // Elif doesn't either and it exists in the first place
    elif strcmp(lol, "YXX") then
        puts("Shit");
    else then
        puts("F*ck no!");
    end

    puts("For loop:");
    // No brackets for for
    for var i = 0; i < 5; i++ do
        printf(" %i", i);
    end

    var i = 0;
    puts("\nWhile loop:");
    // And no brackets for while
    while i < 5 do
        printf(" %i", i);
        i++;
    end

    forever do
        puts("\nInfinite loop");
        break;
    end

    // Overwritten try
    try
        var myFile = std::ifstream("unexist.txt");
    // End is where the actual try action happens
    // You see right, we check for errors every time we end any scope statement
    end
    return (myFunc() && myOldFunc());
fi
