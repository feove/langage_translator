#include <stdio.h>
#include <string.h>
#include <err.h>
#include <stdbool.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

#define ARRAY_SIZE 3

char *langs[ARRAY_SIZE] = { "fr" , "eng" , "ru"}; 

enum lang {
	FR,
	ENG,
	RU
};

void display_help(){
	puts("--OPTIONS--");
	puts("Try ./trad <in_lang> <to_lang> <text>");
	puts(" 1. <first arg> (lang)");
	puts(" 2. <second arg> (lang)");
	puts(" 3. <third arg> (Text)");
}

void display_wrong_lang(char *arg){
	printf("Wrong lang %s\n",arg);
	//display array of lang
}

void  is_valid_lang(char **argv){

	for (int i = 1; i < 3; i++){
		bool valid_lang = false;
		
		for (int j = 0; j < ARRAY_SIZE; j++){

			if (strcmp(argv[i],langs[j]) == 0){
				valid_lang = true;
				break;
			} 
		}

		if (valid_lang == false){
			display_wrong_lang(argv[i]);	
			errx(1,"Wrong Arg");
		}	
	}	
}

char *translator(char *in_lang, char *to_lang, char *text){

	size_t length = strlen(text);

	//printf("Length = %ld\n",length);

	UNUSED(in_lang);
	UNUSED(to_lang);	
	return text;	
}


int main(int argc, char **argv){

	if (argc != 4) {
		display_help();
		return 1;
	}
	
	is_valid_lang(argv);

	char *translated_text = translator(argv[1],argv[2],argv[3]);

	UNUSED(translated_text);
	
	return 0;
}
