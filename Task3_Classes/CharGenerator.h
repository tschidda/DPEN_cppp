
#ifndef CHARGENERATOR_HPP_
#define CHARGENERATOR_HPP_

/**
 * @class CharGenerator
 * @author Dennis Penzel
 * @date 14/09/17
 * @file CharGenerator.h
 * @brief Task 3 of CPPP 
 */

class CharGenerator{
public:
	/**
	 * @brief Constuctor
	 * @return null
	 */
	CharGenerator(char nextChar){
		nextChar = 'a';
		c=nextChar;
	}
	
	/**
	 * @brief calculates next char in alphabeth
	 * @return char nextChar 
	 */
	char generateNextChar();
	
	
private:
	char nextChar;
	static char c;
	//final const char* alphabet = "abcefghijklmnopqrstuvwxyz";
};

#endif