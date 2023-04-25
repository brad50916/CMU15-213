/*
 * Mr. Evil specifically designed this file to have special information about
 * the UC Stones. We have been trying to understand what information is hidden,
 * but we are unsure of how to understand the gibberish in this file.
 *
 * If you are trying to compile this code, run: $ gcc listened.c
 * To view the output of the code after compiling, run: $ ./a.out
 *
 * DISCLAIMER: This file uses Magic Numbers which are NOT allowed in your code,
 * but Mr. Evil is not a 213 student, so sometimes his code does not have good
 * style. Hopefully, you can see how his lack of style makes it hard to
 * understand his code! We tried to go through his code to improve the
 * readability of his code, but we were too slow! :-o
 */

#include <stdio.h>
#include <string.h>

/*
 * [TODO]: We are missing a bunch of code here. We believe that the missing
 * code is located in start/we_tried_to/them/no.txt. Hopefully you can copy the
 * code into this location [where it says PASTE CODE HERE].
 *
 * Make sure to redirect the output of the code execution to
 * start/we_tried_to/them/but.txt!
 *
 * It might be helpful to numerically sort the contents of the output to
 * figure out the magic number! Tell Mr. Evil the first number after you
 * numerically sort! [so, maybe use 'sort -n'?]
 * It will probably be easiest to use a PIPE to help you. Consider using
 * 'head -n 1' in your pipe to only view the  first line of the output.
 */

// PASTE CODE HERE!

/*
 * @brief Prints out information depending on the value of the iterator
 *
 * NOTE TO SELF: Try to make this more confusing
 */
void foo_2() {

    int x;
    // uses a for loop to print out a bunch of garbage
    // Good luck finding my plans!!
    for (x = 0; x < 129; x = x + 1) {
        if (x < 64) {
            if (x % 2 == 0) {
                if (x % 3 == 0)
                    printf("%d Mr. Evil loves pizza! \n", x + 72);
                if (x % 5 == 1)
                    printf("%d Mr. Evil has secret plans! \n", x + 64);
                if (x % 3 == 2)
                    printf("%d You will never find the secret message! \n", x + 384);
                printf("%d Ooh a ~mystery~! \n", x + 512);
            }
            else {
                if (x % 3 == 1)
                    printf("%d Mr. Evil loves the minions!\n", x + 213);
                if (x % 5 == 4)
                    printf("%d Mr. Evil can make good jokes!\n", x + 535);
                if (x % 3 == 0)
                    printf("%d What's black and white and read all over? \n", x + 74);
                printf("%d A newspaper! \n", x + 71);
            }
        }
        // does stuff if even number
        if (x % 2 == 0) {
            if (x % 3 == 0)
                printf("%d Mr. Evil loves pizza! \n", x + 54);
            if (x % 5 == 1)
                printf("%d Mr. Evil has secret plans! \n", x + 72);
            if (x % 3 == 2)
                printf("%d You will never find the secret message! \n", x + 940);
            printf("%d Ooh a ~mystery~! \n", x + 329);
        }
        // does stuff otherwise... it's a lot of code!
        else {
            if (x % 3 == 1)
                printf("%d Mr. Evil love the minions! (despicable me!) \n", x + 613);
            if (x % 5 == 4)
                printf("%d Mr. Evil can make good jokes!\n", x + 540);
                // hmmm.... I'm also good at memes. Maybe this file is just a
                // big meme?
            if (x % 3 == 0)
                printf("%d What's black and white and read all over? \n", x + 69);
            printf("%d A newspaper! \n", x + 513);
        }
    }
}

/*
 * @brief Prints out helpful information about how many students are HACKING
 * our servers.
 */
void setup() {
    int x = 32;
    int y = 2;

    printf("99 GOOD LUCK trying to figure out the number you need to move on to the next phase :) \n");
    printf("99 %d This is the total number of square feet taken up by the UC Stones. \
    \n99 When capturing the stones, all stones must fit within the space. Carnegie Mellon \
    \n99 Engineers might be helpful for this project. \n", x * y);

    printf("99 %d Students have tried to use this approximation to understand how many \
    \n99 hundreds of pounds of UC Stones are actually in captivity.... They need to \
    \n99 work on their estimation skills. \n", x * y * y);

    printf("99 However, the actual amount of captured stones is significantly higher \
    \n99 than the weak approximation. We are afraid that the students at Carnegie Mellon \
    \n99 need to improve their abilities to estimate. \n");

    for (y = 2; y < 16385; y = y * 2) {
        printf("%d So far, we believe that %d students have access to Mr. Evil's plans. \
        \n%d As we are writing this information out, we firmly believe that this is only a conservative \
        \n%d estimate of how many students are breaching our plans :( \n", y + 48, y, y + 48, y + 48);
    }

    y = 2;
    bar (x/y);
}

// the main file that is executed first
int main() {
    // beginning output
    printf("128 This code contains important information about the\
    \n128 UC Stones. Each information is crucial for Mr. Evil's plans, and no one can \
    \n128 understand what his plans are! That is unless you want an unhappy ending...\n");
    setup();

    // some ~secret~ default values
    int x = 5;
    int y = 78;
    int z = y - x;

    foo(z);
    foo_2();
    // end of output
    printf("140 You might want to use a pipe and only look at the first few lines of the file \
    \n140 after you execute the code. Also, if you are confused, you might want to look at the original\
    \n140 ToDo in the comments of listned.c! \n");
    return 0;
}
