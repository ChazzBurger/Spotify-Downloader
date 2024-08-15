#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include <QString>

class StringUtils {
	public:
		static QString ValidateString(QString string);

		static int StringNumberToInt(QString string);
};

#endif
