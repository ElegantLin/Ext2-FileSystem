#pragma once
#ifndef BUFFER_H_INCLUDED
#define BUFFER_H_INCLUDED
class Buffer
{
public:
	enum BufferFlag
	{
		BUFFER_WRITE = 0x1,
		BUFFER_READ = 0x2,
		BUFFER_DONE = 0x4,
		BUFFER_DONE = 0x8,
		BUFFER_BUSY = 0x10,
		BUFFER_WANTED = 0x20,
		BUFFER_ASYNC = 0x40,
		BUFFER_DELWRI = 0x80
	};
	Buffer();
	~Buffer();

	unsigned int buffer_flags;

	int padding;

	Buffer* b_forw;
	Buffer* b_back;
	Buffer* av_forw;
	Buffer* av_back;

	short b_dev;
	int b_wcount;
	unsigned char* b_addr;
	int b_blkno;
	int b_error;
	int b_resid;
	int b_time;

private:

};

Buffer::Buffer()
{
}

Buffer::~Buffer()
{
}


#endif // !BUFFER_H_INCLUDED
