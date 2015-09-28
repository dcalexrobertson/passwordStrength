//
//  main.c
//  Password Strength Challenge
//
//  Created by Alex on 2015-09-26.
//  Copyright © 2015 Alex. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    char password[10];
    int dollar = 0;
    int number = 0;
    int letter = 0;
    int x = 0;
    
    while (x == 0) {
        printf("Please enter password.\nIt must contain at least 1 letter, 1 number and a dollar sign: \n");
        scanf("%s", password);
        
        for (int i = 0; i < 10; i++) {
            if (password[i] == '$') {
                dollar = 1;
            }
            if (isalpha(password[i])) {
                letter = 1;
            }
            if (isdigit(password[i])) {
                number = 1;
            }
            
        }
        
        if (dollar + letter + number == 3) {
            printf("That's a strong password, yo.\n");
            x = 1;
        } else {
            printf("That password is weak, yo. Let's try this shit again.\n");
        }
    }
    
    return 0;
}
