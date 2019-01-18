#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

int main()
{
    clrscr(); // this clears the screen in case the user has looped back to the start of the program to choose another game.

    unsigned int n; // assigning an integer to the Switch case statement.

    printf("Please press 1 for the Quiz   game, \npress 2 for the Concentration game\n"); // The printf statement writes variables to the console for the user to read.

    scanf("%d", &n); // scanf is a statement that allows the user to input different variable types. in this case an integer.

    switch(n) // The Switch statement allows for the user to select what game they want to play and is often a faster than a nested if else statement.
    {
    case 1: // Case allows user to choose which game to play
        // Quiz game goes here
        quiz();
        break; // break is the end point of the code block that is in the case statement.
    case 2:
        // Concentration game here
        con();
        break;
    }
    return 0;
}





int quiz()
{
    unsigned int n;

    clrscr();

    printf("please choose a quiz.\n");
    printf("Press 1 for the history quiz\n");
    printf("Press 2 for the Cinema quiz\n");
    printf("Press 3 for Music quiz.\n");
    printf("press 4 for Video game quiz.\n");

    scanf("%d", &n);

    switch(n)
    {
    case 1:
        historyQuiz();
        break;
    case 2:
        filmQuiz();
        break;
    case 3:
        musicQuiz();
        break;
    case 4:
        videoGameQuiz();
        break;
    }

    main();
    return 0;
}




int historyQuiz()
{
    int i;
    int score = 0;
    clrscr();
    printf("Welcome to the history trivia quiz, to answer the questions please press 1,2,3 or 4 and press enter.");
    Sleep(2500);
    clrscr();

    printf("Question 1) In what year was the battle of Hastings?\n");
    printf("1)1076               2)1066 \n3)1166               4)1995\n");
    scanf("%d", &i);
    if(i == 2)
    {
        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 2) Who designed Regent's park in London in 1811?\n");
    printf("1)James Nash              2)Andrew Johnson \n3)William Booth           4)John Nash\n");
    scanf("%d", &i);
    if(i == 4)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 3) In 1972, Who became the first man to fly solo and non-stop across the Atlantic?\n");
    printf("1)Charles Lindbergh          2)Chuck Yeager \n3)Jimmy Doolittle            4)Amelia Earhart\n");
    scanf("%d", &i);
    if(i == 1)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 4) Which famous battle took place on Sunday, 18th June, 1815?\n");
    printf("1)The battle of Stalingrad           2)The battle of Antietam \n3)The battle of Waterloo             4)The battle of Arfaon\n");
    scanf("%d", &i);
    if(i == 3)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 5) Which King of England was executed in 1649 during the English civil war?\n");
    printf("1)Charles the first          2)James the sixth \n3)Henry the eighth           4)Edward the Fifth\n");
    scanf("%d", &i);
    if(i == 1)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }
    printf("Congratulations on finishing the quiz.\nYour total score was ");
    printf("%d", score);
    Sleep(6000);
    main();
}




int filmQuiz()
{

    int i;
    int score = 0;
    clrscr();
    printf("Welcome to the film trivia quiz, to answer the questions please press 1,2,3 or 4 and press enter.");
    Sleep(2500);
    clrscr();

    printf("Question 1) What year was Forrest Gump released?\n");
    printf("1)1994          2)1989 \n3)1990          4)1985\n");
    scanf("%d", &i);
    if(i == 1)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }



    printf("Question 2) What film does this quote come from:\n'You can't handle the truth.'\n");
    printf("1)The rain maker          2)A few good men \n3)Crimson Tide            4)The pelican brief\n");
    scanf("%d", &i);
    if(i == 2)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }



    printf("Question 3) James Woods Voiced the Villain for which 1997 animated movie?\n");
    printf("1)Rescuers down under          2)Aladdin \n3)Mulan                        4)Hercules\n");
    scanf("%d", &i);
    if(i == 4)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 4) What was Alan Rickman's first feature film role?\n");
    printf("1)Harry potter           2)Robin hood \n3)Die hard               4)Galaxy Quest\n");
    scanf("%d", &i);
    if(i == 3)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 5) What was the highest grossing film of the 80s?\n");
    printf("1)E.T.                 2)Die hard \n3)Forrest Gump          4)Back to the future\n");
    scanf("%d", &i);
    if(i == 1)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }

    printf("Congratulations on finishing the quiz.\nYour total score was ");
    printf("%d", score);
    Sleep(6000);
    main();
}



