#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char resp,inicio;
	char cert='s';
	char nome[40];
	int medio=0,facil=0,dificil=0,cont=0,nivel;
	int certo_1=0,errado_1=0,contp_1=1,totp_1=1;
	int certo_2=0,errado_2=0,contp_2=1,totp_2=1;
	int certo_3=0,errado_3=0,contp_3=1,totp_3=1;


	printf ("\nQUIZ FEITO POR GUILHERME ALVES DO NASCIMENTO EM 20/11/2020 NAS EPOCAS DE PANDEMIA DO NOSSO CORONA\n");
	printf ("\EMAIL DE CONTATO: guialves1353@gmail.com\n");
	printf ("\nTENHO UM AMOR POR STAR WARS DESDE CRIANCA ESPERO QUE APRECIEM AS PERGUNTAS \n");
	printf ("\n                                                                           \n");
    printf ("\n                                                                                     \n");
printf ("\n                 #####  #######    #    ######      #     #     #     ######    #####     \n");
printf ("\n                #     #    #      # #   #     #    #  #  #    # #    #     #  #     #     \n");
printf ("\n                #          #     #   #  #     #    #  #  #   #   #   #     #  #           \n");
printf ("\n                 #####     #    #     # ######     #  #  #  #     #  ######    #####       \n");
printf ("\n                     #    #    ####### #   #       #  #  #  #######  #   #          #       \n");
 printf ("\n              #     #    #    #     # #    #      #  #  #  #     #  #    #   #     #        \n");
