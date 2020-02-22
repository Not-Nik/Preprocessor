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

// When it's main our you want some special return type you can do '-> <type>' before 'does'
// You can do this since C++11
func main() -> i32 does
    // Default c strings
    string test = "KaK";
    string lol = "YXX";
    // If doesn't need brackets \o/
    if strcmp(test, "KaK") is 0 and strcmp(test, "AAA") isnt 0 then
            printf("Heureka\n");
    // Elif doesn't either and it exists in the first place
    elif strcmp(lol, "YXX") then
            printf("Shit\n");
    else then
            printf("F*ck no!\n");
    end

    // Overwritten try
    try
        std::ifstream myFile("unexist.txt");
    // End is where the actual try action happens
    // You see right, we check for errors every time we end any scope statement
    end
    return (myFunc() && myOldFunc());
fi
