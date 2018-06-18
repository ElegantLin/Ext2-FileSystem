#pragma once
#ifndef DIRECTORYENTRY_H_INCLUDED
#define DIRECTORYENTRY_H_INCLUDED

class DirectoryEntry
{
public:
	static const int DIRSIZE = 28;
	int m_ino;
	char m_name[DIRSIZE];
	DirectoryEntry();
	~DirectoryEntry();

private:

};

DirectoryEntry::DirectoryEntry()
{
}

DirectoryEntry::~DirectoryEntry()
{
}

#endif // !DIRECTORYENTRY_H_INCLUDED

