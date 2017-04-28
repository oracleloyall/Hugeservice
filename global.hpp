/*
 * global.hpp
 *
 *  Created on: 2013-9-22
 *      Author: root
 */

#ifndef GLOBAL_HPP_
#define GLOBAL_HPP_

// basic compile options

#define MAX_CONTEXT 65535

#define		SW_CHANGE
//#define		LOG4CXX
#define		H3C_SOFT_ID  65535
#define		H3C_TEST

//#define		WLAN_ENRITY
#define H_SAFE_MODE
//#define H_MQ_DISABLE

#define H_DEBUG
#define H_SIMPLE

#ifdef H_DEBUG

// debug summary
//#define H_PRINT_MEMORY
//#define H_PRINT_NETWORK
// debug summary end

// debug print
#define	H_LOGOUT
#define H_PRINT_LOG_DATE
#define H_PRINT_RECV_PACKET
//#define H_PRINT_RECV_PACKET_CE
#define H_PRINT_SEND_PACKET
#define H_PRINT_ACK
#define H_PRINT_UPGOING_JMS
// debug print end

#endif

//; will defined by build template,

#define H_GZIP
#define H_ICONV

// platform options

#ifdef H_MIPS
#define H_EB
#undef H_ICONV
#endif

#define H_64BIT

#include <string>
#include <iostream>
#include <cstring>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <malloc.h>

#include <sys/time.h>
#include <sys/statfs.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <libgen.h>
#include <pthread.h>
#include <fcntl.h>
#include <list>
#include <math.h>
#include <dirent.h>
#include <stdint.h>

using namespace std;

typedef int Integer;
typedef int64_t Int64;
typedef int64_t* pInt64;
typedef uint64_t UInt64;
typedef uint64_t* pUInt64;
typedef uint Cardinal;
typedef Cardinal* pCardinal;
typedef unsigned short int Word;
typedef Word* pWord;
typedef unsigned char Byte;
typedef Byte* pByte;
typedef double Double;
typedef Double* pDouble;

#endif /* GLOBAL_HPP_ */
