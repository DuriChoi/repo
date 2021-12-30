#ifndef _LPP_H
#define _LPP_H

#include "common.h"

class LPp : public Common{
	public :
		LPp();
		~LPp();
		int stop();
		int play();
		int pause();
		int volUp();
		int volDown();
        int player();
        int changeNiddle();
};
#endif
