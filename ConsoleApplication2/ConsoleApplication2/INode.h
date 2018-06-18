#pragma once
#ifndef INODE_H_INCLUDED
#define INODE_H_INCLUDED

class Inode
{
public:
	enum INodeFlag
	{
		ILOCK = 0x1,
		IUPD = 0x2,
		IACC = 0x4,
		IMOUNT = 0x8,
		IWANT = 0x10,
		ITEXT = 0x20
	};

	unsigned int in_flag;
	unsigned int in_mode;
	int in_count;
	int in_nlink;
	short in_dev;
	int in_number;
	int in_uid;
	int in_gid;
	int in_size;
	int in_addr[10];
	int in_lastr;
	int in_position;

	Inode();
	~Inode();

private:

};

class DiskInode
{
public:
	DiskInode();
	~DiskInode();

	unsigned int d_mode;
	int d_nlink;
	short d_uid;
	short d_gid;
	int d_size;
	int d_addr[10];
	int d_atime;
	int d_mtime;

private:

};

DiskInode::DiskInode()
{
}

DiskInode::~DiskInode()
{
}

Inode::Inode()
{
}

Inode::~Inode()
{
}

#endif // !INODE_H_INCLUDED

