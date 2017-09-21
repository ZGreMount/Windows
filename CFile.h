#ifndef __CFILE_H__
#define __CFILE_H__
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>

#define FILE_FLAG (O_REWR|O_CREAT|O_TRUNC)
#define FILE_MODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)
class CFile
{
//	typedef 
	public:
		CFile(const char *pName = NULL);
		CFile(CFile &);

		CFile& operator=(CFile &) const;

		virtual ~CFile();

		static int creat(const char *pathname);
        static int open(const char *pathname);
        static int close();

        char *getName();
		int setName(const char *pName);

		int setSize(size_t size);
		size_t getSize(CFile *pFile);

		int read(char *pBuf, int n);
		int write(const char *pBuf, int n);
		
	private:
		int m_fd;
		char *m_pName;
		off_t m_offset;
		size_t m_size;
};
#endif
