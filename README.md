# Head First C

A collection a C programs while learning the C programming language using the "Head First C (2012)" ebook on the year 2021.

## Sharpen Your Pencil

1. Try to guess what each of these code fragments does:

```c
int card_count = 11;                            // assign 11 to card_count
if (card_count > 10)                            // check if the value of card_count is greater than 10
        puts("The deck is hot. Increase bet."); // displays a string of text
```

```c
int c = 10;                                      // assign 10 as the value of c
while (c > 10) {                                 // check if the value of c is greater than 10
        puts("I must not write code in class."); // display a string of text
        c = c - 1;                               // subtract 1 to the current value of c
}
```

```c
/* Assume name shorter than 20 chars. */     // a comment
char ex[20];                                 // create an array of 20 characters
puts("Enter boyfriend's name: ");            // accept a string input from the user
scanf("%19s", ex);                           // store the string input to ex variable
printf("Dear %s.\n\nYou're history.\n", ex); // print a message appending the user input
```

```c
char suit = 'H';          // Assign 'H' to character variable suit
switch (suit) {           // Check what is the current value of suit
case 'C':                 // Check if the value is 'C'
        puts("Clubs");    // Display a text
        break;            // Exit
case 'D':                 // Check if the value is 'D'
        puts("Diamonds"); // Display a text
        break;            // Exit
case 'H':                 // Check if the value is 'H'
        puts("Hearts");   // Display a text
        break;            // Exit
default:                  // The default case
        puts("Spades");   // Display a text
}
```

Created by [Billy Arante](http://billyarante.com)
