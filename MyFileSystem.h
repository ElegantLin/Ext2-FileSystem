#pragma once
#ifndef MYFILESYSTEM_H_INCLUDED
#define MYFILESYSTEM_H_INCLUDED

#include"DirectoryEntry.h"
#include"SuperBlock.h"
#include"DirectoryEntry.h"
#include"Buffer.h"

#define NBUF 15
#define BUFFER_SIZE 512

void	Initialize();

int		Strategy(Buffer* bp, int num);
int		DevStart(Buffer* bp);
void	Copy(char* src, char* dst, int count);
int		Getbuf(int num);

void	ls();
int		fopen(char* fname, int mode);
int		fclose(int fd);
int		fread(int fd, char* buffer, int length);
int		fwrite(int fd, char* buffer, int length);
int		copyin(char* src, char* name);
int		copyout(char* dst, char* name);
int		fcreate(char* fname, int mode);
int		fdelete(char* fname);
int		flseek(int fd, int position);

int		icopy(int fd);
int		Getaddr(int fd, int num);

void	LoadSuperBlock();

#endif // !1

