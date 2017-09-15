#include <iostream>

	int stars = 5;
	enum Direction {left=0, right=1};	
	
	void drawStars(int stars){
		for (int i = 1; i<= stars;i++){
			std::cout << "*";
		}
	};


	void drawStarFigure(Direction d){
		switch(d){
			case left:
				for (int i = stars; i> 0;i--){
					drawStars(i);
					std::cout << "\n";		
				}
				
				for (int i = 2; i<= stars;i++){
					drawStars(i);
					std::cout << "\n";			
				}
				break;
				
			case right:				
				for (int i = 1; i<= stars;i++){
					drawStars(i);
					std::cout << "\n";			
				}
				for (int i = stars; i> 0;i--){
					drawStars(i);
					std::cout << "\n";		
				}
				break;
			
		}
	}
int main(void){
	Direction d = right;
	drawStarFigure(d);
	return 0;
}