#include "graphics.h"

int main( )
{
    initwindow(1024, 700, "First Sample");

    circle(100, 50, 40);
    
	while (!kbhit( ))
    {
        delay(200);
    }
    
	return 0;
}