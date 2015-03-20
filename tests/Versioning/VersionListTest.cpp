#include <sstream>

#include "VersionList.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP (VersionList) {
  std::string   myVersionString;

  void setup () {
    myVersionString = "$Id$";
  }

  void teardown () {
  }
};

void checkVersionList (const std::string& versionString) {
  VersionList&  versionList = VersionList::getInstance ();
  std::ostringstream versionsStream;
  versionsStream << versionList;
  std::string versionsString = versionsStream.str ();
  CHECK (std::string::npos != versionsString.find (versionString));
}

TEST (VersionList, AddsHeaderVersionInfoToOutput) {
  checkVersionList (VersionList::getHeaderVersionString ());
}

TEST (VersionList, AddsSourceVersionInfoToOutput) {
  checkVersionList (VersionList::getSourceVersionString ());
}

TEST (VersionList, AddVersionListTestInfoToOutput) {
  VersionList::getInstance ().add (myVersionString);
  checkVersionList (myVersionString);
}