int musicQuiz()
{

    int i;
    int score = 0;
    clrscr();
    printf("Welcome to the music trivia quiz, to answer the questions please press 1,2,3 or 4 and press enter.");
    Sleep(2500);
    clrscr();

    printf("Question 1) What was Madonna's first UK top ten single?\n");
    printf("1)Like a virgin          2)vogue \n3)Holiday                4)like a prayer\n");
    scanf("%d", &i);
    if(i == 3)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }



    printf("Question 2) Which Radiohead Album has been cited as one of the best albums of all time?\n");
    printf("1)OK Computer          2)Kid A \n3)The Bends            4)Pablo Honey \n");
    scanf("%d", &i);
    if(i == 1)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }



    printf("Question 3) Larry Adler played What instrument?\n");
    printf("1)Piano         2)harmonica \n3)Guitar        4)Drums\n");
    scanf("%d", &i);
    if(i == 2)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 4) John Mayall's band which helped launch Eric Clapton's career was called what?\n");
    printf("1)ZZ top                    2)Muddy Waters \n3)Blues Brothers            4)BluesBreakers\n");
    scanf("%d", &i);
    if(i == 4)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 5) Who Sung 'I'm gonna be (500 miles)'?\n");
    printf("1)The Pretenders                 2)The Proclaimers \n3)The beach boys                 4)The Libertines\n");
    scanf("%d", &i);
    if(i == 2)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }

    printf("Congratulations on finishing the quiz.\nYour total score was ");
    printf("%d", score);
    Sleep(4000);
    main();
}



int videoGameQuiz()
{

    int i;
    int score = 0;
    clrscr();
    printf("Welcome to the Video Game Quiz to answer the question please press 1,2,3 or 4 and the press enter.");
    Sleep(2500);
    clrscr();

    printf("Question 1) What does Mario jump on after Completing a level in Super Mario?\n");
    printf("1)A goomba         2)A Turtle \n3)A flag pole      4)Bowser\n");
    scanf("%d", &i);
    if(i == 3)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 2) What year was the PlayStation 4 released?\n");
    printf("1)2012       2)2009 \n3)2013       4)2015\n");
    scanf("%d", &i);
    if(i == 3)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 3)What is the highest grossing game of all-time?\n");
    printf("1)World of Warcraft                  2)Super Mario sunshine \n3)Grand Theft Auto 5                 4)God of War\n");
    scanf("%d", &i);
    if(i == 1)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 4)What colour are the wings on Spyro the dragon?\n");
    printf("1)Red        2)Blue \n3)Yellow     4)Orange\n");
    scanf("%d", &i);
    if(i == 4)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }


    printf("Question 5)What is the main character of Metal Gear Solid 2?\n");
    printf("1)Solid snake           2)Raiden \n3)Liquid snake          4)Venom snake\n");
    scanf("%d", &i);
    if(i == 2)
    {

        printf("Correct!\n");
        score = score + 1;
        Sleep(1500);
        clrscr();
    }
    else
    {
        printf("Incorrect.");
        Sleep(1500);
        clrscr();
    }

    printf("Congratulations on finishing the quiz.\nYour total score was ");
    printf("%d", score);
    Sleep(4000);
    main();

}


int con()
{
    int g, c;
    unsigned int n;

    clrscr(); // This function clears the Screen ready for the game to take place

    srand((unsigned) time(NULL) * getpid()); //This adds a Seed to the random number generator allowing for it the random number to change.

    c = rand() %(99999 + 1 - 10000) + 10000; //This integer is the random number generated by the seed and this Rand function.

    printf ("%d\n", c);

    Sleep(3000); // This sleep function freezes the number on the screen for a pre-set amount of time.

    clrscr();

    printf("What was the number?\n");

    scanf ("%d", &g); // User input

    if (g == c) // This if statement checks to see if the got the correct answer.
    {
        printf("\nCongratulations you got it right!"); // The win screen.
        Sleep(3000);
    }
    else
    {
        printf("BUZZ!\nIncorrect.\nTry again.\n"); // The losing screen.
        Sleep(3000);
        printf("Press 1 to continue \nOr 2 to exit.\n");
        scanf("%d", &n);
        switch(n)
        {
        case 1:
            con(); // This relaunches the game
            break;
        case 2:
            break;
        }
    }

    main(); // This loops the program back to the start so the user can pick another game.
    return 0;
}





void clrscr()
{
    system("@cls||clear");
    // This is the system function that clears the screen.
}
