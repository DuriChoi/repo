#ifndef _CDP_H
#define _CDP_H

#include "common.h"

class CDp : public Common{
	public :
		CDp();
		~CDp();
		int stop();
		int play();
		int pause();
		int volUp();
		int volDown();
        int player();
};
#endif
