#include <stdio.h>
/*
int main(int argc, char *argv[]){
	int oc;
	char *b_opt_arg;

	while ((oc = getopt(argc, argv, "ab:")) != -1){
		switch (oc);
	}
}
*/

int main(int argc, char *argv[])
{
	
	register int i, nflg;
	printf("Number of args is %d\n", argc);
	//printf(argv[1]);
	nflg = 0;
	if(argc>1 && argv[1][0] == '-' && argv[1][1] == 'n'){
		nflg++;
		argc--;
		argv++;
	}

	for(i = 1; i<argc; i++){
		fputs(argv[i], stdout);
		printf("end of arg");
		if(i < argc-1){
			putchar(' ');
		}
		
	}

	if(nflg == 0){
		putchar('\n');
	}
	
	return 0;
}
