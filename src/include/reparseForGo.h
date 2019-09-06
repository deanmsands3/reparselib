// reparseForGo.h
#ifdef __cplusplus
extern "C" {
#endif
	char const* ConvertCharArrayToLPCWSTR(char* path);
	
	_Bool ReparsePointExists(char const* path);
	
	_Bool GetReparseBuffer(char const* path);
	_Bool GetReparseGUID(char const* path);
	_Bool GetReparseTag(char const* path, long* tag);
	
	_Bool DeleteReparsePoint(char const* path);
	_Bool CreateCustomReparsePoint(char const* path, void* buffer, int size, int guid, long tag);
	
	_Bool IsSymbolicLink(char const* path);
	_Bool IsSymbolicLinkRelative(char const* path);
	_Bool IsJunctionPoint(char const* path);
	_Bool IsMountPoint(char const* path);
	
	_Bool GetPrintName(char const* path, short nameLength);
	_Bool GetSubstituteName(char const* path, short nameLength);
	
	_Bool CreateSymlink(char const* link, char const* name, char const* substitute, _Bool isRelative);
	_Bool CreateJunction(char const* link, char const* name, char const* substitute);
#ifdef __cplusplus
}
#endif
