#include "CharGenerator.h"

	CharGenerator::CharGenerator():nextChar ='a';
	char generateNextChar(){
		c = nextChar;
		return nextChar++;
	}
