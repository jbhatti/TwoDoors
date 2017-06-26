//
//  FindingBugs.c
//  TwoDoors
//
//  Created by Jaison Bhatti on 2017-06-26.
//  Copyright © 2017 Jaison Bhatti. All rights reserved.
//

#include "FindingBugs.h"
#include <stdio.h>

// ERRORS ARE NOTED IN COMMENTS

int main(int argc, const char * argv[]) {
    
    char play;
    char choice; //should be an integer type as we are expecting a numeric value
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%d", &play); //should not be %d, should be %s for string type
    
    if (play = 'y') { //should have 2 = signs
        
        print("\nYou are a prisoner in a room with 2 doors and 2 guards.\n"); //the print and scan is missing an f from lines 23-31
        print("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        print("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        print("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        print("What do you ask so you can pick the door to freedom?\n\n");
        print("\t1.Ask the truth-guard to point to the door of doom.\n");
        print("\t2.Ask the liar-guard to point to the door of doom.\n");
        print("\t3.Doesn't matter which one you pick.\n");
        scan("%f", choice); //choice is not a float, should read as %d, since choice is an int
        
        char answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n"; //should be a pointer char (char*. and this state should be with the declarations at the top
        switch (choice) {
            case 1:
                print("c", answer); //the print is missing an f and should read as %s since answer is a string - this error occurs in line 39 and 42
                break;
            case 2:
                print("c", answer);
                break;
            case 3:
                print("c", answer);
                break;
            default: //a statement should be included for cases that are not 1,2,3
                break;
        }
    }
    
    return 1; //this should return 0 since the main argument is null
}
