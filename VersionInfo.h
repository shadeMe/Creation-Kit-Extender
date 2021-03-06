// Template version resource
// Build number format = MMDD

#ifndef __SME_VERSION_H__
#define __SME_VERSION_H__

#include "BuildInfo.h"

#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)

#define VERSION_MAJOR               0
#define VERSION_MINOR               1

#define VER_COMPANYNAME_STR				"Imitation Camel"

#if defined(CKE)
	#define VER_FILE_DESCRIPTION_STR    "A plugin for the Skyrim Script Extender"
#else
	#define VER_FILE_DESCRIPTION_STR    "A component of the Creation Kit Extender"
#endif

#define VER_FILE_VERSION            VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION, VERSION_BUILD
#define VER_FILE_VERSION_STR        STRINGIZE(VERSION_MAJOR)        \
									"." STRINGIZE(VERSION_MINOR)    \
									"." STRINGIZE(VERSION_REVISION) \
									"." STRINGIZE(VERSION_BUILD)    \

#if defined(CKE)
	#define VER_PRODUCTNAME_STR         "Creation Kit Extender"
#elif defined(CKE_BSAVIEWER)
	#define VER_PRODUCTNAME_STR         "BSAViewer"
#elif defined(CKE_TAGBROWSER)
	#define VER_PRODUCTNAME_STR         "TagBrowser"
#elif defined(CKE_USEINFOLIST)
	#define VER_PRODUCTNAME_STR         "UseInfoList"
#else
	#define VER_PRODUCTNAME_STR         "<Unknown>"
#endif

#define VER_PRODUCT_VERSION         VER_FILE_VERSION
#define VER_PRODUCT_VERSION_STR     VER_FILE_VERSION_STR
#define VER_ORIGINAL_FILENAME_STR	VER_PRODUCTNAME_STR ".dll"
#define VER_INTERNAL_NAME_STR       VER_ORIGINAL_FILENAME_STR

#define VER_COPYRIGHT_STR           "Copyright shadeMe (C) 2013"

#ifdef _DEBUG
  #define VER_VER_DEBUG             VS_FF_DEBUG
#else
  #define VER_VER_DEBUG             0
#endif

#define VER_FILEOS                  VOS_NT_WINDOWS32
#define VER_FILEFLAGS               VER_VER_DEBUG
#define VER_FILETYPE				VFT_DLL

#define MAKE_SME_VERSION(major, minor, rev, build)			(((major & 0xFF) << 24) | ((minor & 0xFF) << 16) | ((build & 0xFFF) << 4) | ((rev & 0xF)))

#define PACKED_SME_VERSION		MAKE_SME_VERSION(VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION, VERSION_BUILD)

#define SME_VERSION_MAJOR(version)		(version >> 24) & 0xFF
#define SME_VERSION_MINOR(version)		(version >> 16) & 0xFF
#define SME_VERSION_BUILD(version)		(version >> 4) & 0xFFF
#define SME_VERSION_REVISION(version)	(version) & 0xF

#endif /* __SME_VERSION_H__ */
