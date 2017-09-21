
#include "CFile.h"

CFile::CFile(const char *pName)
{
	if(NULL == pName)
	{
		mode_t mode = umask(0);
		if(-1 == (m_fd = ::open("./untiled file", FILE_FLAG, FILE_MODE)))
		{
			printf("create file error");
		}



	}
}

CFile::CFile(CFile &file)
{

}

CFile& CFile::operator=(CFile &)
{
	return CFile();
}

int CFile::creat(const char *pathname)
{
	return 0;
}

int CFile::open(const char *pathname)
{

}

int CFile::close(CFile *pFile)
{
	return 0;
}

char* CFile::getName()
{
	return NULL;
}

int CFile::setSize()
{
	return 0;
}

size_t CFile::getSize()
{
	return m_size;
}

int CFile::read(char *pBuf, int n)
{
	return 0;
}

int write(const char *pBuf, int n)
{
	return 0;
}
