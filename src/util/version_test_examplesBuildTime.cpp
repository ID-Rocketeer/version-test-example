#include "version_test_examplesBuildTime.h"

version_test_examplesBuildTime::version_test_examplesBuildTime()
: dateTime(__DATE__ " " __TIME__)
{
}

version_test_examplesBuildTime::~version_test_examplesBuildTime()
{
}

const char* version_test_examplesBuildTime::GetDateTime()
{
    return dateTime;
}

