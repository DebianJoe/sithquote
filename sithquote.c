#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int main (int argc, char *argv[])
{
    srand(time(NULL));
    int r = rand() % 20; /*This sets the range allowed*/
    switch(r) {
    case 1:
	printf("Savior, conqueror, hero, villain. ");
	printf("You are all things...and yet you are nothing. ");
	printf("In the end you belong to neither the light nor the darkness. ");
	printf("You will forever stand alone.-");
	printf(" Darth Malak");
	break;
    case 2:
	printf("Wipe this pathetic planet from the face of the galaxy!-");
	printf(" Darth Malak");
	break;
    case 3:
	printf("You are strong, child--but I will break you!-");
	printf(" Darth Malak");
	break;
    case 4:
	printf("Your predecessor once made the mistake of questioning my orders, ");
	printf("Admiral, surely you're not so foolish as him to commit the same mistake...-");
	printf(" Darth Malak");
	break;
    case 5:
	printf("Failure means death, Admiral.-");
	printf(" Darth Malak");
	break;
    case 6:
	printf("Fear. Fear attracts the fearful. The strong. The weak. ");
	printf("The innocent. The corrupt. Fear. Fear is my ally.-");
	printf(" Darth Maul");
	break;
    case 7:
	printf("Have you come here for answers? There are none. ");
	printf("She hopes that you will be spared, only so you might suffer. -Darth Sion");
	break;
    case 8:
	printf("I have studied you, and found nothing but weakness. -Darth Sion");
	break;
    case 9:
	printf("Have you come here to die like the Jedi before you? ");
	printf("This place is a graveyard for your kind. ");
	printf("The call of Korriban is strong, but it is the call of the dead. ");
	printf("It is fitting that you came here. -Darth Sion");
	break;
    case 10:
	printf("Long have I waited for the last of the Jedi to fall at my feet.");
	printf(" -Darth Sion");
	break;
    case 11:
	printf("You are a wretched thing, of weakness and fear. -Darth Sion");
	break;
    case 12:
	printf("She shields him, protects him. I will destroy everything she loves, ");
	printf("all that she holds dear. I will cast his corpse at her feet; ");
	printf("it will be as if killing her children. -Darth Sion");
	break;
    case 13:
	printf("I can die a hundred times, Exile, and each time I shall rise, ");
	printf("as strong as before. -Darth Sion");
	break;
    case 14:
	printf("she will try to break you, and when she does you will fall, ");
	printf("and if you do, you will die. -Darth Sion");
	break;
    case 15:
	printf("As long as the dark side flows through the cracks of my flesh, ");
	printf("I cannot be killed. -Darth Sion");
	break;
    case 16:
	printf("The Lord Revan could have ruled an empire, made the galaxy strong again, ");
	printf("instead he chose weakness, and ran away. -Darth Sion");
	break;
    case 17:
	printf("I will not fall, I cannot die. -Darth Sion");
	break;
    case 18:
	printf("Sith have no fear. -Darth Tyrannus");
	break;
    case 19:
	printf("If you are not with me, then you're my enemy. -Darth Vader");
	break;
    case 20:
	printf("Do you feel it? Do you feel the power of the dark side? ");
	printf("The only real power! The only thing worth living for! -Darth Bane");
	break;
    default:
	printf("The Force is weak with you");
    }

    printf("\n");
    return 0;
}