printf ("\n                #####     #    #     # #     #      ## ##   #     #  #     #   #####          \n");


    printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
	printf ("\nNOME DO PARTICIPANTE: ");
	gets(nome);
	system("cls");
	printf ("\nSEJA BEM VINDO AO QUIZ DO FA NUMERO 1 DE STAR WARS \"%s\"\n",nome);
	printf ("\n     XXXXXXX XXXXXXX      X       X X X X   X         X         X      X       XXXXXXXX   XXXXXXX        \n"     );
	printf ("\n     XX         X        X X      X     X    X       X X       X      X X      X      X   XX             \n"    );
	printf ("\n     XXXXXX     X       X   X     X X X X     X     X   X     X      X   X     X      X    XXXXXX        \n"    );
	printf ("\n          X     X      X X X X    X   X        X   X     X   X      XXXXXXX    X X X XX         X        \n"    );
	printf ("\n          X     X     X       X   X    X        X X       X X      X       X   X    X           X        \n"    );
	printf ("\n    XXXXXXX     X    X         X  X     X        X         X      X         X  X     X   XXXXXXXX        \n"    );
	printf ("\n                                                                                                        \n"    );
	printf ("\n    OBS: OS SITH ESTAVAM CERTOS O TEMPO TODO!!!!                                                        \n"    );
	printf ("\n                                                                                                        \n"    );
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Este e um jogo divertido de perguntas e respostas desse apaixonado universo. O jogador devera escolher\n");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
	printf ("O jogo possui 3 niveis de dificuldade:\n\n");
	printf ("Nivel facil   - Cada resposta certa valera 2 pontos\n");
	printf ("Nivel medio   - Cada resposta certa valera 4 pontos\n");
	printf ("Nivel dificil - Cada resposta certa valera 6 pontos\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Boa sorte e bom jogo\n\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
	dificuldade:
	printf ("*-----------------------------*\n");
	printf ("|    NIVEIS DE DIFICULDADE    |\n");
	printf ("*-----------------------------*\n");
	printf ("|  1 - NIVEL FACIL            |\n");
	printf ("|  2 - NIVEL MEDIO            |\n");
	printf ("|  3 - NIVEL DIFICIL          |\n");
	printf ("*-----------------------------*\n");
	printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
	scanf ("%d",&nivel);
	system("cls");
	switch (nivel)
	{
		case 1 :
		{
			system("cls");
			time_t tempo;struct tm *data;time(&tempo);
			data = localtime(&tempo);
			printf("*=============================================================================*\n");
			printf("|  ___   ___ ___ ___    ___ _________ ___                                     |\n");
			printf("|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX                                     |\n");
			printf("|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX                                     |\n");
			printf("|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX                                     |\n");
			printf("|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX                                     |\n");
			printf("|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______                               |\n");
			printf("|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX                               |\n");
			printf("|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX                               |\n");
			printf("|                                _________ _________ _________ ___ ___        |\n");
			printf("|                                XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX        |\n");
			printf("|                                XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX        |\n");
			printf("|                                XXX___    XXX___XXX XXX       XXX XXX        |\n");
			printf("|                                XXXXXX    XXXXXXXXX XXX       XXX XXX        |\n");
			printf("|                                XXXXXX    XXXXXXXXX XXX______ XXX XXX______  |\n");
			printf("|                                XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX  |\n");
			printf("|                                XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("              AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 PONTOS CADA\n\n");

			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("Quantos anos tinha Anakin Skywalker durante a batalha em Genosis?\n");
			printf ("A) 15\n");
			printf ("B) 17\n");
			printf ("C) 20\n");
			printf ("D) 22\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"c\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf (" Quem dá o golpe final que destrói a segunda Estrela da Morte??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Han Solo com um X-Wing\n");
			printf ("B) Luke Skywalker com um Speeder\n");
			printf ("C) Lando Calrissian com o Millennium Falcon\n");
			printf ("D) Jar Jar Binks com uma asa em Y\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"c\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("De acordo com o Mestre Yoda, quantos Sith sempre estão por aí?'?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) 4\n");
			printf ("B) 2\n");
			printf ("C) 8\n");
			printf ("D) 10\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("Como Obi-Wan Kenobi ficou conhecido em Tatooine??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ben\n");
			printf ("B) ken\n");
			printf ("C) obi\n");
			printf ("D) wan\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("Quem libertou a Princesa Leia das correntes no palácio do Jabba??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) C-3PO\n");
			printf ("B) CHEWBACCA\n");
			printf ("C) R2-D2\n");
			printf ("D) LUKE\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("Qual, de acordo com o Yoda, é o caminho para o Lado Negro?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ODIO\n");
			printf ("B) SOFRIMENTO\n");
			printf ("C) DOR \n");
			printf ("D) MEDO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("Quem diz que - é assim que a liberdade morre -- com estrondoso aplauso\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) BAIL ORGANA\n");
			printf ("B) YODA M\n");
			printf ("C) PADME AMIDALA\n");
			printf ("D) JAR JAR BRINKS\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("De quem era o sabre que Luke Skywalker recebeu de Obi-Wan??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) QUIGON\n");
			printf ("B) YODA\n");
			printf ("C) ANAKIN\n");
			printf ("D) OBI WAN\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja jogar em outro nivel (s/n)? ");
			scanf ("%s",&resp);
			if ((resp=='s')||(resp=='S'))
			{
				system ("cls");
				totp_1=contp_1;
				contp_1=1;
				goto dificuldade;
			}
			break;
		}

		/*Inicio do nível médiio*/

		case 2:
		{
			system("cls");
			printf("*=============================================================================*\n");
			printf("|  ___   ___  ___  ___    ___  _________  ___                                 |\n");
			printf("|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                                 |\n");
			printf("|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                                 |\n");
			printf("|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                           |\n");
			printf("|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|                          ___     ___  _________  ________   ___  _________  |\n");
			printf("|                          XXX_   _XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX  |\n");
			printf("|                          XXXX_ _XXXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                          XXXXX_XXXXX  XXX____    XXX   XXX  XXX  XXX   XXX  |\n");
			printf("|                          XXX XXX XXX  XXXXXXX    XXX    XX  XXX  XXX   XXX  |\n");
			printf("|                          XXX  X  XXX  XXX______  XXX___XXX  XXX  XXX___XXX  |\n");
			printf("|                          XXX     XXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                          XXX     XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("              AS PERGUNSTAS DE NIVEL \"MEDIO\" VALEM 4 PONTOS CADA\n\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("1. O que aconteceu com Anakin Skywalker durante a batalha com o Conde Dooku??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Ele perdeu a perna esquerda\n");
			printf ("B) Ele perdeu a perna direita\n");
			printf ("C) Ele perdeu o braço direito\n");
			printf ("D) Ele perdeu\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("Quem fez o papel do Comandante Cody??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Joel Edgerton\n");
			printf ("B) Jay laga'aia\n");
			printf ("C) Ahmed Best\n");
			printf ("D) Temuera Morrison\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("Qual filme de Star Wars tem esta citação: “Eu estou nessa luta desde os seis anos de idade!”?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Star Wars: uma nova esperança\n");
			printf ("B) Star Wars: A Ascensão do Skywalker\n");
			printf ("C) Desonesto One: Uma História de Star Wars\n");
			printf ("D) Solo: uma história de Star Wars\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("O que Jar Jar Binks acabou devendo a Qui-Gon Jinn depois de ser resgatado pelo mesmo durante a invasão de Naboo??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Uma viagem para Otoh Gunga\n");
			printf ("B) créditos 9,000\n");
			printf ("C) Um bongô\n");
			printf ("D) Uma dívida de honra\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("O que Owen Lars disse a Luke Skywalker sobre seu pai??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Ele tinha sido um Lorde Sith\n");
			printf ("B) Ele tinha sido um Cavaleiro Jedi\n");
			printf ("C) Ele era um piloto de caça\n");
			printf ("D) Ele era um navegador em um cargueiro de especiarias\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("Quando o vermos novamente em The Force Awakens, depois de muitos anos tagarelando pela galáxia com Han Solo, quantos anos Chewbacca tem??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Em 55 anos\n");
			printf ("B) Anos de idade 78\n");
			printf ("C) Nos anos 220\n");
			printf ("D) 200 anos em ponto\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("Quais foram as últimas palavras de Padmé?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Por favor, vou te dar qualquer coisa. O que você quiser! \n");
			printf ("B) Estamos perdendo energia. Parece haver um problema com o reator principal.\n");
			printf ("C) Por favor, vou te dar qualquer coisa. O que você quiser!n");
			printf ("D) Obi-Wan ... lá ... é bom nele. Eu sei que existe.n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("Quem emprestou a voz pro General Grievous?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) FRANK OZ\n");
			printf ("B) MATTHEW WOOOD\n");
			printf ("C) MICHAEL KINGMA\n");
			printf ("D) WAREN OWENS\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja jogar em outro nivel (s/n)? ");
			scanf ("%s",&resp);
			if ((resp=='s')||(resp=='S'))
			{
				system ("cls");
				totp_2=contp_2;
				contp_2=1;
				goto dificuldade;
			}
			break;
		}

		/* Inicio do nível difícil */

		case 3 :
		{
			system("CLS");
			printf("*=============================================================================*\n");
			printf("|  ___   ___  ___  ___    ___  _________  ___                                 |\n");
			printf("|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                                 |\n");
			printf("|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                                 |\n");
			printf("|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                           |\n");
			printf("|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|                  ________   ___  _________  ___  _________  ___  ___        |\n");
			printf("|                  XXXXXXXX   XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n");
			printf("|                  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n");
			printf("|                  XXX   XXX  XXX  XXX___     XXX  XXX        XXX  XXX        |\n");
			printf("|                  XXX    XX  XXX  XXXXXX     XXX  XXX        XXX  XXX        |\n");
			printf("|                  XXX___XXX  XXX  XXXXXX     XXX  XXX______  XXX  XXX______  |\n");
			printf("|                  XXXXXXXXX  XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                  XXXXXXXX   XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("            AS PERGUNSTAS DE NIVEL \"DIFICIL\" VALEM 6 PONTOS CADA\n\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Quem dá ao FN-2187 seu novo nome por ter ficado chocado que ele não tinha um nome de verdade?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) POE DAMERON \n");
			printf ("B) REY\n");
			printf ("C) HAN SOLO\n");
			printf ("D) KYLO REN\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Quem diz: “Nós somos a faísca que acenderá o fogo que queimará a Primeira Ordem.”?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) Almirante holdo\n");
			printf ("B) Almirante Ackbar\n");
			printf ("C) Poe Dameron\n");
			printf ("D) Rose Tico\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Qual o nome do rifle-padrão dos clone troopers?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) DC-15A\n");
			printf ("B) DC-207A\n");
			printf ("C) DC-14SQ\n");
			printf ("D) DC-15SQ\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Conde Dookan foi um de quantos Jedi que abandoram a Ordem Jedi??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) 200\n");
			printf ("B) 60\n");
			printf ("C) 20\n");
			printf ("D) 50\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Quantos sabres de luz o General Grievous usa na sua luta com Obi-Wan Kenobi em Utapau??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) 6\n");
			printf ("B) 2\n");
			printf ("C) 4\n");
			printf ("D) 10\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Quem são os comediantes que serviram de consultores para a voz do BB-8??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) JIMMY FALON & WILL FERREL\n");
			printf ("B) Ben Schwartz & Bill Hader!\n");
			printf ("C) JACK BLACK & CHRIS ROCK\n");
			printf ("D) LOUIS CK & ANDY SANDBERG\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("Qual era a espécie do Yoda??\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) TRILLITH\n");
			printf ("B) DESCONHECIDA\n");
			printf ("C) YANGRAL\n");
			printf ("D) YOLOR\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja jogar em outro nivel (s/n)? ");
			scanf ("%s",&resp);
			if ((resp=='s')||(resp=='S'))
			{
				system ("cls");
				totp_3=contp_3;
				contp_3=1;
				goto dificuldade;
			}
			break;
		}
		default : printf ("Nivel invalido\n");
		{
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			goto dificuldade;
		}

	}/*fechamento do 1º swhith*/

	system("cls");
	printf ("================ RESULTADOS DO JOGO =================\n");
	printf ("Participante: %s\n",nome);
	printf ("Perguntas respondidas: %d\n",totp_1-1+contp_1-1+totp_2-1+contp_2-1+totp_3-1+contp_3-1);
	printf ("Total de acertos.....: %d\n",certo_1+certo_2+certo_3);
	printf ("Total de erros.......: %d\n",errado_1+errado_2+errado_3);
	printf ("Pontuacao total......: %d\n\n",(certo_1*2)+(certo_2*4)+(certo_3*6));
	printf ("--------------------- NIVEL FACIL -------------------\n");
	printf ("Perguntas respondidas: %d\n",contp_1-1+totp_1-1);
	printf ("Acertos..: %d\n",certo_1);
	printf ("Erros....: %d\n",errado_1);
	printf ("Pontuacao: %d\n\n",certo_1*2);
	printf ("-------------------- NIVEL MEDIO --------------------\n");
	printf ("Perguntas respondidas: %d\n",contp_2-1+totp_2-1);
	printf ("Acertos..: %d\n",certo_2);
	printf ("Erros....: %d\n",errado_2);
	printf ("Pontuacao: %d\n\n",certo_2*4);
	printf ("------------------- NIVEL DIFICIL -------------------\n");
	printf ("Perguntas respondidas: %d\n",contp_3-1+totp_3-1);
	printf ("Acertos..: %d\n",certo_3);
	printf ("Erros....: %d\n",errado_3);
	printf ("Pontuacao: %d\n",certo_3*6);
	getchar();
	getchar();
}
