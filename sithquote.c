#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/****************************************************/
/*Change this line to declare yur custom quote file */

const char* dir = { "/home/joe/.quotes" };
/****************************************************/

void sith_q (void);
void user_q (void);
void processing (char *text);

int main (int argc, char *argv[])
{
    if (argc == 1){
	/* no arguments passed so start a pipe*/
	/* if ran without pipe, takes user typing */
	/* Ctrl^d will send EOF and break loop */
	int c, i = 0;
	c = getchar();
	while (c != EOF) {
	    putchar(c);
	    printf("\033[1;3%dm", i++);
	    c = getchar();
	    if(i == 8){i = 0;}
	}
    printf("\033[1;m\n");

    } else {
	int n, m, l, ch;
	for( n = 1; n < argc; n++ )            /* Scan through args. */
	{
	    switch( (int)argv[n][0] )            /* Check for option character. */
	    {
	    case '-':
	    case '/':
		l = strlen( argv[n] );
		for( m = 1; m < l; ++m ) /* Scan through options. */
		{
		    ch = (int)argv[n][m];
		    switch( ch )
		    {
		    case 'a':
			user_q();
			break;
		    case 'q':
			sith_q();
			break;
		    case 'c':
			processing(argv[2]);
			break;
		    default:
			printf("not a valid switch\n");
			break;
		    }
	    }
	}
    }
    }
    return 0;
}

void sith_q (void) /* sequential passing */
{
    srand(time(NULL));
    char *quote;
    int r = rand() % 20; /*This sets the range allowed*/
    switch(r) {
    case 1:
	quote = "Savior, conqueror, hero, villain. You are all things...and yet you are nothing. In the end you belong to neither the light nor the darkness. You will forever stand alone. -Darth Malak";
	break;
    case 2:
	quote = "Wipe this pathetic planet from the face of the galaxy! -Darth Malak";
	break;
    case 3:
	quote = "You are strong, child--but I will break you! -Darth Malak";
	break;
    case 4:
	quote = "Your predecessor once made the mistake of questioning my orders, Admiral, surely you're not so foolish as him to commit the same mistake...-Darth Malak";
	break;
    case 5:
	quote = "Failure means death, Admiral.-Darth Malak";
	break;
    case 6:
	quote = "Fear. Fear attracts the fearful. The strong. The weak. The innocent. The corrupt. Fear. Fear is my ally. -Darth Maul";
	break;
    case 7:
	quote = "Have you come here for answers? There are none. She hopes that you will be spared, only so you might suffer. -Darth Sion";
	break;
    case 8:
	quote = "I have studied you, and found nothing but weakness. -Darth Sion";
	break;
    case 9:
	quote = "Have you come here to die like the Jedi before you? This place is a graveyard for your kind. The call of Korriban is strong, but it is the call of the dead. It is fitting that you came here. -Darth Sion";
	break;
    case 10:
	quote = "Long have I waited for the last of the Jedi to fall at my feet. -Darth Sion";
	break;
    case 11:
	quote = "You are a wretched thing, of weakness and fear. -Darth Sion";
	break;
    case 12:
	quote = "She shields him, protects him. I will destroy everything she loves, all that she holds dear. I will cast his corpse at her feet; it will be as if killing her children. -Darth Sion";
	break;
    case 13:
	quote = "I can die a hundred times, Exile, and each time I shall rise, as strong as before. -Darth Sion";
	break;
    case 14:
	quote = "She will try to break you, and when she does you will fall, and if you do, you will die. -Darth Sion";
	break;
    case 15:
	quote = "As long as the dark side flows through the cracks of my flesh, I cannot be killed. -Darth Sion";
	break;
    case 16:
	quote = "The Lord Revan could have ruled an empire, made the galaxy strong again, instead he chose weakness, and ran away. -Darth Sion";
	break;
    case 17:
	quote = "I will not fall, I cannot die. -Darth Sion";
	break;
    case 18:
	quote = "Sith have no fear. -Darth Tyrannus";
	break;
    case 19:
	quote = "If you are not with me, then you're my enemy. -Darth Vader";
	break;
    case 20:
	quote = "Do you feel it? Do you feel the power of the dark side? The only real power! The only thing worth living for! -Darth Bane";
	break;
    default:
	quote = "The Force is weak with you";
    }
    processing(quote);
    printf("\033[1;m\n");
}

void user_q (void)
{
    FILE *fp;
    char str[1024];
    int randline;
    int i, n = 0;

    srand(time(0));
    fp = fopen( dir , "r");
    /* 1st pass, count lines */
    while(!feof(fp)) {
	fgets(str, 1024, fp);
	n++;
    }
    randline = rand() % n;

    /*2nd pass, pick one*/
    fseek(fp, 0, SEEK_SET);
    for(i = 0; !feof(fp) && i < randline; i++)
	fgets(str, 1024, fp);

    processing(str);
    fclose(fp);
}

void processing (char *text)
{
    int i = 1;
    int j = 0;
    printf("\033[2J\033[1;H\033[1;30m");
    while (text[j] != '\0') {
	putchar (text[j++]);
	printf("\033[1;3%dm", i++);
	if (i == 9){
	    i = 0;
	}
    }
    printf("\033[1;m\n");
}
