#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include<math.h>

int a=1, b=2, c=3, k, tt0;
int choose () { int z;
do { fflush(stdin); z = 2; if(kbhit()) {
	z = getch();
	if(z==49 || z==84 || z==89 || z==116 || z==121) { z = 1; }
	if(z==48 || z==70 || z==78 || z==102 || z==110) { z = 0; }
} } while(z!=0 && z!=1);
fflush(stdin); return z;
}
void clean () {
	int cp;
	for(cp=0; cp<3; cp++) {
		fflush(stdin);
		if (kbhit()) {
			if(getch()==224) {
				getch();
			}		
		}
		fflush(stdin);
	}
}
void open (int i) {
	srand(c+k+a+b+time(NULL));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for(a=0; a<i; a++) {
		int rad = 1;
		if(rand()%2==0) { rad=9; }
		SetConsoleTextAttribute (hConsole, rad);
		if(rand()%3==0) { srand(rand()); }
		printf("%d",rand()%2);
	}
	SetConsoleTextAttribute (hConsole, 15);
}
void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x; coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void talk (char s[]) { system("cls"); char abc[] = "ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
for(c=0, b=1; c<b; c++) {
	clean();
	printf("                             ____________________ \n  |======================|  |                    |  ");
	int i, tem = time(NULL)-tt0;
	SetConsoleTextAttribute (hConsole, 11);
	if((tem - (tem%3600))/3600>=1) { printf("%d h",(tem - (tem%3600))/3600); }
	if(((tem%3600) - ((tem%3600)%60))/60>=1) { printf(" %d min",((tem%3600) - ((tem%3600)%60))/60); }
	printf(" %d s",((tem%3600)%60)); SetConsoleTextAttribute (hConsole, 15);
	printf("\n  ||                    ||  |                    |  ");
	if((tem - (tem%3600))/3600>=1) { printf("  "); for(i=1; i<=(tem - (tem%3600))/3600; i = i*10) { printf(" "); } }
	if(((tem%3600) - ((tem%3600)%60))/60>=1) { printf("      "); if(((tem%3600) - ((tem%3600)%60))/60>=10) { printf(" "); } }
	if(((tem%3600)%60)>=10) { printf(" "); }
	SetConsoleTextAttribute (hConsole, 14+(rand()%2));
	printf("    running");
	SetConsoleTextAttribute (hConsole, 15);
	printf("\n  ||         __         ||  |         "); open(2);
	printf("         | \n  ||   |====|  |====|   ||  |   "); open(14);
	printf("   | \n  ||   ||  {    }  ||   ||  |   "); open(2); printf("  "); open(6); printf("  "); open(2);
	printf("   | \n  ||   || { ]  [ } ||   ||  |   "); open(2); printf(" "); open(8); printf(" "); open(2);
	printf("   | \n  ||   |(* _/** _ *)|   ||  |   "); open(14);
	printf("   | \n  ||   (| (_)  (_) |)   ||  |   "); open(4);
	if(s[c]!=' ' && s[c]!=',' && s[c]!='.' && s[c]!=':' && s[c]!=';' && s[c]!='-' && s[c]!='!' && s[c]!='?' && s[c]!='\n') { printf("%c",abc[rand()%52]); } else { printf(" "); } open(4);
	if(s[c]!=' ' && s[c]!=',' && s[c]!='.' && s[c]!=':' && s[c]!=';' && s[c]!='-' && s[c]!='!' && s[c]!='?' && s[c]!='\n') { printf("%c",abc[rand()%52]); } else { printf(" "); } open(4);
	printf("   | \n  ||    ( / _____' )    ||  |    "); open(12);
	printf("    | \n  ||     { |");
	if(s[c]!=' ' && s[c]!='.' && s[c]!='!' && s[c]!='?') { SetConsoleTextAttribute (hConsole, 11); printf("####"); SetConsoleTextAttribute (hConsole, 15); } else { printf("    "); }
	printf("/ }     ||  |     "); open(3); if(s[c]!=' ' && s[c]!=',' && s[c]!='.' && s[c]!=':' && s[c]!=';' && s[c]!='-' && s[c]!='!' && s[c]!='?' && s[c]!='\n') {
		int g;
		for(a=0; a<4; a++) {
			switch (rand()%3) {
				case 0: g=7; break;
				case 1: g=8; break;
				case 2: g=15; break;
			}
			SetConsoleTextAttribute (hConsole, g);
			printf("%c",abc[rand()%52]);
		}
	} else { printf("    "); }
	open(3);
	printf("     | \n  ||      { **** }      ||  |      "); open(8);
	printf("      | \n  ||       ******       ||  |       "); open(6);
	printf("       | \n  ||                    ||  |                    |");
	printf("\n  |======================|  |____________________| \n\n  ");
	if(c==0) { sleep(1); }
	SetConsoleTextAttribute (hConsole, 3);
	for(a=0; a<=c; a++) { printf("%c",s[a]); if(s[a]=='\n') { printf(" "); if(s[a+1]!=' ') { printf(" "); } } }
	SetConsoleTextAttribute (hConsole, 15);
	if(s[c]=='?' || s[c]=='!') { printf("\a"); }
	if(s[c]=='\n' || s[c]=='.' || s[c]==':' || s[c]==',' || s[c]==';' || s[c]=='-' || s[c]=='!' || s[c]=='?' || (c>3 && ((s[c-4]==' ' && s[c-3]=='a' && s[c-2]=='n' && s[c-1]=='d') || (s[c-4]==' ' && s[c-3]=='b' && s[c-2]=='u' && s[c-1]=='t')))) {
		sleep(1);
	}
	b = strlen(s);
	if(c!=b-1) { gotoxy(0,0); } else {
		if(s[c]=='\n' || s[c]=='.' || s[c]==':' || s[c]==',' || s[c]==';' || s[c]=='-' || s[c]=='!' || s[c]=='?' || s[c]==' ' || (c>3 && ((s[c-4]==' ' && s[c-3]=='a' && s[c-2]=='n' && s[c-1]=='d') || (s[c-4]==' ' && s[c-3]=='b' && s[c-2]=='u' && s[c-1]=='t')))) {
		} else { sleep(1); }
	}
} }
void quote () {
	srand(time(NULL)+c+rand()+a+b+k+tt0); int d = rand()%77;
	if(d==0) { char il[] = "Doctor Who?!"; talk(il); }
	if(d==1) { char il[] = "It's bigger inside!"; talk(il); }
	if(d==2) { char il[] = "It's smaller outside!"; talk(il); }
	if(d==3) { char il[] = "Fantastic!"; talk(il); }
	if(d==4) { char il[] = "Allons-Y!"; talk(il); }
	if(d==5) { char il[] = "Geronimo!"; talk(il); }
	if(d==6) { char il[] = "Bad Wolf."; talk(il); }
	if(d==7) { char il[] = "Trust on me, I am the Doctor."; talk(il); }
	if(d==8) { char il[] = "Come along, Ponds."; talk(il); }
	if(d==9) { char il[] = "Rose Tyler, I ..."; talk(il); }
	if(d==10) { char il[] = "I could do so much more!"; talk(il); }
	if(d==11) { char il[] = "I don't want to go!"; talk(il); }
	if(d==12) { char il[] = "EX-TER-MI-NA-TE !!!"; talk(il); }
	if(d==13) { char il[] = "DE-LE-TE !!!"; talk(il); }
	if(d==14) { char il[] = "Bowties are cool."; talk(il); }
	if(d==15) { char il[] = "Fezzes are cool."; talk(il); }
	if(d==16) { char il[] = "SHUT UP!"; talk(il); }
	if(d==17) { char il[] = "Hello, sweetie!"; talk(il); }
	if(d==18) { char il[] = "Let me be brave."; talk(il); }
	if(d==19) { char il[] = "Let's kill Hitler!"; talk(il); }
	if(d==20) { char il[] = "A little blue box."; talk(il); }
	if(d==21) { char il[] = "The Circle must be broken."; talk(il); }
	if(d==22) { char il[] = "Basically, run."; talk(il); }
	if(d==23) { char il[] = "You are not alone."; talk(il); }
	if(d==24) { char il[] = "I am the Doctor. Just, Doctor."; talk(il); }
	if(d==25) { char il[] = "Time will tell, always does."; talk(il); }
	if(d==26) { char il[] = "The waves of time wash us all clean."; talk(il); }
	if(d==27) { char il[] = "In the fight for survival there are no rules."; talk(il); }
	if(d==28) { char il[] = "We're all stories in the end. Just make it a good one."; talk(il); }
	if(d==29) { char il[] = "There is always something to look at if you open your eyes."; talk(il); }
	if(d==30) { char il[] = "The least important things, lead to the Greatest discoveries."; talk(il); }
	if(d==31) { char il[] = "Is this how time normally passes? \n Really slowly, in the right order?"; talk(il); }
	if(d==32) { char il[] = "What's the point of being grown up if you can't be childish sometimes?"; talk(il); }
	if(d==33) { char il[] = "In 900 years of time and space, I've never met anyone who wasn't important."; talk(il); }
	if(d==34) { char il[] = "There is a considerable difference between courage and reckless stupidity."; talk(il); }
	if(d==35) { char il[] = "You want weapons? We are in a library! \n Books! The best weapons in the world!"; talk(il); }
	if(d==36) { char il[] = "Never ignore coincidence. Unless, of course, you're busy. \n In which case, always ignore coincidence."; talk(il); }
	if(d==37) { char il[] = "Some people live more in 20 years than others do in 80. \n It's not the time that matters, it's the person."; talk(il); }
	if(d==38) { char il[] = "All of time and space. Everywhere and anywhere. Every star that ever was. \n Where do you want to start?"; talk(il); }
	if(d==39) { char il[] = "Good men don't need rules. \n Today is not a good day to find out why I have so many."; talk(il); }
	if(d==40) { char il[] = "The name you choose it's like a promisse you make."; talk(il); }
	if(d==41) { char il[] = "I have a spoon!"; talk(il); }
	if(d==42) { char il[] = "On the fields of Trenzalore, at the fall of the Eleventh, when no living creature can speak falsely or fail to answer, a Question will be asked, a question that must never, ever be answered."; talk(il); }
	if(d==43) { char il[] = "Run, you clever boy and remember me..."; talk(il); }
	if(d==44) { char il[] = "There's something you'd better understand about me cause it's important, and one day your life may depend on it: \n I am definitely a mad man with a box!"; talk(il); }
	if(d==45) { char il[] = "The universe is big. It's vast and complicated and ridiculous. \n And sometimes, very rarely, impossible things just happen and we call them miracles."; talk(il); }
	if(d==46) { char il[] = "Everybody knows that everybody dies. \n But not every day. Not today. \n Some days are special. Some days are so, so blessed. \n Some days, nobody dies at all. \n Now and then, every once in a very long while, every day in a million days, when the wind stands fair and the Doctor comes to call, everybody lives."; talk(il); }
	if(d==47) { char il[] = "I've lived a Long Life. And I've seen a few things. \n I walked away from the Last Great Time War. \n I marked the passing of the Timelords. \n I saw the Birth of the Universe and when the Time rang out, moment by moment, until nothing remained. \n No time. No space, JUST ME! \n I walked in Universes where the laws of the physics were divised by the mind of a mad man. \n I saw Universes freeze and creations burn. \n And I know things, secrets, that must never be told. \n Knowledge that must never be spoken. \n Knowledge that will make parasite gods blaze!"; talk(il); }
	if(d==48) { char il[] = "People assume that time is a strict progression of cause to affect, but actually, from a point of view it is more like a big ball of wibbily wobbly timey wimey... stuff!"; talk(il); }
	if(d==49) { char il[] = "There are some corners of the Universe which have bred the most terrible things. \n Things that act against everything we believe in. \n They must be fought."; talk(il); }
	if(d==50) { char il[] = "Through crimson stars and silent stars and tumbling nebulas like oceans set on fire, through empires of glass and civilizations of pure thought, and a whole, terrible, wonderful universe of impossibilities."; talk(il); }
	if(d==51) { char il[] = "Demons run when a good man goes to war \n Night will fall and drown the sun \n When a good man goes to war \n Friendship dies and true love lies \n Night will fall and the dark will rise \n When a good man goes to war \n Demon's Run but count the cost \n The battle's won but the child is lost."; talk(il); }
	if(d==52) { char il[] = "Don't blink! \n Blink and you are dead. \n They are fast. Faster than you can believe. \n Don't turn your back. \n Don't look away and don't blink. \n Good luck."; talk(il); }
	if(d==53) { char il[] = "No, but you be careful, because your song is ending, sir."; talk(il); }
	if(d==54) { char il[] = "It is returning. \n It is returning through the dark, and then Doctor but then... \n He will knock four times."; talk(il); }
	if(d==55) { char il[] = "Never cruel or cowardly. Never give up, never give in."; talk(il); }
	if(d==56) { char il[] = "Allons-Y, Alonso!"; talk(il); }
	if(d==57) { char il[] = "Gallifrey falls, no more."; talk(il); }
	if(d==58) { char il[] = "Right, physics! Physics, eh? Physics, physics, physics, physics, physics, physcis. Physics! \n Hope you're getting all this down."; talk(il); }
	if(d==59) { char il[] = "Oh, i survived. Brilliant. I love it when I do that."; talk(il); }
	if(d==60) { char il[] = "It's a dream, Oswin. \n You dreamed it for yourself. \n Because the truth was too terible."; talk(il); }
	if(d==61) { char il[] = "Do you know how to make a Dalek? \n Subtract love, add anger. \n Doesn't she seem a bit too angry to you?"; talk(il); }
	if(d==62) { char il[] = "Show me the Stars!"; talk(il); }
	if(d==63) { char il[] = "I made you a souffle. \n But it was too beautiful to live."; talk(il); }
	if(d==64) { char il[] = "I am not a Dalek! \n My name is Oswin Oswald. \n I fought the Daleks and I am Human!"; talk(il); }
	if(d==65) { char il[] = "There a man called the Doctor. \n He lives on a cloud in the sky, and all he does, all day, every day, is to stop all the children in the world ever having bad dreams."; talk(il); }
	if(d==66) { char il[] = "I don't know where I am. \n It's like I'm breaking into a million different pieces and there's only one thing I remember. \n I have to save The Doctor. \n He always looks different. \n Sometimes, I think I'm everywhere at once, running every second, just to save him. \n Doctor? \n But he never hears me. \n Almost never. \n Having blown into this world on a leaf, I'm still blowing. \n I don't think I'll ever learn. \n I'm Clara Oswald. \n I'm the Impossible Girl. \n I was born to save The Doctor."; talk(il); }
	if(d==67) { char il[] = "What's wrong with dangerous?"; talk(il); }
	if(d==68) { char il[] = "Still hungry? Well I brought something for you. \n This. \n The most important leaf in human history. \n It's full of stories. \n Full of history. \n And full of a future that never got lived. \n Days that should have been and never were. \n Passed on to me. \n This leaf isn't just the Past, it's a whole Future that never happened. \n There are billions and millions of unlived days for every day we live. \n An infinity. All the days that never came. \n And these are all my mum’s."; talk(il); }
	if(d==69) { char il[] = "How many tims have you saved me, Clara? \n Just this once, just for the Hell of it. \n Let me save you."; talk(il); }
	if(d==70) { char il[] = "Clara, my Clara. \n Always brave. Always funny. \n Always exactly what I need. And she is Perfect."; talk(il); }
	if(d==71) { char il[] = "I don't believe in ghosts."; talk(il); }
	if(d==72) { char il[] = "Don't be a warrior. \n Promisse me, be a Doctor."; talk(il); }
	if(d==73) { char il[] = "Didn't anyone ever tell you? \n There's one thing you never put in a trap. \n If you're smart. If you value your continued existence. \n If you have any plans about seeing tomorrow, there's one thing you never, ever, put in a trap... \n Me."; talk(il); }
	if(d==74) { char il[] = "Every time you see them happy you remember how sad they are going to be. \n And it breaks your heart. \n Because what's the point in them being happy now, if they're going to be sad later? \n The answer is, of course, because they are going to be sad later."; talk(il); }
	if(d==75) { char il[] = "I will die, and no one else here or anywhere will suffer."; talk(il); }
	if(d==76) { char il[] = "Love, it's not an emotion. \n Love is a promise."; talk(il); }
	sleep(2);
}
void numerico () {
	int n = 1, m;
	char ou[] = "Think like me because is difficult to project myself explaining it...", rsl[] = "I calculate it, here are the results:"; talk(ou);
     do { system("cls"); printf("\n Numeric System to Reading (2-10): "); scanf("%d",&c); if(c<2 || c>10) { printf("\n Invalid Base \n INSERT AGAIN \n"); } else { printf("\n VALID BASE \n"); } sleep(1); } while(c<2 || c>10);
     do { system("cls"); printf("\n Numeric System to Whiting (2-36, except %d): ",c); scanf("%d",&b); if(b<2 || b>36 || b==c) { printf("\n Invalid Base \n INSERT AGAIN \n"); } else { printf("\n VALID BASE \n"); } sleep(1); } while(b<2 || b>36 || b==c);
     do {
     	do {
     		system("cls");
  	   		printf("\n Insert the Number to Translate (Base: %d to %d): ",c,b);
    	    scanf("%d",&n);
        	if(n<2) {
           		if(n==0) { printf("\n No value."); }
           		if(n==1) { printf("\n Invariable."); }
           		if(n<0) { printf("\n Non Natural."); }
           		printf("\a\n INSERT AGAIN "); sleep(1);
        	}  else { printf("\n VALID 1 \n"); }
     	} while(n<2);
     	m = n;
     	while(m>0) { if(m%10<c) { m = (m-m%10)/10; } else { printf("\n INVALID NUMBER \n INSERT AGAIN "); sleep(1); n = 0; m = 0; } }
	 } while(n<2);
	 printf("\n VALID NUMBER (2) \n"); sleep(1); system("cls");
     int k, u, l, h;
     if(c<10) {
        m = n;
        k = 1;
        u = 0;
        while(m>0) {
           u = u + k*(m%10);
           k = k*c;
           m = (m - m%10)/10;
        }
     } else { u = n; }
     int z=c, y=b;
     talk(rsl);
     c = z; b = y;
     printf(" NUMBER-%d to %d Base",c,b);
     if(c!=10 && b!=10) { printf(" (inter Dec)"); }
     printf("\n %d (%d)",n,c);
     if(c!=10) { printf("\n %d (10)",u); }
	    if(b!=10) {
	    	m = u;
   	  	for(l=0; m>0; l++) { m = (m - m%b)/b; }
   	  	int j[l];
   	  	m = u;
   	  	for(h=l; h>0; h--) {
   	  		j[h] = m%b;
   	    	m = (m - m%b)/b;
   	  	}
   	  	printf("\n ");
   	  	for(h=1; h<=l; h++) {
			char x[36] = "0123456789ABCDEFGHIJKLMNOPKRSTUVWXYZ";
			printf("%c",x[j[h]]);
  		}
  		printf(" (%d) \n",b);
  }
  sleep(1);
}
void pitagoras () {
	int i, f, o, h, d, e=0;
	do { system("cls"); printf("\n Insert the Start and End Number: "); scanf("%d %d",&i,&f); } while(i==f);
	if(i<0) { i = -i; } if(f<0) { f = -f; }
	if(i>f) { b = i; i = f; f = b; }
	if(i==0) { i = 1; }
	printf("\n %d - %d \n\n Start = %d \n End = %d \n",i,f,i,f); sleep(1);
	printf("\n Start? (1/0): ");
	a = choose();
	system("cls");
	while(a>0 && a<=f) {
		int pc = 100*a/f;
		gotoxy(0,0); printf("\n  %d %%",pc);
		for(o=i; o<=f; o++) {
			if(o>a) { h = o + 1; } else { h = a + 1; }
			while(h<o+a) { if(h*h == (a*a) + (o*o) && o>a) { c++; h = o+a; } h++; }
		}
		a++;
	}
	int ad[c], op[c];
	printf("\n\n %d - %d \n\n %d cases of Natural Triangles \n",i,f,c);
	sleep(1); printf("\n show?? 1 or 0 A = "); 
	a = choose();
	c = 0;
	while(a>0 && a<=f) {
		for(o=i; o<=f; o++) {
			if(o>a) { h = o + 1; } else { h = a + 1; }
			while(h<o+a) {
				if(h*h == (a*a) + (o*o)) {
					for(b=1; b<=c; b++) { if(op[b]==a && ad[b]==o) { b = c+2; } }
					if(c==0 || b==c+1) {
						c++;
						printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",c,a,o,h,a,o,h);
						ad[c] = a;
						op[c] = o;
					}
					h = o + a;
				}
				h++;
			}
		}
		a++;
	}
	do {
		sleep(2);
		printf("\n\n %d cases of Natural Triangles \n\n Options: \n (0) Esc \n (1) show all again \n (2) Show N again \n (3) Show N triangle \n (4) Search for a Side of a Triangle \n A = ",c);
		do { b = 5; if(kbhit()) { b = getch(); b = b - 48; fflush(stdin); } } while(b<0 || b>4); if(b>0) { system("cls"); }
		if(b==1) {
			for(b=1; b<=c; b++) {
				h = sqrt(op[b]*op[b] + ad[b]*ad[b]);
				printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h);
			}
			b = 1;
		}
		if(b==2) {
			printf("\n\n Insert the Start and the End Number to Repeat (max %d): ",c);
			do { scanf("%d %d",&i,&f); } while(i>c || f>c);
			if(i<0) { i = -i; } if(f<0) { f = -f; }
			if(i>f) { b = i; i = f; f = b; }
			if(i==0) { i = 1; }
			for(b=i; b<=f; b++) {
				h = sqrt(op[b]*op[b] + ad[b]*ad[b]);
				printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h);
			}
			b = 2;
		}
		if(b==3) {
			printf("\n Triangle Number: "); do { scanf("%d",&b); } while(b>c || b<0);
			printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h);
			b = 3;
		}
		if(b==4) {
			printf("\n Value to Search: ");
			do { scanf("%d",&d); } while(d<1);
			printf("\n Side: \n (0) Anyone \n (1) Hip \n (2) Cat \n (3) Adj \n (4) Opo \n A = ");
			do { a = 5; if(kbhit()) { a = getch() - 48; fflush(stdin); } } while(a<0 || a>4);
			if(a==4) { for(b=1; b<=c; b++) { if(op[b]==d) { h = sqrt(op[b]*op[b] + ad[b]*ad[b]); printf("\n %d) adj %d - OPO %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; } } a = 4; }
			if(a==3) { for(b=1; b<=c; b++) { if(ad[b]==d) { h = sqrt(op[b]*op[b] + ad[b]*ad[b]); printf("\n %d) ADJ %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; } } a = 3; }
			if(a==2) { for(b=1; b<=c; b++) { if(op[b]==d || ad[b]==d) { h = sqrt(op[b]*op[b] + ad[b]*ad[b]); printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; } } a = 2; }
			if(a==1) { for(b=1; b<=c; b++) {
					h = sqrt(op[b]*op[b] + ad[b]*ad[b]);
					if(h==d) { printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; }
				}
				a = 1;
			}
			if(a==0) { for(b=1; b<=c; b++) {
					h = sqrt(op[b]*op[b] + ad[b]*ad[b]);
					if(op[b]==d) { printf("\n %d) adj %d - OPO %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; }
					if(ad[b]==d) { printf("\n %d) ADJ %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; }
					if(h==d) { printf("\n %d) adj %d - opo %d -- HIP = %d --> %d %d %d",b,ad[b],op[b],h,ad[b],op[b],h); e++; }
				}
				a = 0;
			}
			printf("\n\n %d triangles with ",e);
			if(a==0) { printf("side"); }
			if(a==1) { printf("hip"); }
			if(a>1) { printf("cat"); }
			if(a==3) { printf("adj"); }
			if(a==4) { printf("opo"); }
			printf(" = %d",d); b = 4;
		}
		sleep(1);
	} while(b>0);
}
void primo () { do {
		int n, d, p, i, f;
         do { system("cls"); printf("\n  PRIME NUMBERS FOUNDER: \n Insert the Start and the End number of the Sequence: "); scanf("%d %d",&i,&f); } while(i<0 || f<0 || i==f);
         if(i>f) { p = f; f = i; i = p; }
         c = f - i + 1;
         printf("\n\n %d numbers \n START: %d \n END: %d",c,i,f);
         p = 0; n = i; printf("\a\n  Calculating ...");
         while(n<=f) {
            d = 2;
            while(d<=n/2) {
               if(n%d!=0) {
                  d++;
                  if(d%2==0) { d++; }
               } else { d++; }
            }
            if(d<=n) { p++; }
            n++;
         }
         int pr[p]; printf("\a\n  Memorizing ...");
         p = 0; c = 0; n = i;
         while(n<=f) {
            c++; d=2;
            while(d<=n/2) { if(n%d!=0) { d++; if(d%2==0) { d++; } } else { d=n+1; } }
            if(d<=n) { p++; pr[p] = n; }
            n++;
         }
         sleep(1); system("cls"); printf("\n\n %d PRIME NUMBERS between %d and %d (%d numbers): \n",p,i,f,c);
         c = 1;
         n = 0;
         for(c=1; c<=p; c++) {
            printf("\n %d - %d",c,pr[c]);
            if(pr[c] + 2 == pr[c+1]) {
            	n++;
               printf(" --> Twin of %d (%d)",pr[c+1],n);
            }
            if(pr[c-1] + 2 == pr[c]) {
               n++;
               printf(" --> Twin of %d (%d)",pr[c-1],n);
           }
        }
        printf("\n\n %d Twin primes. \n",n); sleep(1);
        printf("\n Restart it? 1/0 = "); a = choose();
} while(a==1); }
void letra () {
	srand(time(NULL));
	c=rand(); b=-1;
	int i=rand(), p, alfa[26]; system("cls");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	printf("\n    PRESS ANY KEY TO START");
	do {
		fflush(stdin);
		p = getch()-48; gotoxy(0,0);
		char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		SetConsoleTextAttribute (hConsole, 14+(rand()%2));
		do { i = rand()%26; if(rand()%4==0) { srand(rand()+i+p); } } while((p==32 || p==64) && (i==10 || i==22 || i==24));
		printf("    PRESS 0 (ZERO) TO EXIT and 1 (ONE) TO RESTART \n\a     ");
		SetConsoleTextAttribute (hConsole, 1+(time(NULL)%15));
		for(c=0; c<53; c++) { printf("_"); }
		printf("\n    | ");
		for(c=0; c<52; c++) { printf(" "); }
		printf("| \n    | ");
		for(c=0; c<260; c++) {
			if(rand()%2==0) { if(i>26) { i-=26; } } else { if(i<26) { i+=26; } }
			if(rand()%13==0) { srand(time(NULL)+rand()+c+i); }
			SetConsoleTextAttribute (hConsole, 1+(rand()%15));
			printf("%c ",abc[i]);
			SetConsoleTextAttribute (hConsole, 1+(time(NULL)%15));
			if(c%26==25) { printf("| \n    |");
			if(c<259) { printf(" "); } }
		}
		for(c=0; c<53; c++) { printf("_"); } printf("| \n\n      ");
		b++; if(b==26 || p==1) { b=0; }
		if(b>0) {
			do {
				if(i>25) { i = rand()%26; }
				for(c=b-1; c>=0; c--) {
					if(rand()%4==0) { srand(time(NULL)+rand()); }
					if(i==alfa[c]) { i=26; c=0; }
				}
			} while(i>25);
		}
		if(i>26) { i-=26; }
		alfa[b] = i;
		SetConsoleTextAttribute (hConsole, 14+(rand()%2));
		for(c=b-1; c>=0; c--) { printf("%c ",abc[alfa[c]]); }
		printf("- \n     ");
		SetConsoleTextAttribute (hConsole, 1+((time(NULL)+i)%15));
		for(c=0; c<53; c++) { printf("_"); }
		printf("\n    | ");
		for(c=0; c<52; c++) { printf(" "); }
		printf("| \n    | "); 
		for(c=0; c<260; c++) {
			if(rand()%13==0) { srand(time(NULL)+rand()+c+i); }
			SetConsoleTextAttribute (hConsole, 1+(rand()%15));
			if(rand()%2==0) { if(i<26) { i+=26; } }
			printf("%c ",abc[i]);
			if(i>26) { i-=26; }
			SetConsoleTextAttribute (hConsole, 1+((time(NULL)+i)%15));
			if(c%26==25) { printf("| \n    |");
			if(c<259) { printf(" "); } }
		}
		for(c=0; c<53; c++) { printf("_"); } printf("|");
		sleep(1);
	} while(p!=0);
}
void perfect () {
	char flw[] = "Insert the Start and the End number to Search", vlw[] = "Here are the Perfect Numbers, there is ";
	int i, f; do { talk(flw); printf(": "); scanf("%d %d",&i,&f); } while(i==f || i<0 || f<0);
	if(i>f) { a=i; i=f; f=a; } system("cls");
	int n, m, tm=time(NULL), t2, fi=f-i;
	for(c=i, m=0; c<=f; c++) {
		for(a=1, n=0; a<=c/2; a++) { if(c%a==0) { n=n+a; if(n>c) { a=c/2; } } }
		gotoxy(0,0); printf("\n  %d %%",50*(c-i)/(fi)); if(n==c) { m++; }
	}
	int perf[m]; printf("\a\n\n      Memorizing ...."); t2 = time(NULL);
	for(c=i, m=0; c<=f; c++) {
		for(a=1, n=0; a<=c/2; a++) { if(c%a==0) { n=n+a; if(n>c) { a=c/2; } } }
		gotoxy(0,0); printf("\n  %d %%",50+(50*(c-i)/(fi))); if(n==c) { perf[m]=c; m++; }
	}
	sleep(1); system("cls");
	printf("\n\n\a    %d seconds calculating (%d memorizing) \n    the %d PERFECT NUMBERS between %d and %d \n\n    Show them? 1/0: ",time(NULL)-tm-1,time(NULL)-t2-1,m,i,f);
	a=choose(); if(a==1) { system("cls"); for(c=0; c<m; c++) { printf("\n  %d --> %d",c+1,perf[c]); } }
}
void friend () {
	char flw[] = "Insert the Start and the End number to Search", vlw[] = "Here are the Amicable Numbers, there is ";
	int i, f; do { talk(flw); printf(": "); scanf("%d %d",&i,&f); } while(i==f || i<0 || f<0);
	if(i>f) { a=i; i=f; f=a; } system("cls");
	int n, m, e, tm=time(NULL), t2, fi=f-i;
	for(c=i, m=0; c<=f; c++) {
		gotoxy(0,0); printf("\n  %d %%",50*(c-i)/(fi));
		for(a=1, n=0; a<=c/2; a++) { if(c%a==0) { n+=a; } }
		if(n!=c) {
			for(a=1, e=0; a<=n/2; a++) { if(n%a==0) { e+=a; } }
			if(e==c) { m++; }
		}
	}
	int amic[m], fz[m]; printf("\a\n\n      Memorizing ...."); t2 = time(NULL);
	for(c=i, m=0; c<=f; c++) {
		gotoxy(0,0); printf("\n  %d %%",50+(50*(c-i)/(fi))); 
		for(a=1, n=0; a<=c/2; a++) { if(c%a==0) { n+=a; } }
		if(n!=c) {
			for(a=1, e=0; a<=n/2; a++) { if(n%a==0) { e+=a; } }
			if(e==c) { amic[m]=c; fz[m]=n; m++; }
		}
	}
	sleep(1); system("cls");
	printf("\n\n\a    %d seconds calculating (%d memorizing) \n    the %d AMICABLE NUMBERS between %d and %d \n\n    Show them? 1/0: ",time(NULL)-tm-1,time(NULL)-t2-1,m,i,f);
	a=choose(); if(a==1) { system("cls"); for(c=0; c<m; c++) { printf("\n  %d) %d --> %d",c+1,amic[c],fz[c]); } }
}
int main () { do {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	char dlk[550+(rand()%100)], hw[] = "  ", start[] = "Run, you clever program and remember me....", ood[] = "What?", wen[] = "When?", end[] = "I have developed a fault. \n You must patch the telephone device back through the console unit...";
	tt0 = time(NULL); while(time(NULL)-tt0<1) { if(kbhit()) { clean(); tt0--; } } srand(tt0+a+b+c+k); talk(start);
	do {
		do {
			if(k==-1) { printf("\n  Sugestions (help / calculate ? / tell me ?): \n\n confy? [Handles will finalize his program]\n roll the die [Handles roll the dice]\n draw a letter [Handles draw a random letter]\n wait [Handles will be patient] \n countdown [Handles will count and sleep] \n shutdown [Handles will sleep] \n repeat me [Handles will tell you something that you white]\n tell me quotes [Handles will tell you a Doctor Who quote]\n calculate [Handles execute Mathematics Operations of its Knowledge]\n"); }
			if(k==-2) { printf("\n  Sugestions for Calculate: \n\n  add [+/-]\n  mult [x]\n  div [:]\n  som [sigma]\n  eul [prime factors]\n  pow [^]\n  sqrt [^1/2]\n  cbrt [^1/3]\n  trig [angle Trigonometry]\n  log [Logarithm]\n  fact [!]\n  num [Handles will translade Numeric Systems]\n  bhaskara [Handles solve Linear and Quadratic Functions/Equations]\n  heron [Handles calculate the Area of a Triangle only with its sides]\n  pit [Handles search for Natural Triangles Rectangles]\n  prime [Handles search for Prime Numbers and Twin Primes]\n  vol [of Circular tridimentional forms]\n  lp [Handles distribute electrons by Linus-Pauling]\n  termo [Handles convert Fahrenheit and Celsius]\n  tria [Handles calculate Triangular Numbers]\n  perf [Handles search Perfect Numbers]\n  amic [Handles search for Amicable Numbers]\n"); }
			if(k==-3) { printf("\n  Sugestions for Tell Me: \n\n  quotes \n  what i told you \n"); }
			if(k==-4) { printf("\n  Sugestions for Easter Eggs: \n\n  9 \n  war \n  10 \n  11 \n  12 \n  55 \n  yana \n  dw \n  bigger inside \n something \n"); }
			if(k==-5) { printf("\n  Sugestions for C: \n\n  confy? \n  countdown \n  calculate ? \n"); }
			SetConsoleTextAttribute (hConsole, 9);
			fflush(stdin); sleep(1); printf("\n  >> ");
			SetConsoleTextAttribute (hConsole, 11);
			scanf(" %[^\n]",dlk); fflush(stdin);
			SetConsoleTextAttribute (hConsole, 15);
			b = strlen(dlk); char kld[b]; strcpy(kld, dlk);
			k = 1;
			if(kld[0]=='s' && kld[1]=='o' && kld[2]=='m' && kld[3]=='e' && kld[4]=='t' && kld[5]=='h' && kld[6]=='i' && kld[7]=='n' && kld[8]=='g') { k=rand()%40; }
			if((kld[0]=='6' && kld[1]=='3') || (kld[0]=='4' && kld[1]=='2')) { k = -4; }
			if(kld[0]=='c' || kld[0]=='C' || kld[1]=='p' || kld[2]=='p' || kld[1]=='P' || kld[2]=='P') { k = -5; }
			if(kld[0]=='?' || (kld[0]=='h' && kld[1]=='e' && kld[2]=='l' && kld[3]=='p') || (kld[0]=='w' && kld[1]=='t' && kld[2]=='f') || (kld[0]=='w' && kld[1]=='h' && kld[2]=='a' && kld[3]=='t') || (kld[0]=='w' && kld[1]=='a' && kld[2]=='t') || (kld[0]=='s' && kld[1]=='o' && kld[2]=='s')) { k = -1; }
			if(kld[0]=='c' && kld[1]=='o' && kld[2]=='n' && kld[3]=='f' && kld[4]=='y' && kld[5]=='?') { k = 0; }
			if(kld[0]=='w' && kld[1]=='a' && kld[2]=='i' && kld[3]=='t') { k = 20; }
			if(kld[0]=='9') { k = 29; }
			if(kld[0]=='w' && kld[1]=='a' && kld[2]=='r') { k = 30; }
			if(kld[0]=='1' && kld[1]=='1') { k = 22; }
			if(kld[0]=='5' && kld[1]=='5') { k = 24; }
			if(kld[0]=='1' && kld[1]=='0') { k = 27; }
			if(kld[0]=='1' && kld[1]=='2') { k = 28; }
			if((kld[0]=='d' && kld[1]=='w') || (kld[0]=='d' && kld[1]=='o' && kld[2]=='c' && kld[3]=='t' && kld[4]=='o' && kld[5]=='r' && kld[6]==' ' && kld[7]=='w' && kld[8]=='h' && kld[9]=='o')) { k = 19; }
			if(kld[0]=='b' && kld[1]=='i' && kld[2]=='g' && kld[3]=='g' && kld[4]=='e' && kld[5]=='r' && kld[6]==' ' && kld[7]=='i' && kld[8]=='n' && kld[9]=='s' && kld[10]=='i' && kld[11]=='d' && kld[12]=='e') { k = 31; }
			if(kld[0]=='c' && kld[1]=='o' && kld[2]=='u' && kld[3]=='n' && kld[4]=='t' && kld[5]=='d' && kld[6]=='o' && kld[7]=='w' && kld[8]=='n') { k = 34; }
			if(kld[0]=='s' && kld[1]=='h' && kld[2]=='u' && kld[3]=='t' && kld[4]=='d' && kld[5]=='o' && kld[6]=='w' && kld[7]=='n') { k = 35; }
			if(kld[0]=='r' && kld[1]=='o' && kld[2]=='l' && kld[3]=='l' && kld[4]==' ' && kld[5]=='t' && kld[6]=='h' && kld[7]=='e' && kld[8]==' ' && kld[9]=='d' && kld[10]=='i' && kld[11]=='e') { k = 33; }
			if(kld[0]=='d' && kld[1]=='r' && kld[2]=='a' && kld[3]=='w' && kld[4]==' ' && kld[5]=='a' && kld[6]==' ' && kld[7]=='l' && kld[8]=='e' && kld[9]=='t' && kld[10]=='t' && kld[11]=='e' && kld[12]=='r') { k = 36; }
			if(kld[0]=='r' && kld[1]=='e' && kld[2]=='p' && kld[3]=='e' && kld[4]=='a' && kld[5]=='t' && kld[6]==' ' && kld[7]=='m' && kld[8]=='e') { k = 2; }
			if(kld[0]=='y' && kld[1]=='a' && kld[2]=='n' && kld[3]=='a') { k = 32; }
			if(kld[0]=='t' && kld[1]=='e' && kld[2]=='l' && kld[3]=='l' && kld[4]==' ' && kld[5]=='m' && kld[6]=='e') {
				k = -3; if(kld[7]==' ') {
					if(kld[8]=='q' && kld[9]=='u' && kld[10]=='o' && kld[11]=='t' && kld[12]=='e' && kld[13]=='s') { k = 3; }
					if(kld[8]=='w' && kld[9]=='h' && kld[10]=='a' && kld[11]=='t' && kld[12]==' ' && kld[13]=='i' && kld[14]==' ' && kld[15]=='t' && kld[16]=='o' && kld[17]=='l' && kld[18]=='d' && kld[19]==' ' && kld[20]=='y' && kld[21]=='o' && kld[22]=='u') { k = 2; }
				}
			}
			if(kld[0]=='p' && kld[1]=='c' && kld[2]=='a' && kld[3]=='l' && kld[4]=='c') {
				k = 40;
			}
			if(kld[0]=='c' && kld[1]=='a' && kld[2]=='l' && kld[3]=='c' && kld[4]=='u' && kld[5]=='l' && kld[6]=='a' && kld[7]=='t' && kld[8]=='e') {
				k = -2; if(kld[9]==' ') {
					if(kld[10]=='a' && kld[11]=='d' && kld[12]=='d') { k = 4; }
					if(kld[10]=='m' && kld[11]=='u' && kld[12]=='l' && kld[13]=='t') { k = 5; }
					if(kld[10]=='d' && kld[11]=='i' && kld[12]=='v') { k = 6; }
					if(kld[10]=='s' && kld[11]=='o' && kld[12]=='m') { k = 7; }
					if(kld[12]=='r' && kld[13]=='t') {
						if(kld[10]=='s' && kld[11]=='q') { k = 8; }
						if(kld[10]=='c' && kld[11]=='b') { k = 9; }
					}
					if(kld[10]=='v' && kld[11]=='o' && kld[12]=='l') { k = 14; }
					if(kld[10]=='p' && kld[11]=='i' && kld[12]=='t') { k = 15; }
					if(kld[10]=='n' && kld[11]=='u' && kld[12]=='m') { k = 10; }
					if(kld[10]=='e' && kld[11]=='u' && kld[12]=='l') { k = 17; }
					if(kld[10]=='f' && kld[11]=='a' && kld[12]=='c' && kld[13]=='t') { k = 18; }
					if(kld[10]=='b' && kld[11]=='h' && kld[12]=='a' && kld[13]=='s' && kld[14]=='k') { k = 11; }
					if(kld[10]=='h' && kld[11]=='e' && kld[12]=='r' && kld[13]=='o' && kld[14]=='n') { k = 12; }
					if(kld[10]=='p' && kld[11]=='r' && kld[12]=='i' && kld[13]=='m' && kld[14]=='e') { k = 16; }
					if(kld[10]=='l' && kld[11]=='p') { k = 23; }
					if(kld[10]=='l' && kld[11]=='o' && kld[12]=='g') { k = 25; }
					if(kld[10]=='p' && kld[11]=='o' && kld[12]=='w') { k = 26; }
					if(kld[10]=='t') {
						if(kld[11]=='e' && kld[12]=='r' && kld[13]=='m' && kld[14]=='o') { k = 13; }
						if(kld[11]=='r' && kld[12]=='i') {
							if(kld[13]=='g') { k = 21; }
							if(kld[13]=='a') { k = 37; }
						}
					}
					if(kld[10]=='p' && kld[11]=='e' && kld[12]=='r' && kld[13]=='f') { k = 38; }
					if(kld[10]=='a' && kld[11]=='m' && kld[12]=='i' && kld[13]=='c') { k = 39; }
				}
			}
		} while(k<0);
		if(k==22) { char sil[] = "The Silence must fall when The Question be asked."; system("cls"); talk(sil); sleep(1+(rand()%2));
		printf("\n\n  0000000       00 \n    00000000000000000                                                                                                                                          0  \n  ");
		printf("  000000000000000000                                                                                                                                       000 \n  ");
		printf("              0000000000                                                                                                                                  000 \n  ");
		printf("                0000000000                                                                                                                               000 \n  ");
		printf("                  0000000000         00000                                                                                                          000 0000 \n  ");
		printf("                  00000000000      000000000000                                                                                                     00000000 \n  ");
		printf("                    00000000000000000000000000000                                                                                              000000000000 \n  ");
		printf("                      00000000000000000000000000000                                                                                          000000000000 \n  ");
		printf("                        000000000000000000000000000                                                                                         00000 \n  ");
		printf("                           00000          00000000000                                                                           0000000000000000 \n  ");
		printf("                                           00000000000000                                                              00000000000000000000000 \n  ");
		printf("                                             0000000000000000                                                   0000000000000000000000000000 \n  ");
		printf("                                              00000000000000000000                                     0000 0000000000000000000000000000000 \n  ");
		printf("                                               000000000000000000000000                               0000000000000000000000000 \n  ");
		printf("                                                 0000000000000000000000                       00000000000000000000000000000000 \n  ");
		printf("                                                     0000000000000000000000               00000000000000000000000000000000000 \n  ");
		printf("                                                         00000000000000000000000000000000000000000000000000000000000000 \n  ");
		printf("                                                            0000000000000000000000000000000000000000000000000000 \n  ");
		printf("                                                                000000000000000000000000000000000000 \n  ");
		printf("                                                                  000000000000000000000000000000000 \n  ");
		printf("                                                                    0000 \n");
		}
		if(k==24) { char ff[] = "Tenth Fibonacci number."; system("cls"); talk(ff); sleep(1+(rand()%2));
		printf("\n\n  55555555555555555555555555555555     55555555555555555555555555555555 \n  ");
		printf("55555555555555555555555555555555     55555555555555555555555555555555 \n  ");
		printf("55555555555555555555555555555555     55555555555555555555555555555555 \n  ");
		printf("55555555555555555555555555555555     55555555555555555555555555555555 \n  ");
		printf("55555555                             55555555 \n  ");
		printf("55555555                             55555555 \n  ");
		printf("55555555                             55555555 \n  ");
		printf("55555555                             55555555 \n  ");
		printf("55555555    55555555                 55555555    55555555 \n  ");
		printf("55555555  5555555555555              55555555  5555555555555 \n  ");
		printf("5555555555555555555555555            5555555555555555555555555 \n  ");
		printf("5555555555555555555555555555         5555555555555555555555555555 \n  ");
		printf("5555555555555      55555555555       5555555555555      55555555555 \n  ");
		printf("555555555             555555555      555555555             555555555 \n  ");
		printf("555555                 555555555     555555                 555555555 \n  ");
		printf("                       555555555                            555555555 \n  ");
		printf("                       555555555                            555555555 \n  ");
		printf("5555555               555555555      5555555               555555555 \n  ");
		printf("55555555            5555555555       55555555            5555555555 \n  ");
		printf("  5555555555      5555555555           5555555555      5555555555 \n  ");
		printf("    555555555555555555555                555555555555555555555 \n  ");
		printf("      55555555555555555                    55555555555555555 \n  ");
		printf("         55555555555                          55555555555    \n  ");
		}
		if(k==29) { char bd[] = "BAD WOLF"; system("cls"); talk(bd); sleep(2+(rand()%2));
			printf("\a\n\n  badwolf wolf \n  ");
			printf("badWOLF BADwf \n  ");
			printf("bad      wolf \n  ");
			printf("BAD       Bad        Bad \n  ");
			printf("Bad      WOLF       wolf        WolfwolfBAD \n  ");
			printf("badbadbadbad       bad Bad      Badwolf BADBAD \n  ");
			printf("bad      wolf     wolf wolf     WOLF        bad \n  ");
			printf("BAD       Bad    wolfBADwOLF    wolf        Bad \n  ");
			printf("Bad      WOLF    BAD     bad    WolF        BAD \n  ");
			printf("badWOLF BADwf   bad       Bad   Badwolf Badbad \n  ");
			printf("badwolf WOLF   wolf       Wolf  wolfWOLFbad \n"); sleep(1);
			printf("\a\n  Bad         wolfbaD        BAD                    Wolf              Bad Wolf Badwolf \n  ");
			printf("bad         bADwolf       wolf                    wolf              BADbad WolfWOLF \n  ");
			printf(" BAD       Bad  bad       Bad                     WOLF              bad \n  ");
			printf(" Bad       bad  Bad       bad                     WolF              bad \n  ");
			printf("  BAD     BAD    bAD     BAD      WolfwolfBAD     wolF              Bad \n  ");
			printf("  BAD     BaD    BAD     BaD    BadwolfWOLFBAD    WOLF              BADWOLF Bad \n  ");
			printf("   Bad   BAD      baD   BAD     bad         bad   Wolf              bADbadWolF \n  ");
			printf("   bad   bad      bad   bad    wolf         wolf  wolf              baD \n  ");
			printf("    BAD bad        BAD bad     WOLF         Wolf  wolf              Bad \n  ");
			printf("    badwolf        badwolf      Badwolf BadWOLF   Bad Wolf BADwolf  Bad \n  ");
			printf("    WOLFbad        WOLFbad       wolf badWolf     Badwolf Bad WOLF  BAD \n");
		}
		if(k==32) { char alf[] = "You are not Alone."; system("cls"); talk(alf); sleep(1+(rand()%2)); for(c=1; c<=4; c++) {
			sleep(1); system("cls"); printf("\a\n  YOU");
			if(c>1) { printf("  ARE"); }
			if(c>2) { printf("  NOT"); }
			if(c>3) { printf("  ALONE"); }
			printf("\n\n  you    yOU \n   YoU  YOU \n    You Yu");
			if(c==1) {
				printf("\n    youYOU");
				printf("\n     yoUu");
				printf("\n     yOU");
				printf("\n     YOU");
				printf("\n     you");
				printf("\n     You");
			}
			if(c==2) {
				printf("\n    youYOU        ar");
				printf("\n     yoUu        Arer");
				printf("\n     yOU        Are ar");
				printf("\n     YOU        areARE");
				printf("\n     you       are  Are");
				printf("\n     You      arE    ARE");
			}
			if(c==3) {
				printf("\n    youYOU        ar      notNOT   NOT");
				printf("\n     yoUu        Arer     Not not  noT");
				printf("\n     yOU        Are ar    nOT nOt  nOT");
				printf("\n     YOU        areARE    not  noT not");
				printf("\n     you       are  Are   noT  Not Not");
				printf("\n     You      arE    ARE  nOT   Notnot");
			}
			if(c==4) {
				printf("\n    youYOU        ar      notNOT   NOT      Lne");
				printf("\n     yoUu        Arer     Not not  noT     alone");
				printf("\n     yOU        Are ar    nOT nOt  nOT   lone Lone");
				printf("\n     YOU        areARE    not  noT not   ALONElone");
				printf("\n     you       are  Are   noT  Not Not  alone Alone");
				printf("\n     You      arE    ARE  nOT   Notnot  alone alone \n");
			}
		} sleep(rand()%2); }
		if(k==30) { char wr[] = "The Moment is comming. You have to decide:", arc[] = "\n  Can you hear them?", gen[] = "\n  Gallifrey falls, no more.   ";
			sleep(1); system("cls"); sleep(1);
			SetConsoleTextAttribute (hConsole, 12);
			printf("\n  Bad Wolf: "); sleep(1);
			for(c=0; c<43; c++) { printf("%c",wr[c]); if(wr[c]==' ') { sleep(1); } }
			printf("\n\n   ________ \n  |        | \n  |        | \n  |        | \n  |________| \n");
			sleep(1); printf("\n  Do you want to destroy Gallifrey? \n");
			do { sleep(1); printf("\n  1 / 0 = "); scanf("%d",&a); } while(a!=0 && a!=1);
			sleep(1); system("cls");
			if(a==1) { printf("\n   ________ \n  |   __   | \n  |  |OO|  | \n  |  |__|  | \n  |________| \n");
				do { sleep(1); printf("\n  1 / 0 = "); scanf("%d",&a); } while(a!=0 && a!=1); system("cls");
				if(a==1) { for(c=0; c<21; c++) { printf("%c",arc[c]); if(arc[c]==' ') { sleep(1); } } sleep(4); }
			}
			if(a==0) {
				system("cls");
				printf("\n   ________ \n  |   __   | \n  |  |oo|  | \n  |  |__|  | \n  |________| \n"); sleep(1);
				for(c=0; c<30; c++) { printf("%c",gen[c]); if(gen[c]==' ') { sleep(1); } }
			}
			SetConsoleTextAttribute (hConsole, 15);
		}
		if(k==27) { char four[] = "He will knock four times."; talk(four); for(c=1; c<=4; c++) { sleep(1); printf("\a"); } sleep(1); }
		if(k==28) { char list[] = "LISTEN"; talk(list); sleep(3+(rand()%3)); }
		if(k==31) { char tar[] = "It's called Time And Relative Dimentions In Space, TARDIS! And it is mine."; talk(tar); sleep(rand()%2); }
		if(k==20) { char wat[] = "How much time? "; do { talk(wat); scanf("%d",&a); } while(a<1); int f; for(f=a; f>0; f--) { talk(hw); } }
		if(k==34) { char wat[] = "How much time? "; do { talk(wat); scanf("%d",&a); } while(a<1);
			int f; for(f=a; f>0; f--) { talk(hw); } printf("\a 00:00:00 \n"); return 0;
		}
		if(k==35) { printf("\n\a  00:00:00 \n"); sleep(1); return 0; }
		if(k==19) { char dw[] = "Just: Doctor."; talk(dw); sleep(1); }
		if(k==3) { a=1; while(a>0) { int n=a, i; for(i=0; i<n; i++) { quote(); }
			do { sleep(1); printf("\n\n  Another? \n\n  N0, thanks. \n  More NUM quotes, please! \n\n  "); scanf("%d",&a); } while(a<0);
		} }
		if(k==1 || k==2) { int d;
			do { talk(wen); printf("\n 0 Just pick a random number, Limit X (N0) \n X sec \n "); scanf("%d",&b); if(b==0) { scanf("%d",&d); } } while(b==0 && d<2 && d!=0);
			if(b==0) { b = rand(); if(d>0) { b = 1 + (b%d); } } d = b;
			if(k==2) { talk(ood); printf("\n  "); scanf(" %[^\n]",dlk); }
			talk(hw);a = strlen(dlk); for(c=0, b=a; c<a; c++) { if(dlk[c]==' ') { b--; } } printf("%d char (%d without space)",a,b);
			sleep(1); for(d=d-2; d>0; d--) { talk(hw); } talk(dlk); sleep(2);
		}
		if(k==4 || k==5 || k==7 || k==8 || k==9) { int d; char hw[] = "How many?", aa[]="No result", res[] = "Result = "; float x, y, e=a;
			if(k==4 || k==5) {
				do { talk(hw); printf("\n  Op num = "); scanf("%d",&d); system("cls"); } while(d<2);
				float fat[d]; a = e;
				if(k==4) { e = 0; } else { e = 1; }
				for(c=1; c<=d; c++) { printf("\n N%d. ",c); scanf("%f",&fat[c]);
				if(k==4) { e+=fat[c]; } else { e = e*fat[c]; }
			} }
			if(k==7) { int one, two, res=0; char sw[] = "Op (i - f) = "; talk(sw); do { scanf("%d %d",&one,&two); } while(one==two);
				if(one>two) { d = two; two = one; one = d; }
				for(c=one, res=0; c<=two; c++) { res+=c; } e = res;
			}
			if(k==8 || k==9) { char sw[] = "rad = "; d = a; talk(sw); scanf("%f",&x);
				if(k==9) { e = cbrt(x); } else {
					if(x>=0) { e = sqrt(x); } else { e = -1; }
				}
			}
			if(k==8 && e==-1) { talk(aa); } else { talk(res); printf("%f",e); } sleep(1);
		}
		if(k==6) { float x, y, e; int i;
			char sw[] = "Op (n/d) = ", res[] = "Result = "; talk(sw); do { scanf("%f %f",&x,&y); } while(y==0); e = x/y;
			talk(res); printf("%f",e); if(x>y) { for(i=0; x>=y; i++) { x = x - y; } printf(" = %d + %f/%f",i,x,y); sleep(1); } sleep(1);
		}
		if(k==10) { numerico(); }
		if(k==11) { float a0, b0, c0, d0, x1, x2; int cv=0, bv=0;
			char ou[] = "Insert the Equation/Function (ax^2 + bx + c)", rsl[] = "I calculate it, here are the results:";
			talk(ou); printf(": "); scanf("%f %f %f",&a0,&b0,&c0);
			talk(rsl); printf(" ");
			if(a0==0) { printf("Linear "); if(b0>0) { printf("Crescent"); } if(b0<0) { printf("Decrescent"); }
			if(b0==0) { printf("Constant - Height: %f",c0); bv = c0; cv = 0; } else { printf(" / y = %fx ",b0); if(c0!=0) { if(c0>0) { printf("+"); } printf("%f",c0); }
				x1 = -c0/b0;
				printf("\n\n  Y = %f \n  X = %f",c0,x1);				
				if(c0==0) { bv = 0; cv = 0; } else { if(c0>0) { bv = 9; if(b0>0) { cv = -49; } else { cv = 49; } } else { bv = -13; if(b0>0) { cv = 49; } else { cv = -49; } } }
			} } else {
				if(b0==0 || c0==0) { printf("Inc"); } else { printf("C"); } printf("omplete Quadratic "); printf("Concave "); if(a0>0) { printf("Up"); } if(a0<0) { printf("Down"); }
				printf("/ y = %f.x^2 ",a0); if(b0!=0) { if(b0>0) { printf("+"); } printf("%f.x ",b0); } if(c0!=0) { if(c0>0) { printf("+"); } printf("%f",c0); }
				d0 = b0*b0 - 4*a0*c0; printf("\n  ");
				if(d0<0) { printf("No real roots"); } else {
					x1 = (-b0 + sqrt(d0))/(2*a0);
					if(d0>0) { x2 = (-b0 - sqrt(d0))/(2*a0); printf("Two different Real roots: %f & %f",x1,x2); } else {
						printf("Two equal Real roots: %f",x1);
					}
				}
				float yv = -d0/(4*a0), xv = -b0/(2*a0);
				printf("\n\n  Y = %f \n  Vertex = ( %f, %f) \n",c0,xv,yv);
				cv = xv; bv = yv;
				if(xv>cv+0.5) { cv++; }
				if(yv>bv+0.5) { bv++; }
				if(a0<0) { bv = bv-5; }
			}
			sleep(2); printf("\n   ____________________________________________________________________________________________________ \n  |");
			for(c=cv-50, b=bv+15; b>=bv-10 && c<=cv+50; c++) {
				if(((a0*c*c)+(b0*c)+c0>=b && (a0*c*c)+(b0*c)+c0<b+1) || ((a0*c*c)+(b0*c)+c0<=b && (a0*c*c)+(b0*c)+c0>b-1)) { SetConsoleTextAttribute (hConsole, 11); printf("*"); } else {
					SetConsoleTextAttribute (hConsole, 9);
					if(b==bv+15) { if(c==-1) { printf("|"); } else { printf(" "); } } else {
						if(c==0) {
							if(b==0) { printf("+"); } else { printf("|"); }
						} else { if(b==0) { printf("-"); } else { printf(" "); } }
					}
				}
				SetConsoleTextAttribute (hConsole, 15);
				if(c==cv+50) { printf("| \n  |"); if(b>bv-10) { c = cv - 50; b--; } }
				if(b==bv+15 && c==cv+49) { printf("| \n  |"); c = cv - 50; b--; }
			}
			for(c=cv-50; c<=cv+49; c++) { if(c==-1) { SetConsoleTextAttribute (hConsole, 9); printf("|"); SetConsoleTextAttribute (hConsole, 15); } else { printf("_"); } } printf("| \n"); sleep(1);
		}
		if(k==12) {
			float ar, A, B, C, p;
			char ou[] = "Insert the Sides of the Triangle", rsl[] = "I calculate it, here are the results:";
			do { talk(ou); printf(": "); scanf("%f %f %f",&A,&B,&C);
				if(A>=B+C) { A = 0; } if(A<=B-C || A<=C-B) { A = 0; }
				if(B>=A+C) { B = 0; } if(B<=A-C || B<=C-A) { B = 0; }
				if(C>=A+B) { C = 0; } if(C<=A-B || C<=B-A) { C = 0; }
				printf("\n  "); if(A==0 || B==0 || C==0) { printf("Inv"); } else { printf("V"); } printf("alid Triangle");
				sleep(1);
			} while(A<=0 || B<=0 || C<=0);
			p = (A+B+C)/2; ar = sqrt(p*(p-A)*(p-B)*(p-C));
			talk(rsl); printf(" A = %f",ar); sleep(1);
		}
		if(k==13) { char tot[] = "To 0-Fahrenheit or 1-Celsius?", tu[]="The temperature is";
      		float C, F, K; talk(tot); c = choose();
      		printf("\n Insert the Temperature in ");
      		if(c==0) {
      			do { printf("Celsius="); scanf("%f",&C); } while(C<-273.15);
      			F=((C*9)+160)/5;
			} else {
				do { printf("Fahrenheit="); scanf("%f",&F); } while(F<-459.67);
				C=((5*F)-160)/9;
			}
			K = C + 273.15;
			talk(tu); printf("\n\n Fahrenheit: %f F \n Celsius: %f C \n Kelvin: %f K \n",F,C,K);
	  	}
	  	if(k==14) { char as[] = "Which form?", rr[] = "Radius = ", vv[] = "Height = ", ss[]="Here are the results:"; int d; float r, h, v, a1, a2, C, p=3.141592;
		  	talk(as); printf("\n\n 0 Sphere \n 1 Cylinder \n 2 Cone \n\n  ");
	  		do { fflush(stdin); d = 3; if(kbhit()) { d = getch(); d = d - 48; } } while(d<0 || d>2);
	  		do { talk(rr); scanf("%f",&r); } while(r<0); a1 = p*r*r; a2 = a1*4; C = 2*p*r;
	  		if(d>0) {
	  			do { talk(vv); scanf("%f",&h); } while(h<0);
	  			v = a1*h; a2 = 2*p*r*(r+h);
	  			if(d==2) { v = v/3; a2 = a2/2; }
			} else { v = 4*(p*r*r*r)/3; }
			talk(ss); printf(" Radius: %f \n\n  Volume = %f \n  Circumference = %f \n  Circle Area = %f \n  Superfitial Area = %f \n",r,v,C,a1,a2); sleep(1);
		}
		if(k==15) { char ou[] = "Think like me because is difficult to project myself explaining it...", rsl[] = "I calculate it, here are the results:"; talk(ou);
			sleep(1); pitagoras();
		}
		if(k==16) { char ou[] = "Think like me because is difficult to project myself explaining it...", rsl[] = "I calculate it, here are the results:"; talk(ou);
			sleep(1); primo();
		}
		if(k==17) { char awa[] = "Insert the Number: ", foc[] = "Factors of ";
			do { talk(awa); scanf("%d",&k); } while(k<2); printf("\n Calculating");
			for(c=1, b=0; c<=k/2; c++) { if(k%c==0) { b++; } } printf(" ");
			int div[b], d, e = b; for(c=1, b=1; c<=k/2; c++) { if(k%c==0) { div[b] = c; b++; } } printf(".");
			for(a=k, d=0, c=2; a>1; c++) { if(a%c==0) { d++; a = a/c; } } int fat[d], f;
			for(a=k, d=0, c=2; a>1; c++) { if(a%c==0) { d++; fat[d] = c; a = a/c; c = 1; } } printf(".");
			for(c=2, f=0; c<=k; c++) { if(k%c!=0) { for(a=1; a<=d; a++) { if(c%fat[a]==0) { a = d + 2; } } if(a==d+1) { f++; } } } int cp[f]; printf(".");
			for(c=2, f=0; c<=k; c++) { if(k%c!=0) { for(a=1; a<=d; a++) { if(c%fat[a]==0) { a = d + 2; } } if(a==d+1) { f++; cp[f] = c; } } } printf(".");
			talk(foc); printf("%d (%d) --> (",k,d); if(k%2==0) { printf("EVEN"); } else { printf("ODD"); if(d==1) { printf(") (PRIME NUMBER"); } }
			printf(") \n  ");
			for(c=1; c<=d; c++) { printf("%d ",fat[c]); }
			if(d==1) { int cat=(k*k-1)/2, hip=(k*k+1)/2; printf("  Int rectangle triangle: Small Cat = %d / Big Cat = %d / Hip = %d",k,cat,hip); }
			sleep(1); printf("\n\n  Divisors of %d (%d): ",k,e); for(c=1; c<=e; c++) { printf("%d ",div[c]); }
			sleep(1); printf("\n\n  Coprime int of %d (%d): ",k,f); for(c=1; c<=f; c++) { printf("%d ",cp[c]); }
			printf("\n"); sleep(2);
		}
		if(k==18) { char awa[] = "Insert the Number: ", rsl[] = "Factorial of ";
			do { talk(awa); scanf("%d",&k); } while(k<0); int d = 1; for(c=2; c<=k; c++) { d = d*c; }
			printf("\n Calculating ..."); sleep(1); talk(rsl); printf("%d (%d!) = %d",k,k,d); sleep(1);
		}
		if(k==21) { char ang[] = "Insert the Angle: ", atat[] = "Results: "; talk(ang); float alt, rad;
			scanf("%f",&alt); while(alt<0) { alt = alt+360; } while(alt>=360) { alt = alt-360; }
			rad = 3.141592*alt/180;
			float sen = sin(rad), css = cos(rad), tg1 = tan(rad), tg2 = 1/tg1, sc1 = 1/css, sc2 = 1/sen;
			talk(atat); printf("Angle = %f degrees = %f pi (%f) rad \n",alt,alt/180,rad);
			sleep(1); printf("\n  Sin = %f / Cosec = %f",sen,sc2); if(sen==0) { printf(" (Infinity)"); }
			sleep(1); printf("\n  Cos = %f / Sec = %f",css,sc1); if(css==0) { printf(" (Infinity)"); }
			sleep(1); printf("\n  Tg = %f / Ctg = %f",tg1,tg2); if(tg1==0) { printf(" (Infinity)"); }
			printf("\n"); sleep(1);
		}
		if(k==23) { char ele[] = "Insert the Atomic Number: ", kl[] = "KLMNOPQ"; int d, e, i=0, z;
			do { talk(ele); scanf("%d",&d); } while(d<1 || d>118); e = d; printf("\n "); z = d;
			for(c=1; c<=19 && d>0; c++) {
				if(c==1 || c==2 || c==4 || c==6 || c==9 || c==12 || c==16) { b = 2; }
				if(c==3 || c==5 || c==8 || c==11 || c==15 || c==19) { b = 6; }
				if(c==7 || c==10 || c==14 || c==18) { b = 10; }
				if(c==13 || c==17) { b = 14; }
				if(c==1) { a = 1; } if(c==2 || c==3) { a = 2; } if(c==4 || c==5 || c==7) { a = 3; }
				if(c==6 || c==8 || c==10 || c==13) { a = 4; } if(c==9 || c==11 || c==14 || c==17) { a = 5; }
				if(c==12 || c==15 || c==18) { a = 6; } if(c==16 || c==19) { a = 7; }
				printf(" %d",a); if(a>i) { i = a; }
				if(b==2) { printf("s"); } if(b==6) { printf("p"); }
				if(b==10) { printf("d"); } if(b==14) { printf("f"); }
				if(d<b) { printf("%d",d); e = d; d = 0; } else { printf("%d",b); e = d; d = d - b; }
				if(d>0) { printf(","); } else { sleep(1); printf("\n\n  ");
					if(b==2 || b==6) { printf("Main-group element");
						if(i==1 && b==2 && e==2) { printf("\n  Noble Gas"); } else {
						if(b==2) { printf("\n  Alkali"); if(e==2) { printf("ne earth"); } printf(" Metal"); } else {
							printf("\n  ");
							if(e<4) {
								if(e==1) { printf("Boron"); }
								if(e==2) { printf("Carbon"); }
								if(e==3) { printf("Nitrogen"); }
								printf(" Group");
							}
							if(e==4) { printf("Chalcogen"); }
							if(e==5) { printf("Halogen"); }
							if(e==6) { printf("Noble Gas"); }
							if(e!=1) { printf("\n  Covalent bonds: %d",6-e);
								if(e<6) { printf(" + %d Dative bond",e-2); if(e-2>1) { printf("s"); } }
							}
						} if(e!=6) { printf("\n  Estable Ion *: ");
							if(b==2 && i!=1) { printf("+%d",e); } else {
								if(e==1 && i!=1) { printf("+3"); } else {
									if(i==1) { if(e==1) { printf("+/-1"); } else { printf("0"); } } else { printf("-%d",6-e); }
								}
							}
						} }
					} else { if(b==14) { printf("Inner "); } printf("Transition metal");
						if(b==14) { printf(" ("); if(a==6) { printf("Lanthanide"); } else { printf("Actinide"); } printf(")"); } else{
							printf("\n  "); if(e==1) { printf("Scandium"); } if(e==2) { printf("Titanium"); }
							if(e==3) { printf("Vanadium"); } if(e==4) { printf("Chromium"); } if(e==5) { printf("Manganese"); }
							if(e==6) { printf("Iron"); } if(e==7) { printf("Cobalt"); } if(e==8) { printf("Nickel"); }
							if(e==9) { printf("Copper"); } if(e==10) { printf("Zinc"); }
							printf(" group (%d)",e+2);
						}
					}
					printf("\n  Period %c (%d) \n",kl[i-1],i); if((b==2 && (e!=2 || i!=1)) || (b==6 && e!=6 && e!=2)) { sleep(1); printf("  * for general rules \n"); }
				}
			}
			sleep(1); printf("\n  Element: ");
			switch (z) {
				case 1: printf("H"); break; case 41: printf("Nb"); break; case 81: printf("Ti"); break;
				case 2: printf("He"); break; case 42: printf("Mo"); break; case 82: printf("Pb"); break;
				case 3: printf("Li"); break; case 43: printf("Tc"); break; case 83: printf("Bi"); break;
				case 4: printf("Be"); break; case 44: printf("Ru"); break; case 84: printf("Po"); break;
				case 5: printf("B"); break; case 45: printf("Rh"); break; case 85: printf("At"); break;
				case 6: printf("C"); break; case 46: printf("Pd"); break; case 86: printf("Rn"); break;
				case 7: printf("N"); break; case 47: printf("Ag"); break; case 87: printf("Fr"); break;
				case 8: printf("O"); break; case 48: printf("Cd"); break; case 88: printf("Ra"); break;
				case 9: printf("F"); break; case 49: printf("In"); break; case 89: printf("Ac"); break;
				case 10: printf("Ne"); break; case 50: printf("Sn"); break; case 90: printf("Th"); break;
				case 11: printf("Na"); break; case 51: printf("Sb"); break; case 91: printf("Pa"); break;
				case 12: printf("Mg"); break; case 52: printf("Te"); break; case 92: printf("U"); break;
				case 13: printf("Al"); break; case 53: printf("I"); break; case 93: printf("Np"); break;
				case 14: printf("Si"); break; case 54: printf("Xe"); break; case 94: printf("Pu"); break;
				case 15: printf("P"); break; case 55: printf("Cs"); break; case 95: printf("Am"); break;
				case 16: printf("S"); break; case 56: printf("Ba"); break; case 96: printf("Cm"); break;
				case 17: printf("Cl"); break; case 57: printf("La"); break; case 97: printf("Bk"); break;
				case 18: printf("Ar"); break; case 58: printf("Ce"); break; case 98: printf("Cf"); break;
				case 19: printf("K"); break; case 59: printf("Pr"); break; case 99: printf("Es"); break;
				case 20: printf("Ca"); break; case 60: printf("Nd"); break; case 100: printf("Fm"); break;
				case 21: printf("Sc"); break; case 61: printf("Pm"); break; case 101: printf("Md"); break;
				case 22: printf("Ti"); break; case 62: printf("Sm"); break; case 102: printf("No"); break;
				case 23: printf("V"); break; case 63: printf("Eu"); break; case 103: printf("Lr"); break;
				case 24: printf("Cr"); break; case 64: printf("Gd"); break; case 104: printf("Rf"); break;
				case 25: printf("Mn"); break; case 65: printf("Tb"); break; case 105: printf("Db"); break;
				case 26: printf("Fe"); break; case 66: printf("Dy"); break; case 106: printf("Sg"); break;
				case 27: printf("Co"); break; case 67: printf("Ho"); break; case 107: printf("Bh"); break;
				case 28: printf("Ni"); break; case 68: printf("Er"); break; case 108: printf("Hs"); break;
				case 29: printf("Cu"); break; case 69: printf("Tm"); break; case 109: printf("Mt"); break;
				case 30: printf("Zn"); break; case 70: printf("Yb"); break; case 110: printf("Ds"); break;
				case 31: printf("Ga"); break; case 71: printf("Lu"); break; case 111: printf("Rg"); break;
				case 32: printf("Ge"); break; case 72: printf("Hf"); break; case 112: printf("Cn"); break;
				case 33: printf("As"); break; case 73: printf("Ta"); break; case 113: printf("Nh"); break;
				case 34: printf("Se"); break; case 74: printf("W"); break; case 114: printf("Fl"); break;
				case 35: printf("Br"); break; case 75: printf("Re"); break; case 115: printf("Mc"); break;
				case 36: printf("Kr"); break; case 76: printf("Os"); break; case 116: printf("Lv"); break;
				case 37: printf("Rb"); break; case 77: printf("Ir"); break; case 117: printf("Ts"); break;
				case 38: printf("Sr"); break; case 78: printf("Pt"); break; case 118: printf("Og"); break;
				case 39: printf("Y"); break; case 79: printf("Au"); break;
				case 40: printf("Zr"); break; case 80: printf("Hg"); break;
			}
			printf("\n"); sleep(1);
		}
		if(k==25) { char lg[] = "Insert the X Number: ", tm[] = "The Logarithm results:"; float x, nat, ten;
			talk(lg); scanf("%f",&x); nat = log(x); ten = log10(x); talk(tm);
			printf("\n Natural Logarithm of %f = %f \n 10 Logarithm of %f = %f \n",x,nat,x,ten);
			sleep(1);
		}
		if(k==26) { char pwr[] = "Insert the Base and the Expoent Number: ", ex[] = "The Exponentiation results: "; float x, y, z;
			talk(pwr); scanf("%f %f",&x,&y); z = pow(x,y); talk(ex); printf("%f ^ %f = %f \n",x,y,z); sleep(1);
		}
		if(k==33) { char data[] = "Which Die?";
			talk(data); do { printf("\n  d4 d6 d8 d10 d12 d20 ... Dn = "); scanf("%d",&c); sleep(1); } while(c<2 || c>=100);
			do { if((rand()+time(NULL))%3==0) { srand(time(NULL)+c+rand()+a+b); }
				if(c!=6) {
					b = a; a = 1 + ((rand()+a+b)%c); if(rand()%c!=0) { while(a==b) { a = 1 + ((rand()+a)%c); } }
					printf("     _"); if(c>9) { printf("_   "); }
					printf("\n    [ "); if(c>9) { printf(" "); } printf("]  \n   [ ");
					if(c>9 && a<10) { printf("0"); } printf("%d ] \n  [_____",a);
					if(c>9) { printf("_"); } printf("]");
				} else { b = a; a = 1 + (rand()%6); if(rand()%6!=0) { while(a==b) { a = 1 + ((a+rand())%6); } } b = rand()%2;
					printf("   _________ \n  |         | \n  ");
					if(a==1) { printf("|         | \n  |    1    | \n  |         | "); }
					if(a==2) {
						if(b==0) { printf("|  2      | \n  |         | \n  |      2  | "); } else {
							printf("|      2  | \n  |         | \n  |  2      | ");
						}
					}
					if(a==3) {
						if(b==0) { printf("|  3      | \n  |    3    | \n  |      3  | "); } else {
							printf("|      3  | \n  |    3    | \n  |  3      | ");
						}
					}
					if(a==4) { printf("|  4   4  | \n  |         | \n  |  4   4  | "); }
					if(a==5) { printf("|  5   5  | \n  |    5    | \n  |  5   5  | "); }
					if(a==6) {
						if(b==0) { printf("|  6 6 6  | \n  |         | \n  |  6 6 6  | "); } else {
							printf("|  6   6  | \n  |  6   6  | \n  |  6   6  | ");
						}
					}
					printf("\n  |_________|");
				}
				printf("\n"); sleep(1); printf("\n Again? 1/0 = ");
				b = choose(); printf("\n");
			} while(b==1);
		}
		if(k==36) { letra(); }
		if(k==37) {
			char tri[] = "Insert the X of f(x) Triangular Number Function, the N of the Progression", tetra[] = "Here are the Triangular Numbers between 0 and ";
			int n; do { talk(tri); printf(": "); scanf("%d",&n); } while(n<0);
			talk(tetra); printf("%d",n); sleep(1);
			for(c=0, a=0; c<=n; c++) { a+=c; printf("\n   %d) %d",c,a); }
			sleep(1); printf(" <--"); sleep(1);
		}
		if(k==38) { perfect(); }
		if(k==39) { friend(); }
		if(k==40) {
			float n1, n2, res;
			char sg;
			do {
				SetConsoleTextAttribute (hConsole, 10);
				printf("\n 0=esc >> ");
				SetConsoleTextAttribute (hConsole, 11);
				scanf("%c",&sg);
				if(sg!='0') {
					c = 0;
					scanf("%f %c",&n1,&sg);
					if(sg=='!') {
						for(c=1, res=1; c<n1; c++) {
							res = res*c;
						}
					} else {
						scanf("%f",&n2);
						switch (sg) {
							case '+':
								res = n1 + n2;
								c++;
							break;
							case '-':
								res = n1 - n2;
								c++;
							break;
							case '*':
								res = n1 * n2;
								c++;
							break;
							case '.':
								res = n1 * n2;
								c++;
							break;
							case 'x':
								res = n1 * n2;
								c++;
							break;
							case 'X':
								res = n1 * n2;
								c++;
							break;
							case '/':
								res = n1 / n2;
								c++;
							break;
							case ':':
								res = n1 / n2;
								c++;
							break;
							case '^':
								res = pow(n1,n2);
								c++;
							break;
						}
					}
					if(c>0) {
						printf("\n       R= %f \n",res);
					}
				}
				if(k==41) {
					//???????????????????
				}
				if(k==42) {
					// ????????????????
				}
			} while(sg!='0');
		}
	} while(k>0);
	printf("\n    "); for(c=0; c<4; c++) { int toc = time(NULL); while(time(NULL)-toc<1) { if(kbhit()) { c = b; } fflush(stdin); } printf("\a."); }
	fflush(stdin); talk(end); printf("\n\n  0 Well done, Mate \n  1 COME BACK \n  ");
	a = choose();
	b = 1 + (time(NULL)%4);
	SetConsoleTextAttribute (hConsole, 14);
	for(c=1; c<=b; c++) { system("cls"); printf("\n  ");
		if(c==1) { printf("\n    | \n    |"); }
		if(c==2) { printf(" _ \n   _| \n  |_"); }
		if(c==3) { printf(" _ \n   _| \n   _|"); }
		if(c==4) { printf("\n  |_| \n    |"); }
		printf("\n"); sleep(1);
	}
	system("cls"); printf("\n\a  ");
	if(a==1) { printf("TIME TRAVEL"); } else { printf("REGENERATION"); }
	printf(" COMPLETED "); sleep(1); printf("\n\a  %d",time(NULL)-tt0+2);
	sleep(1); printf("\a seconds"); sleep(1); printf("\a ");
	if(a==1) { printf("TO PAST"); } else { printf("LOST"); } sleep(1); printf("\n\a  =b");
} while(a==1);
	return 0;
}
