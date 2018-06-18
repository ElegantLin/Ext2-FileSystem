#pragma once
#ifndef SUPERBLOCK_H_INCLUDED
#define SUPERBLOCK_H_INCLUDED
#include<string.h>

class SuperBlock
{
public:
	SuperBlock();
	~SuperBlock();
	int sp_isize;
	int sp_fsize;

	int sp_nfree;
	int sp_free[100];

	int sp_ninode;
	int sp_inode[100];

	int sp_flock;
	int sp_ilock;

	int sp_fmod;
	int sp_ronly;
	int sp_time;
	int padding[47];

private:

};

SuperBlock::SuperBlock()
{
}

SuperBlock::~SuperBlock()
{
}

#endif // !SUPERBLOCK_H_INCLUDED

