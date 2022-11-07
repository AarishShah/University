/*Display your name on the screen*/

#include <stdio.h> /*Standard Input(keyboard) and Output(Screen) header file. Header Files have have certain code within them so that "C" can understand the interaction/devices we use to communicate with the language.*/
#include <conio.h> /*Console Input and Output. It's also a header file. Commands like clrscr (); and getche (); work by introducing/including this header file.*/

void main() /*"C language" must have at least one main function called main. Every function must be followed by paranthesis which may or may not be empty and it's body is either followed by semi colon (;) or contained within curly brackets ({})*/

{

    //clrscr(); /*This function doesn't work in Modern IDEs. Deleting this line would run the code without errors. This clears the screen.*/

    printf("Hello World"); /*C is case sensitive. printf is a command to print file or display the text/file etc. on output screen.*/

    getch(); /*Output screen doesn't last for too long. The screen would disappear as soon as the code is executed/ends so getche is used to get character from keyboard and then the program would end when any character is taken from the keyboard. No need for this command in modern IDEs*/
}