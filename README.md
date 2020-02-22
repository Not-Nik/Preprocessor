# Preprocessor
A C-thing based on preprocessor directives
Use with C++ is even more exiting tho

## How to use
Look into the Tests directory for a basic usage example

## How to build
Simple cmake action: `cmake . && make install`

## Questions and help
If you need help... You won't need any it's friggin' defines.

Q: Is this a serious project<br>
A: No, it's obviously a meme

Q: Updates?<br>
A: Maybe. Feel free to add some shit via PR's

Q: When should I use this?<br>
A: ~~Never. Using this is a shit idea. It uses fucking void pointers for every single variable.~~
As there are no weird void pointers anymore and I made pretty nice error outputs, this may actually be usable.
Try it if you are familiar with C and aware that this can and probably will cause cancer somewhere in your body.

Q: I don't quite get what my code does<br>
A: You actually made code? However; most systems feature a `cpp` command that applies the C preprocessor.
Simply type `cpp <myfile.c/cpp>` if you installed this or `cpp -Ipath/to/project/root/include <myfile.c/cpp>`
This will output how your code looks like with all the macros applied. Keep in mind that all the types are typedefs
and `cpp` will **not** resolve them.

Q: I got another question!<br>
A: Good for your. Bake yourself an icecream!
