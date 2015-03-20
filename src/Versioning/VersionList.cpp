#include "VersionList.h"

VersionList::VersionList () {
}

VersionList::~VersionList () {
}

bool    VersionList::addSelfVersions () {
  VersionList& versionList = getInstance ();
  versionList.add (_headerVersionString);
  versionList.add (_sourceVersionString);
  return true;
}

const std::string       VersionList::_headerVersionString = _VERSION_LIST_HEADER_VERSION_STRING_;
const std::string       VersionList::_sourceVersionString = "$Id$";
bool                    VersionList::_versionsAdded = addSelfVersions ();
