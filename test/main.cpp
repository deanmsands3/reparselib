#include "../reparselib/include/stdafx.h"
#include "../reparselib/include/reparselib.h"

int main() {

	//LPCWSTR mainPath = L"C:\\Users\\CGU\\Desktop\\OriginalFolder";
	char* noJunctionPath = "C:\\Users\\CGU\\Desktop\\OriginalFolder";
	LPCWSTR convertedNoJunctionPath = ConvertCharArrayToLPCWSTR(noJunctionPath);
	bool isNoJunction = IsJunctionPoint(convertedNoJunctionPath);

	//LPCWSTR junctionPath = L"C:\\Users\\CGU\\Desktop\\Junction";
	char* junctionPath = "C:\\Users\\CGU\\Desktop\\JunctionCreatedCode";
	LPCWSTR convertedJunctionPath = ConvertCharArrayToLPCWSTR(junctionPath);
	bool isJunction = IsJunctionPoint(convertedJunctionPath);

	LPCWSTR name = ConvertCharArrayToLPCWSTR("JunctionName");
	LPCWSTR substitute = ConvertCharArrayToLPCWSTR("JunctionSubstitute");
	bool junctionCreated = CreateJunction(convertedJunctionPath, name, substitute);

	//path where to put the reparse file
	LPCWSTR reparsePath = ConvertCharArrayToLPCWSTR(junctionPath);

	// buffer => input data
	DWORD tag = 123;
	WORD datalength = 2;
	WORD reserved = 0;
	GUID guid = GUID();
	BYTE data = BYTE();

	PREPARSE_GUID_DATA_BUFFER buffer = PREPARSE_GUID_DATA_BUFFER();
	buffer->GenericReparseBuffer = { data };
	buffer->ReparseDataLength = datalength;
	buffer->ReparseGuid = guid;
	buffer->ReparseTag = tag;
	
	bool reparseCreated = CreateCustomReparsePoint(reparsePath, buffer, buffer->ReparseDataLength, buffer->ReparseGuid, buffer->ReparseTag);


	return 0;
}