#ifndef _MP3P_H
#define _MP3P_H

#include "common.h"

class MP3P : public Common{
	public :
		MP3P();
		~MP3P();
		int stop();
		int play();
		int pause();
		int volUp();
		int volDown();
        int player();
};
#endif
